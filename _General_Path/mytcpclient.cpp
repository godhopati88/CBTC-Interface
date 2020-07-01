/**
  * Author  : Ahmad Fuady
  * Email   : ahmad.fuady@len.co.id
  * Licence : PT Len Industri (Persero)
  * File name    : MyTCPClient.c
  * Description  : TCP Client with CRC16 Kermit
  *
        The program only can receive data with format : Data + CRC Kermit
        The program will auto send data with format : Ticks + Data + CRC Kermit
        The program will timeout if there is no respon from server

  * Require file CRC16Kermit.h to use
*/

#include "mytcpclient.h"

MyTCPClient::~MyTCPClient()
{
    close();
}

void MyTCPClient::close()
{

    Stimer.disconnect();
    timer.disconnect();
    client.disconnect();
    client.abort();
    client.close();

}

QByteArray MyTCPClient::getStatus() const
{
    return status;
}

QByteArray MyTCPClient::getTxData() const
{
    return txData;
}

void MyTCPClient::setTxData(const QByteArray &value)
{
    txData = value;
}

quint8 MyTCPClient::getByteStatus() const
{
    return byteStatus;
}

QByteArray MyTCPClient::getRxData() const
{
    return rxData;
}


void MyTCPClient::run(QString IP, quint16 Port, QString IP_Host)
{
    ip = IP; port = Port; ip_host = IP_Host;
    tick=0; sendFlag = false; cTicks=0;

    // Create signal handling
    connect(&client, SIGNAL(connected()), this, SLOT(TcpConnected()));
    connect(&client,SIGNAL(disconnected()), this, SLOT(TcpDisconnect()));
    connect(&client, SIGNAL(readyRead()), this, SLOT(TcpReadyRead()));

    // Connect to Hostname (server)
    /* Bind client supp]ort only on Qt 5.7.1 or Higher */
    client.bind(QHostAddress(ip), port);//, QAbstractSocket::BindFlag::ReuseAddressHint);
    client.connectToHost(ip_host,port);
    qDebug() << "Client _Connecting to " << ip_host << port;
    client.waitForConnected(10);

    // Auto Reconnect every 2 seconds
    connect(&timer, SIGNAL(timeout()), this, SLOT(TcpReconnectToHost()));
    timer.start(2000);

    // Auto send every 100 miliseconds
    connect(&Stimer, SIGNAL(timeout()), this, SLOT(AutoSend()));
    Stimer.start(100);

    status="timeout";
    byteStatus=0;
}


void MyTCPClient::TcpConnected()
{
    qDebug() << "Client _Connected";

    sendFlag = false;
    cTicks=0;
}

void MyTCPClient::TcpReadyRead()
{
    QByteArray dataPacket;
    dataPacket = client.readAll();

    if (kermit.checkCRC16Kermit(dataPacket)==true){
        rxData = kermit.getOriginalData(dataPacket);
        //qDebug()  << "Client _rx data : " << rxData ;

        emit newRxData(rxData);
    }
    //else qDebug()  << "Client _rx data <not valid !> " << dataPacket;

    status="connect";
    byteStatus=1;

    dataPacket.clear();

    sendFlag = false;
    cTicks=0;
}

void MyTCPClient::TcpDisconnect()
{
    client.abort();
    qDebug() << "Client _Disconnected";
}

void MyTCPClient::TcpReconnectToHost()
{
    if(client.state()==QAbstractSocket::UnconnectedState)
    {
        client.abort();
        status="reconnecting";
        byteStatus=0;
        /* Bind client support only on Qt 5.7.1 or Higher */
        //client.bind(QHostAddress(ip), port, QAbstractSocket::BindFlag::ReuseAddressHint);
        client.connectToHost(ip_host,port);
        //qDebug() << "Client _Reconnecting to " << ip_host << port;
        client.waitForConnected(10);
    }
}

void MyTCPClient::AutoSend()
{
    if(client.state()==QAbstractSocket::ConnectedState)
    {
        QByteArray sendData;

        // Send Data
        sendData.clear();
        sendData.append(tick);
        sendData.append(txData);
        sendData.append(kermit.getCRC16Kermit(sendData)); // CRC

        client.write(sendData);
        client.waitForBytesWritten(10);

        //qDebug() << "Client _tx data : " << sendData;

//        tick ^= 1 << 0;  // Generate tick
        tick ++;  // Generate tick
        sendFlag = true;
    }

    if(sendFlag)cTicks++;
    if(cTicks >= 10) {
        cTicks=10;
        status="timeout";
        byteStatus=0;
        rxData = "";
        client.abort();
    }
}



