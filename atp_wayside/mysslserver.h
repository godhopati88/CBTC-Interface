#ifndef MYSSLSERVER_H
#define MYSSLSERVER_H

#include <QObject>
#include <QDataStream>
#include <QHash>
#include <QStringList>
#include <QTime>
#include <QTimer>
#include "sslserver.h"
#include "../_General_Path/crc16kermit.h"


class MySslServer : public QObject
{
    Q_OBJECT
public:
    void Run(QString MB, QHostAddress ipAddress, quint16 ipPort, QString caFile, QString certFile, QString keyFile);
    ~MySslServer();
    void close();

    QByteArray getRxData_M(int idTrain) const;
    QByteArray getRxData_B(int idTrain) const;
    QByteArray getTxData_M(int idTrain) const;
    QByteArray getTxData_B(int idTrain) const;
    void setTxData_M(const QByteArray &value, int idTrain);
    void setTxData_B(const QByteArray &value, int idTrain);

    QByteArray getStatus_M(int idTrain) const;
    QByteArray getStatus_B(int idTrain) const;

private:
    SslServer sslServer;
    QHash<int, QSslSocket*> allSslClients;
    QByteArray incomingSslData;
    quint8 tickTrain_M[3];
    quint8 tickTrain_B[3];
    quint8 detak_M[3];
    quint8 detak_B[3];
    quint8 idxTickTrain_M[3];
    quint8 idxTickTrain_B[3];
    QString asMB;
    quint8 trainID;
    QByteArray statusMB;

    CRC16Kermit myCrc;
    bool flagSsl;

    QHostAddress Address;
    quint16 Port;
    QString caF;
    QString certF;
    QString keyF;

    QByteArray rxData_M[3];
    QByteArray rxData_B[3];
    QByteArray txData_M[3];
    QByteArray txData_B[3];
    QByteArray status_M[3];
    QByteArray status_B[3];

    void closeIP_M(QString ip, quint8 idTrain);
    void closeIP_B(QString ip, quint8 idTrain);
    bool flagIP_M[3];
    bool flagIP_B[3];

private slots:
    void incomingSslConnection();
    void slotEncryptedSsl();
    void slotSslSocketStateChanged(QAbstractSocket::SocketState state);
    void slotPeerVerifyError(const QSslError &error);
    void slotReadyReadSsl();
    void slotSslDisconnected();
    void slotSslErrors(const QList<QSslError> &errors);
    void abortUnencryptedConnection();
    void slotTimeOut();

};

#endif // MYSSLSERVER_H
