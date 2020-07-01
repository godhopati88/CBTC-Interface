#ifndef UDPSOCKET_H
#define UDPSOCKET_H
/*rev
 * change public var to private
 *
 *
 * */
#include <QObject>
#include <QUdpSocket>
#include <QTimer>
#include "../_General_Path/crc16kermit.h"

class Udp : public QObject
{
    Q_OBJECT
public:
    void runServer(QString ipAddress, quint16 ipPort, quint16 msTimeout);
    void runClient(QString ipAddress, quint16 ipPort, QString Hostname, quint16 msAutoSend);

    QByteArray getTxData() const;
    QByteArray getRxData() const;
    QByteArray getStatus() const;
    void setTxData(const QByteArray &value);
    void appendTxData(const QByteArray &value);
    void resetTXData();

private:
    QByteArray txData, rxData, status;

    CRC16Kermit kermit;
    QUdpSocket *socket;
    QString hostname;
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
