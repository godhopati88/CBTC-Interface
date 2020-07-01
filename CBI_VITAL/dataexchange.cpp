#include "dataexchange.h"

DataExchange::~DataExchange()
{
    server_cbi.close();
}

int DataExchange::run()
{    
    cSync=0;

    QStringList mTList;
    mTList = readConf("/home/root/CBI.conf");

//    if (mTList.length()<1) return 1;

    QString ipCBI, ipZC;
    asMB = mTList[0]; //"M";//mTList[0];

    /************* CBI VITAL <-> NV *************/
    ipCBI= mTList[1]; //"192.168.10.50";//mTList[1];
    //server_cbi.Run(asMB,ipCBI,5555);
    server_cbi.run(ipCBI,5555);


    /************* CBI VITAL <-> SIMULATOR *************/
    //udp_simulator.runServer("192.168.10.50", 9090, 1000);

    /********** CBI VITAL <-> FS ZC **********/
    //udp_zc_simulator.runServer("192.168.10.50",5050,1000);

    /*********** CBI VITAL <-> ZC ***********/
    //client_zc.run(asMB,ip,4444,"192.168.10.40");
    ipZC=mTList[2];
    client_zc.run(ipZC,4444,"192.168.5.40");

    /* Internal Communication between IOP-CP1/CP2 */
    udp_cp.runYCOM("127.0.0.1", 1111, 3333, 50);

    /* VITAL initialize */
    //VITALALL_initialize();

    /* Master - Backup Redundancy Communication*/
//    ip = mTList[2];//
//    if (asMB == "M")
//    {
//        udp_main.runServer(ip,3333);
//    }
//    else
//    {
//        udp_main.runClient(ip,3333,"192.168.3.10");
//        udp_main.txData="ABCDE...";
//    }


    //Init_DataNV_to_CP.fill(char(0),19);
    Init_DataNV_to_CP.fill(char(0),20);
    Init_DataZC_to_CP.fill(char(0),8);

    QTimer *sTimer = new QTimer(this);
    connect(sTimer,SIGNAL(timeout()),this,SLOT(exchangeProcess()));
    sTimer->start(50);

    QTimer *logTimer = new QTimer(this);
    connect(logTimer,SIGNAL(timeout()),this,SLOT(createLog()));
    logTimer->start(100);

    return 0;
}

void DataExchange::exchangeProcess()
{
    QByteArray DataSync, DataComm;
    QByteArray Data_NV_to_CP, Data_ZC_to_CP;
    QBitArray CommBits(8);

    DataSync[0] =  (cSync & 0xFF00) >> 8;
    DataSync[1] =  (cSync & 0x00FF);

    /*************** COMM STATUS **************/
    DataComm.resize(CommBits.count()/8);
    DataComm.fill(0);

    //if (server_cbi.getStatusM()=="Connect.") CommBits[0]=true;
    if (server_cbi.getStatus_M()=="Connect.") CommBits[0]=true;
    else CommBits[0] = false;

    // Convert from QBitArray to QByteArray
    for(int b=0; b<CommBits.count(); ++b)
        DataComm[b/8] = (DataComm.at(b/8) | ((CommBits[b]?1:0)<<((b%8))));



    /* Forward Data From NV and ZC to CP */
    if(!server_cbi.getRxData_M().isEmpty() && server_cbi.getRxData_M().length()==20) // old length data = 19
    {Data_NV_to_CP = server_cbi.getRxData_M();Init_DataNV_to_CP = Data_NV_to_CP;}
    else {Data_NV_to_CP = Init_DataNV_to_CP;}
    //else Data_NV_to_CP.fill(char(0),19);

    /***** retrieve data from zc *****/
    if(!client_zc.getRxData().isEmpty() && client_zc.getRxData().length()==8) {Data_ZC_to_CP = client_zc.getRxData();Init_DataZC_to_CP = Data_ZC_to_CP;}
    else Data_ZC_to_CP = Init_DataZC_to_CP;
    //else Data_ZC_to_CP.fill(char(0),8);

    udp_cp.setTxData(DataSync + DataComm + Data_NV_to_CP + Data_ZC_to_CP); // + Data_NV_to_CP + Data_ZC_to_CP);


    /* Forward Data From CP to NV and ZC */
    QByteArray Data_CP_to_NV,Data_CP_to_ZC;
    if (!udp_cp.getRxData().isEmpty() && udp_cp.getRxData().length()==72) // 69
    {
//        Data_CP_to_NV = udp_cp.getRxData().mid(0,39);
//        Data_CP_to_ZC = udp_cp.getRxData().mid(39,30);

        Data_CP_to_NV = udp_cp.getRxData().mid(0,42);
        Data_CP_to_ZC = udp_cp.getRxData().mid(42,30);

        Data_CP_to_ZC[24] = udp_cp.getByteStatus();

        //server_cbi.setTxDataM(Data_CP_to_NV);
        server_cbi.setTxData(Data_CP_to_NV);
        client_zc.setTxData(char(77) + Data_CP_to_ZC);

    }
    else
    {
//        server_cbi.setTxData(Data_CP_to_NV.fill(char(0),39));
//        client_zc.setTxData(char(77) + Data_CP_to_ZC.fill(char(0),30));

        server_cbi.setTxData(Data_CP_to_NV.fill(char(0),42));
        client_zc.setTxData(char(77) + Data_CP_to_ZC.fill(char(0),30));
    }

    //client_zc.setTxData("test...!");

    cSync++; // Count Sync for mutual checking in CP

}

void DataExchange::createLog()
{
    QFile mFile("/home/root/log");
    QString mText="";

    mText = "// *********** DATA MONITORING CBI VITAL (" + asMB + ") *********** //";

    mText.append("\n=> CP, status : ");mText.append(udp_cp.getStatus());
    mText.append("\n  rxData : ");mText.append(printRaw(udp_cp.getRxData()));
    mText.append("\n  txData : ");mText.append(printRaw(udp_cp.getTxData()));

//    mText.append("\n");

//    mText.append("to Field Simulator ZC, status : "); mText.append(udp_zc_simulator.getStatus());
//    mText.append("\n  rx : ");mText.append(printRaw(udp_zc_simulator.getRxData()));
//    mText.append("\n  tx : ");mText.append(printRaw(udp_zc_simulator.getTxData()));

    mText.append("\n\n");

    mText.append("=> ZC (M), status : ");mText.append(client_zc.getStatus());
    mText.append("\n rx : ");mText.append(printRaw(client_zc.getRxData()));
    mText.append("\n tx : ");mText.append(printRaw(client_zc.getTxData()));

    mText.append("\n\n");

    mText.append("=> CBI NV (M), status : ");mText.append(server_cbi.getStatus_M());
    mText.append("\n rx : ");mText.append(printRaw(server_cbi.getRxData_M()));
    mText.append("\n tx : ");mText.append(printRaw(server_cbi.getTxData()));

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
            //**qDebug() << "Data :" << mTList[i];
        }

        if(i>3 && i<7){
            for( ; i<10; i++) {
                mTList.append(".");
                //**qDebug() << "i :" << mTList[i];
            }
        }

        mFile.close();
        return mTList;
    }
    else // terminate program if there is no conf's file
    {
        //**qDebug() << Filename << " file ..<not found>";
        //**qDebug() << " Program terminated !";
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

