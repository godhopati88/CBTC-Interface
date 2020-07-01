/**
  * Author  : Ahmad Fuady
  * Email   : ahmad.fuady@len.co.id
  * Licence : PT Len Industri (Persero)
  * File name    : MyTCPServer.c
  * Description  : TCP Server with CRC16 Kermit
  *                (For 1 client only or multiclient with same data)
  *
        The program only can receive data with format : Data + CRC Kermit
        The program will response to the client if the received data valid

  * Require file CRC16Kermit.h to use
*/

#include "mytcpserver.h"


MyTCPServer::~MyTCPServer()
{
    close();
}

void MyTCPServer::close()
{
    QHashIterator<int, QTcpSocket *> sock(allTcpClient);
    while (sock.hasNext()) {
        sock.next();
        sock.value()->abort();
    }
    tcpServer.close();
}

quint8 MyTCPServer::getByteStatus() const
{
    return byteStatus;
}

QByteArray MyTCPServer::getStatus() const
{
    return status;
}

QByteArray MyTCPServer::getTxData() const
{
    return txData;
}

QByteArray MyTCPServer::getRxData() const
{
    return rxData;
}

void MyTCPServer::setTxData(const QByteArray &value)
{
    txData = value;
}


void MyTCPServer::run(QString ipAddress, quint16 ipPort, QString serverName)
{
    name = serverName;
    tcpServer.listen(QHostAddress(ipAddress),ipPort);
    connect(&tcpServer,SIGNAL(newConnection()),this,SLOT(TcpConnection_in()));
    qDebug() << "Server " << name << " _Listening at" << ipAddress << ipPort;
    status = "Listening..";
    byteStatus=2;
}


void MyTCPServer::TcpConnection_in()
{
    QTcpSocket *tcpSocket = tcpServer.nextPendingConnection();
    if (tcpSocket)
    {
        int sockDesc = tcpSocket->socketDescriptor();
        allTcpClient.insert(sockDesc,tcpSocket);

        qDebug() << "Server " << name << " _Connected from :" << tcpSocket->peerAddress() << tcpSocket->peerPort();

        connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(TcpReadyRead()));
        connect(tcpSocket,SIGNAL(disconnected()),this,SLOT(TcpDisconnected()));
    }
}

void MyTCPServer::TcpReadyRead()
{
    QByteArray sendData="";

    QTcpSocket *connection = qobject_cast<QTcpSocket *>(sender());
    int c = allTcpClient.key(connection);
    QTcpSocket *tcpSocket = allTcpClient.value(c);

    incomingTcpData.append(tcpSocket->readAll());

    if (kermit.checkCRC16Kermit(incomingTcpData))
    {
        rxData = kermit.getOriginalData(incomingTcpData);
        //qDebug() << "Server " << name << " _rxData :" << incomingTcpData;

        emit newRxData(rxData);

        sendData = txData;
        sendData.append(kermit.getCRC16Kermit(txData));

        connection->write(sendData);
        connection->waitForBytesWritten(50);

    }
    else {
        qDebug() << "Server " << name << " _Raw rxData <not valid> :" << incomingTcpData;
    }

    incomingTcpData.clear();
}

void MyTCPServer::TcpDisconnected()
{
    QTcpSocket *tcpSocket = qobject_cast<QTcpSocket *>(sender());
    if(!tcpSocket)
        return;
    int key = allTcpClient.key(tcpSocket);
    allTcpClient.remove(key);
    tcpSocket->deleteLater();
    qDebug() << "Server " << name << " _Disconnected from :" << tcpSocket->localAddress() << tcpSocket->localPort() ;
}

void MyTCPServer::closeIP(QString ip)
{
    QHashIterator <int, QTcpSocket*> client(allTcpClient);
    while(client.hasNext())
    {
        client.next();
        if(client.value()->peerAddress().toString() == ip)
        {
            client.value()->disconnectFromHost();
            client.value()->close();
            client.value()->abort();
        }
    }
}

