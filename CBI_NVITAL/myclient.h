#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QObject>
#include <QtNetwork>
#include <QTimer>
#include <QDataStream>
#include <QString>
#include "../_General_Path/crc16kermit.h"

class MyClient : public QObject
{
    Q_OBJECT
public:
    ~MyClient();
    void run(QString asMB, QString IP, quint16 Port, QString Hostname);

    QByteArray getTxData() const;
    QByteArray getRxData() const;
    QByteArray getStatus() const;
    void setTxData(const QByteArray &value);

private:
    QTcpSocket client;
    QTimer Stimer;

    QString hostname, ip;
    quint16 port;
    QString asmb;
    quint8 tick;

    quint16 count_timeout;
    bool sendFlag;

    QByteArray rxData, txData, status;

    CRC16Kermit kermit;

signals:

private slots:
    void TcpConnected();
    void TcpReadyRead();
    void TcpReconnectToHost();
    void AutoSend();

};

#endif // MYCLIENT_H
