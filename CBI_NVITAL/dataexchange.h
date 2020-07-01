#ifndef DATAEXCHANGE_H
#define DATAEXCHANGE_H

#include <QObject>
#include "myclient.h"
//#include "../_General_Path/myudp.h"
#include "udp.h"
#include "commNONVITAL.h"
#include "../_General_Path/mytcpclient.h"
#include "serverars.h"

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
    QString getStringAfter(QString Str, QString chr);

private:
    //MyClient client_cbi_M, client_cbi_B;
    MyTCPClient client_cbi_M, client_cbi_B;
    Udp udp_mainline_M, udp_mainline_B, udp_depot_M, udp_wallDisplay_MainLine, udp_wallDisplay_Depo;
    Udp udp_TT_Mainline, udp_TT_depo;
    ServerARS server_ars_M;
    //MyUdp udp_mainline_M, udp_mainline_B, udp_depot;
    QString asMB;

    QByteArray Init_DataFromVtl;

    MyTCPClient client_ats;
    QByteArray Data_Vtl, Data_Init;
    QString printRaw(QByteArray data);

};

#endif // DATAEXCANGE_H
