#ifndef MYSERVER_H
#define MYSERVER_H

#include <QObject>
#include <QDataStream>
#include <QHash>
#include <QStringList>
#include <QTime>
#include <QTimer>
#include <QtNetwork>
#include "../_General_Path/crc16kermit.h"

class MyServer : public QObject
{
    Q_OBJECT
public:
    ~MyServer();
    void Run(QString MB, QHostAddress ipAddress, quint16 ipPort);


    QByteArray getRxDataM() const;
    QByteArray getRxDataB() const;
    QByteArray getTxDataM() const;
    QByteArray getTxDataB() const;

    void setTxDataM(const QByteArray &value);
    void setTxDataB(const QByteArray &value);

    QByteArray getStatusM() const;
    QByteArray getStatusB() const;

private:
    QTcpServer tcpServer;
    QHash<int, QTcpSocket*> allTcpClient;
    QByteArray incomingTcpData;
    quint8 tickM,tickB;
    quint8 idxTickM,idxTickB;
    QString asMB;
    CRC16Kermit myCrc;

    QByteArray rxDataM, txDataM;
    QByteArray rxDataB, txDataB;

    QByteArray status_M, status_B;

private slots:
    void incomingTcpConnection();
    void slotReadyReadSocket();
    void slotTcpDisconnected();
    void slotTimeOut();
};

#endif // MYSERVER_H
