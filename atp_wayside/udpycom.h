#ifndef UDPYCOM_H
#define UDPYCOM_H

#include <QObject>
#include <QUdpSocket>
#include <QTimer>
#include <../_General_Path/crc16kermit.h>

class udpYCOM : public QObject
{
    Q_OBJECT
public:
    void runYCOM(QString ipAddress, quint16 sendPort, quint16 recvPort, quint16 msAutoSend);

    QByteArray getTxData() const;
    QByteArray getRxData() const;
    QByteArray getStatus() const;
    quint8 getByteStatus() const;
    void setTxData(const QByteArray &value);
    void appendTxData(const QByteArray &value);
    void resetTXData();

private:
    QByteArray txData, rxData, status;

    CRC16Kermit kermit;
    QUdpSocket *socket;
    QString iphost;
    quint16 port;
    quint8 tick;
    QByteArray ticks, mticks;

    quint16 cTicks, cTicksMax;
    bool rxFlag, mode;

    quint8 byteStatus=0;
signals:
    void data_sent();
private slots:
    void YCOM_readyRead();
    void YCOM_autoSend();
    void CHECK_timeout();

};

#endif // UDPYCOM_H
