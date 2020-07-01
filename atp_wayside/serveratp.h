#ifndef SERVERATP_H
#define SERVERATP_H

#include <QObject>
#include "../_General_Path/mytcpserver.h"

class ServerATP : public QObject
{
    Q_OBJECT
public:
    void run(QString ipAddress, quint16 ipPort);
    void close();

    QByteArray getRxData_M(int idTrain) const;
    QByteArray getRxData_B(int idTrain) const;

    QByteArray getTxData_M(int idTrain) const;
    void setTxData_M(const QByteArray &value, int idTrain);

    QByteArray getTxData_B(int idTrain) const;
    void setTxData_B(const QByteArray &value, int idTrain);

    QByteArray getStatus_M(int idTrain) const;
    QByteArray getStatus_B(int idTrain) const;

private:
    MyTCPServer vatp;
    QByteArray incomingData;

    //before index = 3 [6]
    int cTicks_M[6], cTicks_B[6];
    QByteArray ticks_M[6], ticks_B[6];
    QByteArray mticks_M[6], mticks_B[6];

    QByteArray rxData_M[6];
    QByteArray rxData_B[6];
    QByteArray txData_M[6];
    QByteArray txData_B[6];
    QByteArray status_M[6];
    QByteArray status_B[6];

private slots:
    void process(QByteArray inData);
    void slotTimeOut();

};

#endif // SERVERATP_H
