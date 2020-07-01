/**
  * Author  : Ahmad Fuady
  * Email   : ahmad.fuady@len.co.id
  * Licence : PT Len Industri (Persero)
  * File name    : MyTCPServer.h
*/

#ifndef LENTCPSERVER_H
#define LENTCPSERVER_H

#include <QObject>
#include <QtNetwork>
#include "crc16kermit.h"

class MyTCPServer : public QObject
{
    Q_OBJECT
public:
    ~MyTCPServer();
    void run(QString ipAddress, quint16 ipPort, QString serverName);
    void close();

    QByteArray getTxData() const;
    QByteArray getRxData() const;
    QByteArray getStatus() const;
    quint8 getByteStatus() const;
    void setTxData(const QByteArray &value);
    void closeIP(QString ip);


private slots:
    void TcpReadyRead();
    void TcpConnection_in();
    void TcpDisconnected();

signals:
    void newRxData(QByteArray outData);

private:
    QString name;
    QTcpServer tcpServer;
    QHash<int, QTcpSocket*> allTcpClient;
    QByteArray incomingTcpData;
    QByteArray txData, rxData, status;
    quint8 byteStatus=0;

    CRC16Kermit kermit;
};

#endif // LENTCPSERVER_H
