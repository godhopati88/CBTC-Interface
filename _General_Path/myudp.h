#ifndef MYUDPSOCKET_H
#define MYUDPSOCKET_H
/*rev
 * change public var to private
 *
 *
 * */
#include <QObject>
#include <QUdpSocket>
#include <QTimer>
#include "crc16kermit.h"

class MyUdp : public QObject
{
    Q_OBJECT
public:
    void runServer(QString ipAddress, quint16 ipPort, quint16 msTimeout);
    void runClient(QString ipAddress, quint16 ipPort, QString ipHost, quint16 msAutoSend);

    QByteArray getTxData() const;
    QByteArray getRxData() const;
    QByteArray getStatus() const;
    quint8 getByteStatus() const;
    void setTxData(const QByteArray &value);
    void appendTxData(const QByteArray &value);
    void resetTXData();

private:
    QByteArray txData, rxData, status;
    quint8 byteStatus=0;

    CRC16Kermit kermit;
    QUdpSocket *socket;
    QString iphost;
    quint16 port;
    quint8 tick;
    QByteArray ticks, mticks;

    quint16 cTicks, cTicksMax;
    bool rxFlag, mode;
signals:
    void data_sent();
private slots:
    void CLIENT_readyRead();
    void SERVER_readyRead();
    void CLIENT_autoSend();
    void CHECK_timeout();
};

#endif // MYUDPSOCKET_H
