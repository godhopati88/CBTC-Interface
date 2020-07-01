#include "udpycom.h"


void udpYCOM::setTxData(const QByteArray &value)
{
    txData = value;
}

void udpYCOM::appendTxData(const QByteArray &value)
{
    txData.append(value);
}

void udpYCOM::resetTXData()
{
    //    runtime.run();
    txData.clear();
}

quint8 udpYCOM::getByteStatus() const
{
    return byteStatus;
}

QByteArray udpYCOM::getTxData() const
{
    return txData;
}

QByteArray udpYCOM::getRxData() const
{
    return rxData;
}

QByteArray udpYCOM::getStatus() const
{
    return status;
}

void udpYCOM::runYCOM(QString ipAddress, quint16 sendPort, quint16 recvPort, quint16 msAutoSend)
{

    // Initialize
    iphost=ipAddress; port=sendPort;
    tick=0; cTicks=0; rxFlag=false;

    // Binding
    socket = new QUdpSocket(this);
    QHostAddress ip(ipAddress);
    socket->bind(ip,recvPort);

    qDebug() << "UDP as Client, bind:" << ipAddress << sendPort << "-->" << iphost << "every:" << msAutoSend << " ms";;

    // Create Signal handling if there is new data
    connect(socket,SIGNAL(readyRead()),this,SLOT(YCOM_readyRead()));

    // Initialize for autosend and timeout
    if(msAutoSend<1000 && msAutoSend>10) {cTicksMax=1000/msAutoSend;}
    else {msAutoSend=100; cTicksMax=10;}

    // Create timer auto send
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(YCOM_autoSend()));
    timer->start(msAutoSend);
}


void udpYCOM::YCOM_readyRead()
{
    QByteArray incomingData;
    QHostAddress sender;
    quint16 senderPort;

    incomingData.resize(socket->pendingDatagramSize());

    socket->readDatagram(incomingData.data(),incomingData.size(),
                         &sender,&senderPort);
    //qDebug() << "udpClient _message from: " << sender.toString() <<senderPort;

    if (kermit.checkCRC16Kermit(incomingData)==true && sender.toString()==iphost)
    {
        rxData=kermit.getOriginalData(incomingData);
        //qDebug() << "udpClient _rx data: " << rxData;
        //qDebug() << "udpClient _rx data, calc :" << kermit.getCRC16Kermit(incomingData.left(incomingData.size()-2)) << " rec :" << incomingData.right(2);

        status = "Connect.";
        byteStatus=1;
        rxFlag=true;
        cTicks=0;
    }
    else
    {
        //qDebug() << "udpClient _rx data <not valid !> : " << incomingData;
        qDebug() << "udpClient _rx data <not valid !>, calc :" << kermit.getCRC16Kermit(incomingData.left(incomingData.size()-2)) << " rec :" << incomingData.right(2);
        qDebug() << "not valid data : " << incomingData;
    }

}

void udpYCOM::YCOM_autoSend()
{
    QByteArray sendData;
    QHostAddress host(iphost);

    sendData.clear();
    sendData.append(tick);
    sendData.append(txData);
    sendData.append(kermit.getCRC16Kermit(sendData));

    socket->writeDatagram(sendData,host,port);
    //qDebug() << "udpClient _tx data : " << sendData;

    sendData.clear();

    tick ^= 1 << 0;  // Generate tick

    if(!rxFlag)cTicks++;
    if(cTicks >= cTicksMax) {
        cTicks=cTicksMax;
        qDebug() << "udpClient _Timeout for host: " <<  iphost << port;
        status = "Timeout";
        byteStatus=0;
        rxData.clear();
    }
    rxFlag=false;

    emit data_sent();
}

void udpYCOM::CHECK_timeout()
{
    //Timeout count
    if(mticks == ticks) {cTicks ++;}
    else {mticks = ticks; cTicks=0;}

    //Timeout check
    if(cTicks >= cTicksMax) {cTicks=cTicksMax; rxData.clear();status= "Timeout.";byteStatus=0;}
    else {status = "Connect.";byteStatus=1;}

}


