#include "dataexchange.h"

DataExchange::~DataExchange()
{
    server_vobc.close();
    server_cbi.close();
}

int DataExchange::run()
{
    cSync=0;

    QStringList mTList;
    mTList = readConf("/home/root/zc.conf");

    if (mTList.length()<1) return 1;

    Init_VOBC1_to_CP.fill(char(0),17);
    Init_VOBC2_to_CP.fill(char(0),17);
    Init_VOBC3_to_CP.fill(char(0),17);
    Init_VOBC4_to_CP.fill(char(0),17);
    Init_VOBC5_to_CP.fill(char(0),17);
    Init_VOBC6_to_CP.fill(char(0),17);
    Init_CBI_to_CP.fill(char(0),30);
    Init_FromCP.fill(char(0),176);

    unreg_Status="0";
    EB_Release_Status="0";
    trainReg=0;
    ebRelease=0;

    EB_TS_1=0x00;
    EB_TS_2=0x00;
    EB_TS_3=0x00;
    EB_TS_4=0x00;
    EB_TS_5=0x00;
    EB_TS_6=0x00;

    Data_VOBC1_to_CP = Init_VOBC1_to_CP;
    Data_VOBC2_to_CP = Init_VOBC2_to_CP;
    Data_VOBC3_to_CP = Init_VOBC3_to_CP;
    Data_VOBC4_to_CP = Init_VOBC4_to_CP;
    Data_VOBC5_to_CP = Init_VOBC5_to_CP;
    Data_VOBC6_to_CP = Init_VOBC6_to_CP;

    QString ip;
    asMB = mTList[0];
    ip=mTList[1];
    QHostAddress ipZC(ip);

    /* ZC-CBI */
    QString ipCBI;
    ipCBI=mTList[2];
    server_cbi.run(ipCBI,4444);

    /* ZC-ATS */
    QString ipATS;
    ipATS=mTList[3];
    //client_ats.run(ip,4000,"192.168.4.70");
    client_ats.run(ipATS,4000,"192.168.4.70");


    /* ZC-VOBC */    
    //ip = mTList[1];
    QString caFile1 = ":/certs/ca.crt";
    QString certFile1 = ":/certs/" + ip + ".crt"; // 192.168.10.40.crt";
    QString keyFile1 = ":/certs/" + ip + ".key"; //192.168.10.40.key";
    quint16 portVobc=5555;
    //server_vobc.Run(asMB,ipZC,portVobc,caFile1,certFile1,keyFile1);

    server_vobc.run(ip,portVobc);

    /* Internal Communication between IOP-CP1/CP2 */
    udp_cp.runYCOM("127.0.0.1", 1111, 3333, 50);

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

    QByteArray DataSync, Data_CBI_to_CP, Data_ATS_to_CP;
    QByteArray Data_Comm, Comm_Spare, VOBC_Comm_StatusM, VOBC_Comm_StatusB;
    QBitArray Com_bitsM(8), Com_bitsB(8);

    DataSync[0] =  (cSync & 0xFF00) >> 8;
    DataSync[1] =  (cSync & 0x00FF);

    /****************************************************************************/
    /****************************************************************************/
    //prev i<3
    for(int i=0;i<6;i++)
    {
        if(server_vobc.getStatus_M(i)== "Connected.") Com_bitsM[i]=true;
        else Com_bitsM[i]=false;

        if(server_vobc.getStatus_B(i)== "Connected.") Com_bitsB[i]=true;
        else Com_bitsB[i]=false;
    }

    /*************** COMM STATUS [M] **************/
    VOBC_Comm_StatusM.resize(Com_bitsM.count()/8);
    VOBC_Comm_StatusM.fill(0);

    // Convert from QBitArray to QByteArray
    for(int b=0; b<Com_bitsM.count(); ++b)
        VOBC_Comm_StatusM[b/8] = (VOBC_Comm_StatusM.at(b/8) | ((Com_bitsM[b]?1:0)<<((b%8))));

    /*************** COMM STATUS [B] **************/
    VOBC_Comm_StatusB.resize(Com_bitsB.count()/8);
    VOBC_Comm_StatusB.fill(0);

    // Convert from QBitArray to QByteArray
    for(int b=0; b<Com_bitsB.count(); ++b)
        VOBC_Comm_StatusB[b/8] = (VOBC_Comm_StatusB.at(b/8) | ((Com_bitsB[b]?1:0)<<((b%8))));

    /****************************************************************************/
    /****************************************************************************/

//    QByteArray Data_ZC_to_ATS;


    /****************************************************************************/
    /****************************************************************************/
//    QByteArray Data_FromCP;

//    if(udp_cp.getStatus()=="Connect." && udp_cp.getRxData().length()==176) {
//        Data_FromCP=udp_cp.getRxData(); Init_FromCP = Data_FromCP;
//    }
//    else
//    {
//        Data_FromCP=Init_FromCP;
//    }

//    /****************************************************************************/
//    /*                            Send Data To ATS                              */
//    /****************************************************************************/
//    Data_ZC_to_ATS[0] = Data_FromCP[0];             /* idx	0 = Train 1 -> Id	*/
//    Data_ZC_to_ATS[1] = Data_FromCP[1];             /* idx	1 = Train 1 -> 3 West Post 	*/
//    Data_ZC_to_ATS[2] = Data_FromCP[2];             /* idx	2 = Train 1 -> 2 ..	*/
//    Data_ZC_to_ATS[3] = Data_FromCP[3];             /* idx	3 = Train 1 -> 1 ..	*/
//    Data_ZC_to_ATS[4] = Data_FromCP[4];             /* idx	4 = Train 1 -> 0 ..	*/
//    Data_ZC_to_ATS[5] = Data_FromCP[5];             /* idx	5 = Train 1 -> 3 East Post 	*/
//    Data_ZC_to_ATS[6] = Data_FromCP[6];             /* idx	6 = Train 1 -> 2 ..	*/
//    Data_ZC_to_ATS[7] = Data_FromCP[7];             /* idx	7 = Train 1 -> 1 ..	*/
//    Data_ZC_to_ATS[8] = Data_FromCP[8];             /* idx	8 = Train 1 -> 0 ..	*/
//    Data_ZC_to_ATS[9] = Data_FromCP[9];             /* idx	9 = Train 1 -> Line	*/
//    Data_ZC_to_ATS[10] = Data_FromCP[10];           /* idx	10 = Train 1 -> Direction	*/
//    Data_ZC_to_ATS[11] = Data_FromCP[11];           /* idx	11 = Train 1 -> Parted Train	*/
//    Data_ZC_to_ATS[12] = Data_FromCP[12];           /* idx	12 = Train 1 -> Comm Status	*/
//    Data_ZC_to_ATS[13] = Data_FromCP[13];           /* idx	13 = Train 2 -> Id	*/
//    Data_ZC_to_ATS[14] = Data_FromCP[14];           /* idx	14 = Train 2 -> 3 West Post 	*/
//    Data_ZC_to_ATS[15] = Data_FromCP[15];           /* idx	15 = Train 2 -> 2 ..	*/
//    Data_ZC_to_ATS[16] = Data_FromCP[16];           /* idx	16 = Train 2 -> 1 ..	*/
//    Data_ZC_to_ATS[17] = Data_FromCP[17];           /* idx	17 = Train 2 -> 0 ..	*/
//    Data_ZC_to_ATS[18] = Data_FromCP[18];           /* idx	18 = Train 2 -> 3 East Post 	*/
//    Data_ZC_to_ATS[19] = Data_FromCP[19];           /* idx	19 = Train 2 -> 2 ..	*/
//    Data_ZC_to_ATS[20] = Data_FromCP[20];           /* idx	20 = Train 2 -> 1 ..	*/
//    Data_ZC_to_ATS[21] = Data_FromCP[21];           /* idx	21 = Train 2 -> 0 ..	*/
//    Data_ZC_to_ATS[22] = Data_FromCP[22];           /* idx	22 = Train 2 -> Line	*/
//    Data_ZC_to_ATS[23] = Data_FromCP[23];           /* idx	23 = Train 2 -> Direction	*/
//    Data_ZC_to_ATS[24] = Data_FromCP[24];           /* idx	24 = Train 2 -> Parted Train	*/
//    Data_ZC_to_ATS[25] = Data_FromCP[25];           /* idx	25 = Train 2 -> Comm Status	*/
//    Data_ZC_to_ATS[26] = Data_FromCP[26];           /* idx	26 = Train 3 -> Id	*/
//    Data_ZC_to_ATS[27] = Data_FromCP[27];           /* idx	27 = Train 3 -> 3 West Post 	*/
//    Data_ZC_to_ATS[28] = Data_FromCP[28];           /* idx	28 = Train 3 -> 2 ..	*/
//    Data_ZC_to_ATS[29] = Data_FromCP[29];           /* idx	29 = Train 3 -> 1 ..	*/
//    Data_ZC_to_ATS[30] = Data_FromCP[30];           /* idx	30 = Train 3 -> 0 ..	*/
//    Data_ZC_to_ATS[31] = Data_FromCP[31];           /* idx	31 = Train 3 -> 3 East Post 	*/
//    Data_ZC_to_ATS[32] = Data_FromCP[32];           /* idx	32 = Train 3 -> 2 ..	*/
//    Data_ZC_to_ATS[33] = Data_FromCP[33];           /* idx	33 = Train 3 -> 1 ..	*/
//    Data_ZC_to_ATS[34] = Data_FromCP[34];           /* idx	34 = Train 3 -> 0 ..	*/
//    Data_ZC_to_ATS[35] = Data_FromCP[35];           /* idx	35 = Train 3 -> Line	*/
//    Data_ZC_to_ATS[36] = Data_FromCP[36];           /* idx	36 = Train 3 -> Direction	*/
//    Data_ZC_to_ATS[37] = Data_FromCP[37];           /* idx	37 = Train 3 -> Parted Train	*/
//    Data_ZC_to_ATS[38] = Data_FromCP[38];           /* idx	38 = Train 3 -> Comm Status	*/
//    Data_ZC_to_ATS[39] = Data_FromCP[39];           /* idx	39 = Train 4 -> Id	*/
//    Data_ZC_to_ATS[40] = Data_FromCP[40];       	/* idx	40 = Train 4 -> 3 West Post 	*/
//    Data_ZC_to_ATS[41] = Data_FromCP[41];       	/* idx	41 = Train 4 -> 2 ..	*/
//    Data_ZC_to_ATS[42] = Data_FromCP[42];       	/* idx	42 = Train 4 -> 1 ..	*/
//    Data_ZC_to_ATS[43] = Data_FromCP[43];       	/* idx	43 = Train 4 -> 0 ..	*/
//    Data_ZC_to_ATS[44] = Data_FromCP[44];           /* idx	44 = Train 4 -> 3 East Post 	*/
//    Data_ZC_to_ATS[45] = Data_FromCP[45];           /* idx	45 = Train 4 -> 2 ..	*/
//    Data_ZC_to_ATS[46] = Data_FromCP[46];           /* idx	46 = Train 4 -> 1 ..	*/
//    Data_ZC_to_ATS[47] = Data_FromCP[47];           /* idx	47 = Train 4 -> 0 ..	*/
//    Data_ZC_to_ATS[48] = Data_FromCP[48];           /* idx	48 = Train 4 -> Line	*/
//    Data_ZC_to_ATS[49] = Data_FromCP[49];           /* idx	49 = Train 4 -> Direction	*/
//    Data_ZC_to_ATS[50] = Data_FromCP[50];           /* idx	50 = Train 4 -> Parted Train	*/
//    Data_ZC_to_ATS[51] = Data_FromCP[51];           /* idx	51 = Train 4 -> Comm Status	*/
//    Data_ZC_to_ATS[52] = Data_FromCP[52];           /* idx	52 = Train 5 -> Id	*/
//    Data_ZC_to_ATS[53] = Data_FromCP[53];           /* idx	53 = Train 5 -> 3 West Post 	*/
//    Data_ZC_to_ATS[54] = Data_FromCP[54];       	/* idx	54 = Train 5 -> 2 ..	*/
//    Data_ZC_to_ATS[55] = Data_FromCP[55];           /* idx	55 = Train 5 -> 1 ..	*/
//    Data_ZC_to_ATS[56] = Data_FromCP[56];           /* idx	56 = Train 5 -> 0 ..	*/
//    Data_ZC_to_ATS[57] = Data_FromCP[57];           /* idx	57 = Train 5 -> 3 East Post 	*/
//    Data_ZC_to_ATS[58] = Data_FromCP[58];           /* idx	58 = Train 5 -> 2 ..	*/
//    Data_ZC_to_ATS[59] = Data_FromCP[59];           /* idx	59 = Train 5 -> 1 ..	*/
//    Data_ZC_to_ATS[60] = Data_FromCP[60];           /* idx	60 = Train 5 -> 0 ..	*/
//    Data_ZC_to_ATS[61] = Data_FromCP[61];           /* idx	61 = Train 5 -> Line	*/
//    Data_ZC_to_ATS[62] = Data_FromCP[62];           /* idx	62 = Train 5 -> Direction	*/
//    Data_ZC_to_ATS[63] = Data_FromCP[63];           /* idx	63 = Train 5 -> Parted Train	*/
//    Data_ZC_to_ATS[64] = Data_FromCP[64];           /* idx	64 = Train 5 -> Comm Status	*/
//    Data_ZC_to_ATS[65] = Data_FromCP[65];           /* idx	65 = Train 6 -> Id	*/
//    Data_ZC_to_ATS[66] = Data_FromCP[66];           /* idx	66 = Train 6 -> 3 West Post 	*/
//    Data_ZC_to_ATS[67] = Data_FromCP[67];           /* idx	67 = Train 6 -> 2 ..	*/
//    Data_ZC_to_ATS[68] = Data_FromCP[68];           /* idx	68 = Train 6 -> 1 ..	*/
//    Data_ZC_to_ATS[69] = Data_FromCP[69];           /* idx	69 = Train 6 -> 0 ..	*/
//    Data_ZC_to_ATS[70] = Data_FromCP[70];           /* idx	70 = Train 6 -> 3 East Post 	*/
//    Data_ZC_to_ATS[71] = Data_FromCP[71];           /* idx	71 = Train 6 -> 2 ..	*/
//    Data_ZC_to_ATS[72] = Data_FromCP[72];           /* idx	72 = Train 6 -> 1 ..	*/
//    Data_ZC_to_ATS[73] = Data_FromCP[73];           /* idx	73 = Train 6 -> 0 ..	*/
//    Data_ZC_to_ATS[74] = Data_FromCP[74];           /* idx	74 = Train 6 -> Line	*/
//    Data_ZC_to_ATS[75] = Data_FromCP[75];           /* idx	75 = Train 6 -> Direction	*/
//    Data_ZC_to_ATS[76] = Data_FromCP[76];           /* idx	76 = Train 6 -> Parted Train	*/
//    Data_ZC_to_ATS[77] = Data_FromCP[77];           /* idx	77 = Train 6 -> Comm Status	*/
//    Data_ZC_to_ATS[78] = Data_FromCP[78];           /* idx	78 = PSD  T1	*/
//    Data_ZC_to_ATS[79] = Data_FromCP[79];           /* idx	79 = PSD  TIB	*/
//    Data_ZC_to_ATS[80] = Data_FromCP[80];           /* idx	80 = PSD  T2	*/
//    Data_ZC_to_ATS[81] = Data_FromCP[81];           /* idx	81 = PSD  T3	*/
//    Data_ZC_to_ATS[82] = Data_FromCP[82];           /* idx	82 = EB Status	*/
//    Data_ZC_to_ATS[83] = Data_FromCP[83];           /* idx	83 = comm ZC & CBI Vital	*/
//    Data_ZC_to_ATS[84] = Data_FromCP[84];           /* idx	84 = spare	*/
//    Data_ZC_to_ATS[85] = Data_FromCP[85];           /* idx	85 = spare	*/
//    Data_ZC_to_ATS[86] = Data_FromCP[86];           /* idx	86 = spare	*/
//    Data_ZC_to_ATS[87] = Data_FromCP[87];           /* idx	87 = spare	*/
//    Data_ZC_to_ATS[88] = Data_FromCP[88];           /* idx	88 = spare	*/
//    Data_ZC_to_ATS[89] = Data_FromCP[89];           /* idx	89 = spare	*/





    /*********************************** ZC Communication Status  ******************************************/
    // communication status in Zone Controller
    quint8 commZCstatus=0;
    commZCstatus = (server_cbi.getByteStatus_M() & Init_CBI_to_CP[24]) & 0x01;                     // ZC - CBI Communication Status [M]
    commZCstatus = commZCstatus | (client_ats.getByteStatus() & 0x01) << 1; // ZC - ATS Communication Status [M]

    /***** EXTERNAL COMM ZC-ATS *****/
    /***** Tx ZC = 66 byte *****/
    QByteArray Data_ZC_to_ATS,buf_Comm;
    //confirm ke pak ade apakah proses komparasi antara com iop-cp vobc dan comm iop-iop zc-vobc di interface atau di cp
    // Data_ZC_to_ATS = Com_bitsM + Com_bitsB

    if(!udp_cp.getRxData().isEmpty()) {
        Data_ZC_to_ATS = udp_cp.getRxData().mid(0,90);
        buf_Comm[0] = Data_ZC_to_ATS[12] & Data_VOBC1_to_CP[16];//(Com_bitsM[0] + Com_bitsB[0]);
        buf_Comm[1] = Data_ZC_to_ATS[25] & Data_VOBC2_to_CP[16];//(Com_bitsM[1] + Com_bitsB[0]);
        buf_Comm[2] = Data_ZC_to_ATS[38] & Data_VOBC3_to_CP[16];//(Com_bitsM[2] + Com_bitsB[0]);
        buf_Comm[3] = Data_ZC_to_ATS[51] & Data_VOBC4_to_CP[16];//(Com_bitsM[3] + Com_bitsB[0]);
        buf_Comm[4] = Data_ZC_to_ATS[64] & Data_VOBC5_to_CP[16];//(Com_bitsM[4] + Com_bitsB[0]);
        buf_Comm[5] = Data_ZC_to_ATS[77] & Data_VOBC6_to_CP[16];//(Com_bitsM[5] + Com_bitsB[0]);



        Data_ZC_to_ATS[12] = buf_Comm[0];
        Data_ZC_to_ATS[25] = buf_Comm[1];
        Data_ZC_to_ATS[38] = buf_Comm[2];
        Data_ZC_to_ATS[51] = buf_Comm[3];
        Data_ZC_to_ATS[64] = buf_Comm[4];
        Data_ZC_to_ATS[77] = buf_Comm[5];

        /*********************************** EB Status for each train ******************************************/
        quint8 eb_status=0;
        eb_status = (Data_VOBC1_to_CP[15] & 0x02) >> 1;
        eb_status = eb_status | ((Data_VOBC2_to_CP[15] & 0x02));
        eb_status = eb_status | ((Data_VOBC3_to_CP[15] & 0x02) << 1);
        eb_status = eb_status | ((Data_VOBC4_to_CP[15] & 0x02) << 2);
        eb_status = eb_status | ((Data_VOBC5_to_CP[15] & 0x02) << 3);
        eb_status = eb_status | ((Data_VOBC6_to_CP[15] & 0x02) << 4);


        Data_ZC_to_ATS[82] = eb_status;

//        /*********************************** ZC - CBI comm Status  ******************************************/
//        // communication status ZC-CBI Vital
//            quint8 commZCCBItatus=0;
//            commZCCBItatus = server_cbi.getByteStatus_M() & 0x01;

        Data_ZC_to_ATS[83] = commZCstatus;
    }

    else Data_ZC_to_ATS.fill(char(0),90);


    // Data From ATS to ZC will be forwarded to VOBC (30 byte)
    QByteArray Data_ATS_to_VOBC;
//    if(!client_ats.getRxData().isEmpty() && client_ats.getRxData().length()==33)
    if(!client_ats.getRxData().isEmpty() && client_ats.getRxData().length()==40)
    {
        Data_ATS_to_VOBC = client_ats.getRxData().mid(0,30); //data TSR
        Data_ATS_to_CP = client_ats.getRxData().mid(30,3);   //data dikirim ke cp 10 bytes
        ebRelease = client_ats.getRxData().mid(33,1);
        trainReg = client_ats.getRxData().mid(34,1);
        Data_ATS_to_CP.append(7, char(255));

        QBitArray bit_train(8);
        bit_train = byte_bit_Q(trainReg);

//        qDebug() << "bit : " <<  bit_train << bit_train.at(0);

        if (bit_train[0] == true) {unreg_Status="1"; Init_VOBC1_to_CP.fill(char(0),17);}
        else if (bit_train[1]== true) {unreg_Status="2"; Init_VOBC2_to_CP.fill(char(0),17);}
        else if (bit_train[2] == true) {unreg_Status="3"; Init_VOBC3_to_CP.fill(char(0),17);}
        else if (bit_train[3] == true) {unreg_Status="4"; Init_VOBC4_to_CP.fill(char(0),17);}
        else if (bit_train[4] == true) {unreg_Status="5"; Init_VOBC5_to_CP.fill(char(0),17);}
        else if (bit_train[5] == true) {unreg_Status="6"; Init_VOBC6_to_CP.fill(char(0),17);}
        else unreg_Status="0"; //

        QBitArray bit_release(8);
        bit_release = byte_bit_Q(ebRelease);

        if (bit_release[0] == true) {EB_Release_Status="1";EB_TS_1[0] = 0x04;}
        else {EB_TS_1[0] = 0x00;}

        if (bit_release[1] == true) {EB_Release_Status="2";EB_TS_2[0] =0x04;}
        else {EB_TS_2[0] = 0x00;}

        if (bit_release[2] == true) {EB_Release_Status="3";EB_TS_3[0] = 0x04;}
        else {EB_TS_3[0] = 0x00;}

        if (bit_release[3] == true) {EB_Release_Status="4";EB_TS_4[0] = 0x04;}
        else {EB_TS_4=0x00;}

        if (bit_release[4] == true) {EB_Release_Status="5";EB_TS_5[0] = 0x04;}
        else {EB_TS_5[0] = 0x00;}

        if (bit_release[5] == true) {EB_Release_Status="6";EB_TS_6[0] = 0x04;}
        else {EB_TS_6[0] = 0x00;}
//        else EB_Release_Status="0"; //
    }
    else
    {
        Data_ATS_to_VOBC.fill(char(0),30);
        ebRelease=0;
        trainReg=0;
        Data_ATS_to_CP.fill(char(0),10);
    }


    client_ats.setTxData("M" + Data_ZC_to_ATS);

    /***** EXTERNAL COMM ZC-CBI *****/    
    /*****  Rx ZC = 32 byte *****/
    /*****  forward to CP 26 byte begining + 6 byte spare*/
    if(!server_cbi.getRxData_M().isEmpty() && server_cbi.getRxData_M().length()==30) {Data_CBI_to_CP = server_cbi.getRxData_M().mid(0,30);Init_CBI_to_CP = Data_CBI_to_CP;}
    else Data_CBI_to_CP = Init_CBI_to_CP;
    //else Data_CBI_to_CP.fill(char(0),30);

    /***** Tx ZC = 8 byte *****/
    QByteArray Data_ZC_to_CBI;
    if(!udp_cp.getRxData().isEmpty()) Data_ZC_to_CBI = udp_cp.getRxData().mid(90,8);
    else Data_ZC_to_CBI.fill(char(0),8);

    server_cbi.setTxData(Data_ZC_to_CBI);


    /*******************************************************************************************/
    /******************************** EXTERNAL COMM ZC-VOBC [M/B] ********************************/
    /*******************************************************************************************/
    /********** TRAIN 1 [M] **********/
    /***** Rx ZC 1 = 11 byte *****/
//    QByteArray Data_VOBC1_to_CP;
    if(!server_vobc.getRxData_M(0).isEmpty() && server_vobc.getRxData_M(0).length()==22) {Data_VOBC1_to_CP = server_vobc.getRxData_M(0).mid(0,17);Init_VOBC1_to_CP = Data_VOBC1_to_CP;}// Com_bitsM[0]=true;}
    else if(!server_vobc.getRxData_B(0).isEmpty() && server_vobc.getRxData_B(0).length()==22) {Data_VOBC1_to_CP = server_vobc.getRxData_B(0).mid(0,17);Init_VOBC1_to_CP = Data_VOBC1_to_CP;}// Com_bitsB[0]=true;}
    else {Data_VOBC1_to_CP = Init_VOBC1_to_CP;}// Com_bitsM[0]=false; Com_bitsB[0]=false;}

    /********** TRAIN 2 [M] **********/
    /***** Rx ZC 2 = 11 byte *****/
//    QByteArray Data_VOBC2_to_CP;
    if(!server_vobc.getRxData_M(1).isEmpty() && server_vobc.getRxData_M(1).length()==22) {Data_VOBC2_to_CP = server_vobc.getRxData_M(1).mid(0,17); Init_VOBC2_to_CP = Data_VOBC2_to_CP;}// Com_bitsM[1]=true;}
    else if(!server_vobc.getRxData_B(1).isEmpty() && server_vobc.getRxData_B(1).length()==22) {Data_VOBC2_to_CP = server_vobc.getRxData_B(1).mid(0,17); Init_VOBC2_to_CP = Data_VOBC2_to_CP;}// Com_bitsB[1]=true;}
    else {Data_VOBC2_to_CP = Init_VOBC2_to_CP;}// Com_bitsM[1]=false;}

    /********** TRAIN 3 [M] **********/
    /***** Rx ZC 3 = 11 byte *****/
//    QByteArray Data_VOBC3_to_CP;
    if(!server_vobc.getRxData_M(2).isEmpty() && server_vobc.getRxData_M(2).length()==22) {Data_VOBC3_to_CP = server_vobc.getRxData_M(2).mid(0,17);Init_VOBC3_to_CP = Data_VOBC3_to_CP;}// Com_bitsM[2]=true;}
    else if(!server_vobc.getRxData_B(2).isEmpty() && server_vobc.getRxData_B(2).length()==22) {Data_VOBC3_to_CP = server_vobc.getRxData_B(2).mid(0,17);Init_VOBC3_to_CP = Data_VOBC3_to_CP;}// Com_bitsB[2]=true;}
    else {Data_VOBC3_to_CP = Init_VOBC3_to_CP;}// Com_bitsM[2]=false;}

    /********** TRAIN 4 [M] **********/
    /***** Rx ZC 3 = 11 byte *****/
//    QByteArray Data_VOBC4_to_CP;
    if(!server_vobc.getRxData_M(3).isEmpty() && server_vobc.getRxData_M(3).length()==22) {Data_VOBC4_to_CP = server_vobc.getRxData_M(3).mid(0,17);Init_VOBC4_to_CP = Data_VOBC4_to_CP;}// Com_bitsM[0]=true;}
    else if(!server_vobc.getRxData_B(3).isEmpty() && server_vobc.getRxData_B(3).length()==22) {Data_VOBC4_to_CP = server_vobc.getRxData_B(3).mid(0,17);Init_VOBC4_to_CP = Data_VOBC4_to_CP;}// Com_bitsB[0]=true;}
    else {Data_VOBC4_to_CP = Init_VOBC4_to_CP;}// Com_bitsM[0]=false; Com_bitsB[0]=false;}

    /********** TRAIN 5 [M] **********/
    /***** Rx ZC 3 = 11 byte *****/
//    QByteArray Data_VOBC5_to_CP;
    if(!server_vobc.getRxData_M(4).isEmpty() && server_vobc.getRxData_M(4).length()==22) {Data_VOBC5_to_CP = server_vobc.getRxData_M(4).mid(0,17);Init_VOBC5_to_CP = Data_VOBC5_to_CP;}// Com_bitsM[0]=true;}
    else if(!server_vobc.getRxData_B(4).isEmpty() && server_vobc.getRxData_B(4).length()==22) {Data_VOBC5_to_CP = server_vobc.getRxData_B(4).mid(0,17);Init_VOBC5_to_CP = Data_VOBC5_to_CP;}// Com_bitsB[0]=true;}
    else {Data_VOBC5_to_CP = Init_VOBC5_to_CP;}// Com_bitsM[0]=false; Com_bitsB[0]=false;}

    /********** TRAIN 6 [M] **********/
    /***** Rx ZC 3 = 11 byte *****/
//    QByteArray Data_VOBC6_to_CP;//, comm_TS6=0;
    if(!server_vobc.getRxData_M(5).isEmpty() && server_vobc.getRxData_M(5).length()==22) {Data_VOBC6_to_CP = server_vobc.getRxData_M(5).mid(0,17);Init_VOBC6_to_CP = Data_VOBC6_to_CP;}// Com_bitsM[0]=true;}
    else if(!server_vobc.getRxData_B(5).isEmpty() && server_vobc.getRxData_B(5).length()==22) {Data_VOBC6_to_CP = server_vobc.getRxData_B(5).mid(0,17);Init_VOBC6_to_CP = Data_VOBC6_to_CP;}// Com_bitsB[0]=true;}
    else {Data_VOBC6_to_CP = Init_VOBC6_to_CP;}// Com_bitsM[0]=false; Com_bitsB[0]=false;}

//    if(!server_vobc.getRxData_M(5).isEmpty() && server_vobc.getRxData_M(5).length()==17) {Data_VOBC6_to_CP = server_vobc.getRxData_M(5).mid(0,16); comm_TS6 = server_vobc.getRxData_M(5).mid(16,1); Init_VOBC6_to_CP = Data_VOBC6_to_CP;}// Com_bitsM[0]=true;}
//    else if(!server_vobc.getRxData_B(5).isEmpty() && server_vobc.getRxData_B(5).length()==17) {Data_VOBC6_to_CP = server_vobc.getRxData_B(5).mid(0,16); comm_TS6 = server_vobc.getRxData_B(5).mid(16,1); Init_VOBC6_to_CP = Data_VOBC6_to_CP;}// Com_bitsB[0]=true;}
//    else {Data_VOBC6_to_CP = Init_VOBC6_to_CP; comm_TS6=0;}// Com_bitsM[0]=false; Com_bitsB[0]=false;}

    /***** Tx ZC 1, ZC 2 = 8 byte *****/
    // update penambahan data comm zc-cbi dan zc-ats ke VOBC
    QByteArray Data_ZC_to_VOBC1, Data_ZC_to_VOBC2, Data_ZC_to_VOBC3, Data_ZC_to_VOBC4, Data_ZC_to_VOBC5, Data_ZC_to_VOBC6;
    if(!udp_cp.getRxData().isEmpty())
    {
        Data_ZC_to_VOBC1 = udp_cp.getRxData().mid(98,13); // geser 97 byte
        Data_ZC_to_VOBC2 = udp_cp.getRxData().mid(111,13);
        Data_ZC_to_VOBC3 = udp_cp.getRxData().mid(124,13);
        Data_ZC_to_VOBC4 = udp_cp.getRxData().mid(137,13);
        Data_ZC_to_VOBC5 = udp_cp.getRxData().mid(150,13);
        Data_ZC_to_VOBC6 = udp_cp.getRxData().mid(163,13);

        Data_ZC_to_VOBC1[8] = EB_TS_1[0];
        Data_ZC_to_VOBC2[8] = EB_TS_2[0];
        Data_ZC_to_VOBC3[8] = EB_TS_3[0];
        Data_ZC_to_VOBC4[8] = EB_TS_4[0];
        Data_ZC_to_VOBC5[8] = EB_TS_5[0];
        Data_ZC_to_VOBC6[8] = EB_TS_6[0];

        Data_ZC_to_VOBC1[9] = commZCstatus;
        Data_ZC_to_VOBC2[9] = commZCstatus;
        Data_ZC_to_VOBC3[9] = commZCstatus;
        Data_ZC_to_VOBC4[9] = commZCstatus;
        Data_ZC_to_VOBC5[9] = commZCstatus;
        Data_ZC_to_VOBC6[9] = commZCstatus;


    }
    else
    {
        Data_ZC_to_VOBC1.fill(char(0),13);
        Data_ZC_to_VOBC2.fill(char(0),13);
        Data_ZC_to_VOBC3.fill(char(0),13);
        Data_ZC_to_VOBC4.fill(char(0),13);
        Data_ZC_to_VOBC5.fill(char(0),13);
        Data_ZC_to_VOBC6.fill(char(0),13);
    }

    server_vobc.setTxData_M(Data_ZC_to_VOBC1 + Data_ATS_to_VOBC,0);
    server_vobc.setTxData_M(Data_ZC_to_VOBC2 + Data_ATS_to_VOBC,1);
    server_vobc.setTxData_M(Data_ZC_to_VOBC3 + Data_ATS_to_VOBC,2);
    server_vobc.setTxData_M(Data_ZC_to_VOBC4 + Data_ATS_to_VOBC,3);
    server_vobc.setTxData_M(Data_ZC_to_VOBC5 + Data_ATS_to_VOBC,4);
    server_vobc.setTxData_M(Data_ZC_to_VOBC6 + Data_ATS_to_VOBC,5);

    server_vobc.setTxData_B(Data_ZC_to_VOBC1 + Data_ATS_to_VOBC,0);
    server_vobc.setTxData_B(Data_ZC_to_VOBC2 + Data_ATS_to_VOBC,1);
    server_vobc.setTxData_B(Data_ZC_to_VOBC3 + Data_ATS_to_VOBC,2);
    server_vobc.setTxData_B(Data_ZC_to_VOBC4 + Data_ATS_to_VOBC,3);
    server_vobc.setTxData_B(Data_ZC_to_VOBC5 + Data_ATS_to_VOBC,4);
    server_vobc.setTxData_B(Data_ZC_to_VOBC6 + Data_ATS_to_VOBC,5);


//    Data_Comm.fill(char(0),1);
    Data_Comm[0] = commZCstatus;
    Comm_Spare.fill(char(0),2);

    udp_cp.setTxData(DataSync +                 // 2 byte
                     Data_Comm +                // 1 byte
                     Comm_Spare +               // 2 byte
                     Data_ATS_to_CP +           // 10 byte
                     Data_CBI_to_CP +           // 30 byte // 27 byte
                     Data_VOBC1_to_CP +         // 17 byte
                     Data_VOBC2_to_CP +         // 17 byte
                     Data_VOBC3_to_CP +         // 17 byte
                     Data_VOBC4_to_CP +         // 17 byte
                     Data_VOBC5_to_CP +         // 17 byte
                     Data_VOBC6_to_CP +         // 17 byte
                     VOBC_Comm_StatusM +        // 1 byte
                     VOBC_Comm_StatusB);        // 1 byte           TOTAL => tick 1 byte + 149 byte + CRC 2 byte = 152 Byte


    //qDebug() << "lenght Tx IOP = " << udp_cp.getTxData().length();
    //qDebug() << "lenght Rx IOP = " << udp_cp.getRxData().length();
    cSync++; // Count Sync for mutual checking in CP
}

void DataExchange::createLog()
{
    QFile mFile("/home/root/log");
    QString mText="";

    mText = "// *********** DATA MONITORING ZC (" + asMB + ") *********** //";

    mText.append("\n=> CP, status : "); mText.append(udp_cp.getStatus());
    mText.append("\n  rx : ");mText.append(printRaw(udp_cp.getRxData()));
    mText.append("\n  tx : ");mText.append(printRaw(udp_cp.getTxData()));    

    mText.append("\n\n");
    mText.append("\n EB release  => ");mText.append(printRaw(ebRelease));mText.append(" ||   EB Release Status = ");mText.append(EB_Release_Status);
    mText.append("\n UNREG TRAIN => ");mText.append(printRaw(trainReg));mText.append(" ||   UNREG Status      = ");mText.append(unreg_Status);
//    mText.append("\n UNREG Status => ");mText.append(unreg_Status);

    mText.append("\n\n");

    mText.append("=> ATS (M), status : "); mText.append(client_ats.getStatus());
    mText.append("\n  rx : ");mText.append(printRaw(client_ats.getRxData()));
    mText.append("\n  tx : ");mText.append(printRaw(client_ats.getTxData()));

    mText.append("\n\n");

    mText.append("=> CBI (M), status : "); mText.append(server_cbi.getStatus_M());
    mText.append("\n  rx : ");mText.append(printRaw(server_cbi.getRxData_M()));
    mText.append("\n  tx : ");mText.append(printRaw(server_cbi.getTxData()));

    mText.append("\n\n");

    mText.append("=> VOBC-ATP 1 ,");
    mText.append("\n  rx_M ("); mText.append(server_vobc.getStatus_M(0)); mText.append(") : ");mText.append(printRaw(server_vobc.getRxData_M(0)));
    mText.append("\n  rx_B ("); mText.append(server_vobc.getStatus_B(0)); mText.append(") : ");mText.append(printRaw(server_vobc.getRxData_B(0)));
    mText.append("\n  tx : ");mText.append(printRaw(server_vobc.getTxData_B(0)));

    mText.append("\n\n");

    mText.append("=> VOBC-ATP 2 ,");
    mText.append("\n  rx_M ("); mText.append(server_vobc.getStatus_M(1)); mText.append(") : ");mText.append(printRaw(server_vobc.getRxData_M(1)));
    mText.append("\n  rx_B ("); mText.append(server_vobc.getStatus_B(1)); mText.append(") : ");mText.append(printRaw(server_vobc.getRxData_B(1)));
    mText.append("\n  tx : ");mText.append(printRaw(server_vobc.getTxData_B(1)));

    mText.append("\n\n");

    mText.append("=> VOBC-ATP 3 ,");
    mText.append("\n  rx_M ("); mText.append(server_vobc.getStatus_M(2)); mText.append(") : ");mText.append(printRaw(server_vobc.getRxData_M(2)));
    mText.append("\n  rx_B ("); mText.append(server_vobc.getStatus_B(2)); mText.append(") : ");mText.append(printRaw(server_vobc.getRxData_B(2)));
    mText.append("\n  tx : ");mText.append(printRaw(server_vobc.getTxData_B(2)));

    mText.append("\n\n");

    mText.append("=> VOBC-ATP 4 ,");
    mText.append("\n  rx_M ("); mText.append(server_vobc.getStatus_M(3)); mText.append(") : ");mText.append(printRaw(server_vobc.getRxData_M(3)));
    mText.append("\n  rx_B ("); mText.append(server_vobc.getStatus_B(3)); mText.append(") : ");mText.append(printRaw(server_vobc.getRxData_B(3)));
    mText.append("\n  tx : ");mText.append(printRaw(server_vobc.getTxData_B(3)));

    mText.append("\n\n");

    mText.append("=> VOBC-ATP 5 ,");
    mText.append("\n  rx_M ("); mText.append(server_vobc.getStatus_M(4)); mText.append(") : ");mText.append(printRaw(server_vobc.getRxData_M(4)));
    mText.append("\n  rx_B ("); mText.append(server_vobc.getStatus_B(4)); mText.append(") : ");mText.append(printRaw(server_vobc.getRxData_B(4)));
    mText.append("\n  tx : ");mText.append(printRaw(server_vobc.getTxData_B(4)));

    mText.append("\n\n");

    mText.append("=> VOBC-ATP 6 ,");
    mText.append("\n  rx_M ("); mText.append(server_vobc.getStatus_M(5)); mText.append(") : ");mText.append(printRaw(server_vobc.getRxData_M(5)));
    mText.append("\n  rx_B ("); mText.append(server_vobc.getStatus_B(5)); mText.append(") : ");mText.append(printRaw(server_vobc.getRxData_B(5)));
    mText.append("\n  tx : ");mText.append(printRaw(server_vobc.getTxData_B(5)));

    mText.append("\n\n");


//    mText.append("to CBI (M), status : ");mText.append(server_cbi.main_TO);mText.append("\tto CBI (B), status : ");mText.append(server_cbi.backup_TO);
//    mText.append("\n rx : ");mText.append(server_cbi.rxDataM); mText.append("\t\t\t\t rx : ");mText.append(server_cbi.rxDataB);
//    mText.append("\n tx : ");mText.append(server_cbi.txDataM); mText.append("\t\t\t\t tx : ");mText.append(server_cbi.txDataB);

    mText.append("\n");

//    mText.append("to    cSync=0;ATS (M), status : ");mText.append(server_ats.main_TO);mText.append("\tto ATS (B), status : ");mText.append(server_ats.backup_TO);
//    mText.append("\n rx : ");mText.append(server_ats.rxDataM); mText.append("\t\t\t\t rx : ");mText.append(server_ats.rxDataB);
//    mText.append("\n tx : ");mText.append(server_ats.txDataM); mText.append("\t\t\t\t tx : ");mText.append(server_ats.txDataB);

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
//    QString print;

//    for(int i=0; i<data.size(); i++)
//        print.append("x" + QString("%1").arg((quint8)data[i], 2, 16, QLatin1Char( '0' )) + " ");

//    return print;

    QString print;

    for(int i=0; i<data.size(); i++){
       if((i != 0) && (i%40 == 0)) print.append("\n       ");
        else if((i != 0) && (i%8 == 0)) print.append("- ");
        print.append("x" + QString("%1").arg((quint8)data[i], 2, 16, QLatin1Char( '0' )) + " ");
    }
    return print;
}

