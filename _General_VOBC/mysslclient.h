#ifndef MYSSLCLIENT_H
#define MYSSLCLIENT_H

#include <QtNetwork>
#include <QFile>
#include "../_General_Path/crc16kermit.h"

class MySslClient : public QObject
{
      Q_OBJECT
public:
    ~MySslClient();
    quint8 run(quint16 ID, QString asMB, QString IPfile, quint16 Port, QString Hostname);
    void close();

    QByteArray getTxData() const;
    QByteArray getRxData() const;
    QByteArray getStatus() const;
    quint8 getByteStatus() const;
    void setTxData(const QByteArray &value);

private:
    CRC16Kermit kermit;
    int tWaitssl, tReconn,tReCount;
    QSslSocket sslClient;
    QTimer timer, Stimer;

    QString ip, ip_host;
    quint16 port;
    QString asmb;
    quint8 tick;
    quint8 id;

    quint16 count_timeout;
    bool sendFlag, fConn;

    QByteArray txData, rxData, status;
    quint8 byteStatus=0;

private slots:
    void TCP_reconnect();
    void AUTO_send();

    // Slots to receive signals from QSslSocket
    void SSL_readyRead();
    void SSL_connect();
    void SSL_encrypt();
    void SSL_disconnect();
    void SSL_forceExitHandlers();

    void SSL_errors(const QList<QSslError> &errors);
    void TCP_socketError();
    void SSL_err(const QSslError &error);
};

#endif // MYSSLCLIENT_H
