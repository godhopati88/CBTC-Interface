#include "myserver.h"

MyServer::~MyServer()
{
    
}

void MyServer::Run(QString MB, QHostAddress ipAddress, quint16 ipPort)
{
    asMB = MB;
    tcpServer.listen(ipAddress,ipPort);
    connect(&tcpServer,SIGNAL(newConnection()),this,SLOT(incomingTcpConnection()));
    //**qDebug() << "Server Listening at" << ipAddress << ipPort;

    //main_TO = "Time Out";
    //backup_TO = "Time Out";
    status_M = "Time Out";
    status_B = "Time Out";

    idxTickM = 0;
    idxTickB = 0;
    QTimer *sTimer = new QTimer(this);
    connect(sTimer,SIGNAL(timeout()),this,SLOT(slotTimeOut()));
    sTimer->start(200);
}

QByteArray MyServer::getRxDataM() const
{
    return rxDataM;
}

QByteArray MyServer::getRxDataB() const
{
    return rxDataB;
}

QByteArray MyServer::getTxDataM() const
{
    return txDataM;
}

void MyServer::setTxDataM(const QByteArray &value)
{
    txDataM = value;
}

QByteArray MyServer::getTxDataB() const
{
    return txDataB;
}

void MyServer::setTxDataB(const QByteArray &value)
{
    txDataB = value;
}

QByteArray MyServer::getStatusM() const
{
    return status_M;
}

QByteArray MyServer::getStatusB() const
{
    return status_B;
}

void MyServer::incomingTcpConnection()
{
    QTcpSocket *tcpSocket = tcpServer.nextPendingConnection();
    if (tcpSocket)
    {
        int sockDesc = tcpSocket->socketDescriptor();
        allTcpClient.insert(sockDesc,tcpSocket);

        //**qDebug() << "Connected from :" << tcpSocket->peerAddress() << tcpSocket->peerPort();

        connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(slotReadyReadSocket()));
        connect(tcpSocket,SIGNAL(disconnected()),this,SLOT(slotTcpDisconnected()));
    }
}

void MyServer::slotReadyReadSocket()
{
    //------------------------------------------------------
    // Format Pengiriman Data = | Tick | M/B | Data | SHA1 |
    //------------------------------------------------------

    QTcpSocket *connection = qobject_cast<QTcpSocket *>(sender());
    int c = allTcpClient.key(connection);
    QTcpSocket *tcpSocket = allTcpClient.value(c);

    incomingTcpData.append(tcpSocket->readAll());
    if (myCrc.checkCRC16Kermit(incomingTcpData))
    {
        if(incomingTcpData.mid(1,1) == "M")
        {
            rxDataM = incomingTcpData.mid(2,incomingTcpData.size()-4);  // -2
            tickM = incomingTcpData.left(1).toInt();
            txDataM.append(myCrc.getCRC16Kermit(txDataM));
            connection->write(txDataM);
            connection->waitForBytesWritten(50);
            //**qDebug() << rxDataM;

        }
        else if(incomingTcpData.mid(1,1) == "B")
        {
            rxDataB = incomingTcpData.mid(2,incomingTcpData.size()-4);  // -2
            tickB = incomingTcpData.left(1).toInt();
            txDataB.append(myCrc.getCRC16Kermit(txDataB));
            connection->write(txDataB);
            connection->waitForBytesWritten(50);
            //**qDebug() << rxDataB;
        }
    }
    incomingTcpData.clear();
}

void MyServer::slotTcpDisconnected()
{
    QTcpSocket *tcpSocket = qobject_cast<QTcpSocket *>(sender());
    if(!tcpSocket)
        return;
    int key = allTcpClient.key(tcpSocket);
    allTcpClient.remove(key);
    tcpSocket->deleteLater();
    //**qDebug() << "Disconnected from :" << tcpSocket->localAddress() << tcpSocket->localPort() ;
}

void MyServer::slotTimeOut()
{
    static quint8 mDetak=0;
    if(mDetak==tickM){
        idxTickM = idxTickM + 1;
    }else{
        mDetak = tickM;
        idxTickM = 0;
    }
    if(idxTickM > 10){
        idxTickM = 11;
        rxDataM = ""; status_M = "Time Out";//main_TO = "Time Out";
        //**qDebug() << "Main Timeout"; // data di kosongkan dan warning/report to ATS
    } else{
        status_M = "Connect.";//main_TO = "Connect.";
    }

    static quint8 bDetak=0;
    if(bDetak==tickB){
        idxTickB = idxTickB + 1;
    }else{
        bDetak = tickB;
        idxTickB = 0;
    }
    if (idxTickB > 10){
        idxTickB = 11;
        rxDataB = ""; status_B = "Time Out"; //backup_TO = "Time Out";
        //**qDebug() << "Back Up Timeout";
    } else{
        status_B = "Connect."; //backup_TO = "Connect.";
    }
}
