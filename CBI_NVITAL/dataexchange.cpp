#include "dataexchange.h"

int DataExchange::run()
{
    QStringList mTList;
    mTList = readConf("/home/nvtl/NV.conf");

    if (mTList.length()<1) return 1;

    QString ip;

    //asMB = mTList[0];//"M";//mTList[0];
    asMB = getStringAfter(mTList[0],"=");
    ip = getStringAfter(mTList[1],"=");
    /************* CBI NV <-> VITAL *************/
    //ip=mTList[1];//"192.168.10.60";//mTList[1];
    //client_cbi_M.run(asMB,ip,5555,"192.168.10.50");
    client_cbi_M.run(ip,5555,"192.168.10.50");

    /************* CBI NV <-> VDU *************/
    /******* MAINLINE *******/
    udp_mainline_M.runServer("192.168.1.60",9292,1000);
    /****** BACK UP ******/
    udp_mainline_B.runServer("192.168.1.60",9393,1000);
    /******* DEPOT *******/
    udp_depot_M.runServer("192.168.1.60",9090,1000);
    /******* Technician Terminal *******/
    udp_TT_Mainline.runServer("192.168.1.60",9494,1000);
    udp_TT_depo.runServer("192.168.1.60",9595,1000);
    /******* Wall Display *******/
    udp_wallDisplay_MainLine.runServer("192.168.1.60",8282,1000);
    udp_wallDisplay_Depo.runServer("192.168.1.60",8383,1000);

    /************* CBI NV <-> ATS *************/
    //client_ats.run(asMB,"192.168.1.40",3000,"192.168.1.70");
    client_ats.run("192.168.1.60",3000,"192.168.1.70");

    /*************** ARS **************/
    server_ars_M.run("192.168.1.60",4567);

    //Data_Init.fill(char(0),39);
    Data_Init.fill(char(0),42);

    /* NON VITAL INITIALIZE */
    NONVITALALL_initialize();


    QTimer *sTimer = new QTimer(this);
    connect(sTimer,SIGNAL(timeout()),this,SLOT(exchangeProcess()));
    sTimer->start(100);

    QTimer *logTimer = new QTimer(this);
    connect(logTimer,SIGNAL(timeout()),this,SLOT(createLog()));
    logTimer->start(100);

    return 0;
}

DataExchange::~DataExchange()
{
    server_ars_M.close();
}

void DataExchange::exchangeProcess()
{
    /* NON VITAL PROCESS */
    // indikasi gangguan com V-NV ke HMI
    //NONVITALALL_U.NVCOMM[0] = true;
    NONVITALALL_U.NVCOMM[1] = true;

    //QByteArray Data_Vtl;
    if(!client_cbi_M.getRxData().isEmpty() && client_cbi_M.getRxData().length()==42) //old length data = 39
    {
        Data_Vtl = client_cbi_M.getRxData();
        Data_Init = Data_Vtl;
        DataFromVital(Data_Vtl);
        NONVITALALL_U.NVCOMM[0] = true;
    }
    else {
        Data_Vtl = Data_Init;
        //Data_Vtl.fill(char(0),39);
        DataFromVital(Data_Vtl);
        NONVITALALL_U.NVCOMM[0] = false;
    }

    //qDebug() << "sistem 1 : " << NONVITALALL_U.DATAFROMV[307] << "sistem 2 : " << NONVITALALL_U.DATAFROMV[308] << "comm 1 : " << NONVITALALL_U.DATAFROMV[309] << "comm 2 : " << NONVITALALL_U.DATAFROMV[310];

    /****** MAINLINE ******/
    if(!udp_mainline_M.getRxData().isEmpty()) {DataFromVDU(udp_mainline_M.getRxData());}
    else if(!udp_mainline_B.getRxData().isEmpty()) {DataFromVDU(udp_mainline_B.getRxData());}
    else {qDebug() << "Main - Back Up VDU not connected....!!!";}

    /******* DEPOT *******/
    if(!udp_depot_M.getRxData().isEmpty()) DataFromDEPOT(udp_depot_M.getRxData());
    else qDebug() << "DEPOT VDU not connected....!!!";

    /******* Technician Terminal *******/

    /***** NV - ATS *****/
    QByteArray Data_NV_to_ATS;
    Data_NV_to_ATS[0]=31;
    Data_NV_to_ATS[1]=30;
    Data_NV_to_ATS[2]=30;
    Data_NV_to_ATS[3]=30;
    Data_NV_to_ATS[4]=31;

    /******* ARS *******/
    if(server_ars_M.getRxData_M().count()==5)DataFromARS(server_ars_M.getRxData_M());
    else qDebug() << "ARS not connected....!!!";

    client_ats.setTxData(char(77) + Data_NV_to_ATS);

    NONVITALALL_step();

    udp_depot_M.setTxData(DataToDEPOT(sizeof(NONVITALALL_Y.DEPOTDO)));
    udp_mainline_M.setTxData(DataToVDU(sizeof(NONVITALALL_Y.MAINLINEDO)));
    udp_mainline_B.setTxData(DataToVDU(sizeof(NONVITALALL_Y.MAINLINEDO)));

    /******* Technician Terminal Mainline & Depo *******/
    udp_TT_Mainline.setTxData(DataToTT_Mainline(sizeof(NONVITALALL_Y.DATATOLOGM)));
    udp_TT_depo.setTxData(DataToTT_Depo(sizeof(NONVITALALL_Y.DATATOLOGD)));

    /******* Wall DIsplay Controller *******/
    udp_wallDisplay_MainLine.setTxData(DataToVDU(sizeof(NONVITALALL_Y.MAINLINEDO)));
    udp_wallDisplay_Depo.setTxData(DataToDEPOT(sizeof(NONVITALALL_Y.DEPOTDO)));

    //client_cbi_M.setTxData(char(77) + DataToVital(sizeof(NONVITALALL_Y.DATATONV)));
    client_cbi_M.setTxData(char(77) + DataToVital(sizeof(NONVITALALL_Y.DATATOV)));

    // send data 38 bit to ARS
    server_ars_M.setTxData(DataToARS(sizeof(NONVITALALL_Y.DATATOARS)));

}

void DataExchange::createLog()
{
        QFile mFile("/home/nvtl/log");
        QString mText="";

        mText = "// *********** DATA MONITORING CBI NON VITAL (" + asMB + ") *********** //";

//        mText.append("to Redundancy, status : "); mText.append(udp_mainline.status);
//        mText.append("\n  rx : ");mText.append(udp_mainline.rxData);
//        mText.append("\n  tx : ");mText.append(udp_mainline.txData);

        mText.append("\n\n");

        mText.append("=> VDU DEPO");
        mText.append("\n rx_M : (");mText.append(udp_depot_M.getStatus());mText.append(") : ");mText.append(printRaw(udp_depot_M.getRxData()));
        mText.append("\n rx_B : ");//mText.append(udp_depot_B.getStatus());mText.append(") : ");mText.append(printRaw(udp_depot_B.getRxData()));
        mText.append("\n tx : ");mText.append(printRaw(udp_depot_M.getTxData()));

        mText.append("\n\n");

        mText.append("=> VDU MAINLINE");
        mText.append("\n rx_M : (");mText.append(udp_mainline_M.getStatus());mText.append(") : ");mText.append(printRaw(udp_mainline_M.getRxData()));
        mText.append("\n rx_B : (");mText.append(udp_mainline_B.getStatus());mText.append(") : ");mText.append(printRaw(udp_mainline_B.getRxData()));
        mText.append("\n tx : ");mText.append(printRaw(udp_mainline_M.getTxData()));

        mText.append("\n\n");

        mText.append("=> CBI VTL");
        mText.append("\n rx_M : (");mText.append(client_cbi_M.getStatus());mText.append(") : ");mText.append(printRaw(client_cbi_M.getRxData()));
        mText.append("\n rx_B : (");mText.append(client_cbi_B.getStatus());mText.append(") : ");mText.append(printRaw(client_cbi_B.getRxData()));
        mText.append("\n tx : ");mText.append(printRaw(client_cbi_M.getTxData()));

        mText.append("\n\n");

        mText.append("=> ATS");
        mText.append("\n rx_M : (");mText.append(client_ats.getStatus());mText.append(") : ");mText.append(printRaw(client_ats.getRxData()));
        mText.append("\n rx_B : ");//mText.append(client_ats.getStatus());mText.append(") : ");mText.append(printRaw(client_ats.getRxData()));
        mText.append("\n tx : ");mText.append(printRaw(client_ats.getTxData()));

        mText.append("\n\n");

        mText.append("=> Wall Display");
        mText.append("\n rx_Depo : (");mText.append(udp_wallDisplay_Depo.getStatus());mText.append(") : ");mText.append(printRaw(udp_wallDisplay_Depo.getRxData()));
        mText.append("\n tx_Depo : ");mText.append(printRaw(udp_wallDisplay_Depo.getTxData()));
        mText.append("\n\n rx_Mainline : (");mText.append(udp_wallDisplay_MainLine.getStatus());mText.append(") : ");mText.append(printRaw(udp_wallDisplay_MainLine.getRxData()));
        mText.append("\n tx_Mainline : ");mText.append(printRaw(udp_wallDisplay_MainLine.getTxData()));

        mText.append("\n\n");

        mText.append("=> Technician Terminal");
        mText.append("\n rx_Depo : (");mText.append(udp_TT_depo.getStatus());mText.append(") : ");mText.append(printRaw(udp_TT_depo.getRxData()));
        mText.append("\n tx_Depo : ");mText.append(printRaw(udp_TT_depo.getTxData()));
        mText.append("\n\n rx_Mainline : (");mText.append(udp_TT_Mainline.getStatus());mText.append(") : ");mText.append(printRaw(udp_TT_Mainline.getRxData()));
        mText.append("\n tx_Mainline : ");mText.append(printRaw(udp_TT_Mainline.getTxData()));

        mText.append("\n\n");

        mText.append("=> ARS");
        mText.append("\n rx_M : (");mText.append(server_ars_M.getStatus_M());mText.append(") : ");mText.append(printRaw(server_ars_M.getRxData_M()));
        mText.append("\n rx_B : ");//mText.append(client_ats.getStatus());mText.append(") : ");mText.append(printRaw(client_ats.getRxData()));
        mText.append("\n tx : ");mText.append(printRaw(server_ars_M.getTxData()));


        if(mFile.open(QFile::WriteOnly | QFile::Text))
        {
            QTextStream out(&mFile);
            out << mText;

            mFile.close();
        }
}

QStringList DataExchange::readConf(QString Filename)
{
    QFile mFile(Filename);
    QStringList mTList;
    int i;

    if( mFile.open(QFile::ReadOnly))
    {
        QTextStream in(&mFile);
        QString mText = in.readAll();

        mTList = mText.split(QRegExp("[\r\n]"),QString::SkipEmptyParts);

        for(i=0; i<mTList.length();i++)
        {
            qDebug() << "Data :" << mTList[i];
        }

        if(i>3 && i<7){
            for( ; i<10; i++) {
                mTList.append(".");
                qDebug() << "i :" << mTList[i];
            }
        }

        mFile.close();
        return mTList;
    }
    else // terminate program if there is no conf's file
    {
        qDebug() << Filename << " file ..<not found>";
        qDebug() << " Program terminated !";
        return mTList;
    }

}

QString DataExchange::printRaw(QByteArray data)
{
    QString print;

    for(int i=0; i<data.size(); i++){
       if((i != 0) && (i%40 == 0)) print.append("\n       ");
        else if((i != 0) && (i%8 == 0)) print.append("- ");
        print.append("x" + QString("%1").arg((quint8)data[i], 2, 16, QLatin1Char( '0' )) + " ");
    }
    return print;
//    QString print;

//    for(int i=0; i<data.size(); i++)
//        print.append("x" + QString("%1").arg((quint8)data[i], 2, 16, QLatin1Char( '0' )) + " ");

//    return print;
}

QString DataExchange::getStringAfter(QString Str, QString chr)
{
   return Str.mid(Str.indexOf(chr)+1, Str.length()-Str.indexOf(chr));
}

