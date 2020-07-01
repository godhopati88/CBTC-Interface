/**
  * Author  : Ahmad Fuady
  * Email   : ahmad.fuady@len.co.id
  * Licence : PT Len Industri (Persero)
  * File name    : MyUdp.c
  * Description  : UDP with CRC16 Kermit
  *
        The program only can receive data with format : Data + CRC Kermit
        The program will response to the client if the received data valid

  * Require file CRC16Kermit.h to use
*/

#include "udp.h"

void Udp::runServer(QString ipAddress, quint16 ipPort, quint16 msTimeout)
{
    // Initialize
    ticks=0; mticks=0; cTicks=0;

    // Binding
    socket = new QUdpSocket(this);
    QHostAddress ip(ipAddress);
    socket->bind(ip,ipPort);

    qDebug() << "UDP as Server, bind:" << ip << ipPort << "Timeout :" << msTimeout << " ms";

    // Create Signal handling if there is new data
    connect(socket,SIGNAL(readyRead()),this,SLOT(SERVER_readyRead()));

    // Create timer timeout check every 100 seconds
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(CHECK_timeout()));
    timer->start(100);

    if(msTimeout<1000) cTicksMax=msTimeout/100;
    else cTicksMax=10;
}

void Udp::runClient(QString ipAddress, quint16 ipPort, QString Hostname, quint16 msAutoSend)
{

    // Initialize
    hostname=Hostname; port=ipPort;
    tick=0; cTicks=0; rxFlag=false;

    // Binding
    socket = new QUdpSocket(this);
    QHostAddress ip(ipAddress);
    socket->bind(ip,ipPort);

    qDebug() << "UDP as Client, bind:" << ipAddress << ipPort << "-->" << hostname << "every:" << msAutoSend << " ms";;

    // Create Signal handling if there is new data
    connect(socket,SIGNAL(readyRead()),this,SLOT(CLIENT_readyRead()));

    // Initialize for autosend and timeout
    if(msAutoSend<1000 && msAutoSend>10) {cTicksMax=1000/msAutoSend;}
    else {msAutoSend=100; cTicksMax=10;}

    // Create timer auto send
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(CLIENT_autoSend()));
    timer->start(msAutoSend);

}

void Udp::setTxData(const QByteArray &value)
{
    txData = value;
}

void Udp::appendTxData(const QByteArray &value)
{
    txData.append(value);
}

void Udp::resetTXData()
{
    txData.clear();
}

QByteArray Udp::getTxData() const
{
    return txData;
}

QByteArray Udp::getRxData() const
{
    return rxData;
}

QByteArray Udp::getStatus() const
{
    return status;
}

void Udp::CLIENT_readyRead()
{
    QByteArray incomingData;
    QHostAddress sender;
    quint16 senderPort;

    incomingData.resize(socket->pendingDatagramSize());

    socket->readDatagram(incomingData.data(),incomingData.size(),
                         &sender,&senderPort);
    //qDebug() << "udpClient _message from: " << sender.toString() <<senderPort;

    if (kermit.checkCRC16Kermit(incomingData)==true && sender.toString()==hostname)
    {
        rxData=kermit.getOriginalData(incomingData);
        //qDebug() << "udpClient _rx data: " << rxData;

        status = "Connect.";
        rxFlag=true;
        cTicks=0;
    }
    else
    {
        qDebug() << "udpClient _rx data <not valid !> : " << incomingData;
    }

}

void Udp::SERVER_readyRead()
{
    QByteArray incomingData, sendData;
    incomingData.resize(socket->pendingDatagramSize());

    QHostAddress sender;
    quint16 senderPort;

    socket->readDatagram(incomingData.data(),incomingData.size(),
                         &sender,&senderPort);

    //qDebug() << "udpServer _message from: " << sender.toString() << "port: " <<senderPort;
    //qDebug() << "udpServer _message: " << buffer;


    // untuk keperluan vdu tanpa crc
//    if (kermit.checkCRC16Kermit(incomingData)==true)
//    {
        ticks =incomingData.mid(0,1);
        rxData=incomingData.mid(1,incomingData.size()); // -2
        //qDebug() << "udpServer _rx data: " << rxData;

        status = "Connect.";
        cTicks=0;

        sendData = txData;
//        sendData.append(kermit.getCRC16Kermit(txData));

        socket->writeDatagram(sendData,sender,senderPort);

        //qDebug() << "udpServer _tx data : " << txData;
//    }
//    else
//    {
//        qDebug() << "udpServer _rx data <not valid !> : " << incomingData;
//    }
}

void Udp::CLIENT_autoSend()
{
    QByteArray sendData;
    QHostAddress ipHost(hostname);

    sendData.clear();
    sendData.append(tick);
    sendData.append(txData);
    sendData.append(kermit.getCRC16Kermit(sendData));

    socket->writeDatagram(sendData,ipHost,port);
    //qDebug() << "udpClient _tx data : " << sendData;

    sendData.clear();

    tick ^= 1 << 0;  // Generate tick

    if(!rxFlag)cTicks++;
    if(cTicks >= cTicksMax) {
        cTicks=cTicksMax;
        qDebug() << "udpClient _Timeout for hostname: " <<  hostname << port;
        status = "Timeout";
        rxData.clear();
    }
    rxFlag=false;

    emit data_sent();
}

void Udp::CHECK_timeout()
{
    //Timeout count
    if(mticks == ticks) {cTicks ++;}
    else {mticks = ticks; cTicks=0;}

    //Timeout check
    if(cTicks >= cTicksMax) {cTicks=cTicksMax; rxData.clear();status= "Timeout.";}
    else status = "Connect.";

}


