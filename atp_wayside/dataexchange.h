#ifndef DATAEXCHANGE_H
#define DATAEXCHANGE_H

#include <QObject>

//#include "../_General_Path/myudp.h"
#include "udpycom.h"
#include "mysslserver.h"
//#include "myserver.h"
#include "../_General_Path/mytcpclient.h"
#include "../_General_Path/converter.h"
#include "servercbi.h"
#include "serveratp.h"

class DataExchange : public QObject
{
    Q_OBJECT
public:
    int run();
    ~DataExchange();

signals:


private slots:
    void exchangeProcess();
    void createLog();

private:
    //MyServer server_cbi;
    ServerCBI server_cbi;
//    MySslServer server_vobc;
    ServerATP server_vobc;
    //MyUdp udp_cp, udp_main;
    udpYCOM udp_cp;
    //MyClient client_ats;
    MyTCPClient client_ats;
    QString asMB;

    QStringList readConf(QString Filename);
    QString printRaw(QByteArray data);

    QByteArray Init_VOBC1_to_CP, Init_VOBC2_to_CP, Init_VOBC3_to_CP, Init_VOBC4_to_CP, Init_VOBC5_to_CP, Init_VOBC6_to_CP;
    QByteArray Data_FromCP, Init_FromCP, Init_CBI_to_CP;

//    QByteArray Data_ZC_to_ATS;

    quint16 cSync;
    QByteArray trainReg, ebRelease, unreg_Status, EB_Release_Status;
    QByteArray EB_TS_1,EB_TS_2,EB_TS_3,EB_TS_4,EB_TS_5,EB_TS_6;

    QByteArray Data_VOBC1_to_CP;
    QByteArray Data_VOBC2_to_CP;
    QByteArray Data_VOBC3_to_CP;
    QByteArray Data_VOBC4_to_CP;
    QByteArray Data_VOBC5_to_CP;
    QByteArray Data_VOBC6_to_CP;
};

#endif // DATAEXCANGE_H
