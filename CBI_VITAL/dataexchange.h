#ifndef DATAEXCHANGE_H
#define DATAEXCHANGE_H

#include <QObject>
#include "servercbi.h"
#include "myclient.h"
//#include "../_General_Path/myudp.h"
#include "udpycom.h"
#include "../_General_Path/mytcpclient.h"
#include "commVITAL.h"

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
    QStringList readConf(QString Filename);

private:
    //MyClient client_zc;
    MyTCPClient client_zc;
    //MyServer server_cbi;
    ServerCBI server_cbi;
    //MyUdp udp_cp, udp_simulator, udp_zc_simulator;
    udpYCOM udp_cp;
    QString asMB;

    QByteArray Init_DataNV_to_CP, Init_DataZC_to_CP;

    QString printRaw(QByteArray data);

    quint16 cSync;
};

#endif // DATAEXCANGE_H
