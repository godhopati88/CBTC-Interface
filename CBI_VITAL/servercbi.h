#ifndef SERVERCBI_H
#define SERVERCBI_H

#include <QObject>
#include "../_General_Path/mytcpserver.h"

class ServerCBI : public QObject
{
    Q_OBJECT
public:
    void run(QString ipAddress, quint16 ipPort);
    void close();

    QByteArray getTxData() const;
    QByteArray getRxData_M() const;
    QByteArray getRxData_B() const;
    QByteArray getStatus_M() const;
    QByteArray getStatus_B() const;
    void setTxData(const QByteArray &value);

private:
    MyTCPServer cbi;
    QByteArray incomingData;

    int cTicks_M, cTicks_B;
    QByteArray ticks_M, ticks_B;
    QByteArray mticks_M, mticks_B;

    QByteArray txData, rxData_M, status_M;
    QByteArray         rxData_B, status_B;

private slots:
    void process(QByteArray inData);
    void timeoutCheck();
};

#endif // SERVERCBI_H
