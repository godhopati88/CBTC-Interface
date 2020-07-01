/**
  * Author  : Ahmad Fuady
  * Email   : ahmad.fuady@len.co.id
  * Licence : PT Len Industri (Persero)
  * File name    : ServerTag.c
*/

#ifndef SERVERTAG_H
#define SERVERTAG_H

#include <QObject>
#include "../_General_Path/mytcpserver.h"

class ServerTag : public QObject
{
    Q_OBJECT

public:
    void run(QString ipAddress, quint16 ipPort);
    void close();

    QByteArray getTxData() const;
    QByteArray getRxData_F() const;
    QByteArray getRxData_R() const;
    QByteArray getStatus_F() const;
    QByteArray getStatus_R() const;
    void setTxData(const QByteArray &value);

    void resetTagDetect_F();

    void resetTagDetect_R();

    quint8 getByteStatus_F() const;
    quint8 getByteStatus_R() const;

private:
    struct varTag
    {
        quint64 decID;
        unsigned char msbID;
        unsigned char lsbID;
        unsigned char sBatt;
    };
    QByteArray txData, rxData_F, status_F;
    QByteArray         rxData_R, status_R;

    quint8 byteStatus_F=0, byteStatus_R=0;

    varTag variable;
    MyTCPServer tag;
    QByteArray incomingData;

    int cTicks_F, cTicks_R;
    QByteArray ticks_F, ticks_R;
    QByteArray mticks_F, mticks_R;
    quint8 flagTOUT_F, flagTOUT_R;

    QTimer sTimer;
    quint8 tagDetect_F, tagDetect_R;

signals:
    void newDataTag();

private slots:
    void timeoutCheck();
    void process(QByteArray inData);
    varTag parsing(QByteArray buffer);

};

#endif // SERVERTAG_H
