/**
  * Author  : Ahmad Fuady
  * Email   : ahmad.fuady@len.co.id
  * Licence : PT Len Industri (Persero)
  * File name    : MyTCPClient.h
*/

#ifndef MYVATPCLIENT_H
#define MYVATPCLIENT_H

#include <QObject>
#include <QtNetwork>
#include "../_General_Path/crc16kermit.h"

class MyVATPClient : public QObject
{
    Q_OBJECT
public:
    ~MyVATPClient();
    void run(quint16 ID, QString asMB, QString IP, quint16 Port, QString IP_Host);
    void close();

    QByteArray getTxData() const;
    QByteArray getRxData() const;
    QByteArray getStatus() const;
    quint8 getByteStatus() const;
    void setTxData(const QByteArray &value);

signals:
    void newRxData(QByteArray outData);

private:
    QTcpSocket client;
    CRC16Kermit kermit;
    QTimer timer, Stimer;

    QString ip_host, ip; quint16 port;
    QString asmb;
    quint8 id;
    quint8 tick;

    quint16 cTicks;
    bool sendFlag;

    QByteArray txData, rxData, status;
    quint8 byteStatus=0;

private slots:
    void TcpConnected();
    void TcpReadyRead();
    void TcpDisconnect();
    void TcpReconnectToHost();
    void AutoSend();
};

#endif // MYTCPCLIENT_H
