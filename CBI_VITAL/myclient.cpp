#include "myclient.h"

MyClient::~MyClient()
{
    if (client.isOpen())
    {
      client.close();
    }
}

void MyClient::run(QString asMB, QString IP, quint16 Port, QString Hostname)
{
    hostname = Hostname;
    port = Port;
    ip = IP;
    asmb = asMB;

    tick=0;
    sendFlag = false;
    count_timeout=0;

    connect(&client, SIGNAL(connected()), this, SLOT(TcpConnected()));
    connect(&client, SIGNAL(readyRead()), this, SLOT(TcpReadyRead()));

//    client.bind(QHostAddress(ip),port,QAbstractSocket::BindFlag::ReuseAddressHint);
    client.connectToHost(Hostname,Port);
    client.waitForConnected(10);

    // Auto Reconnect every 2 seconds
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(TcpReconnectToHost()));
    timer->start(2000);

    // Auto send every 200 miliseconds
    connect(&Stimer, SIGNAL(timeout()), this, SLOT(AutoSend()));

    status="timeout";
}

QByteArray MyClient::getStatus() const
{
    return status;
}

QByteArray MyClient::getTxData() const
{
    return txData;
}

void MyClient::setTxData(const QByteArray &value)
{
    txData = value;
}

QByteArray MyClient::getRxData() const
{
    return rxData;
}

void MyClient::TcpConnected()
{
    //**qDebug() << "Connected";

    Stimer.start(200);

    sendFlag = false;
    count_timeout=0;
}

void MyClient::TcpReadyRead()
{
    QByteArray dataPacket;
    dataPacket = client.readAll();

    if (kermit.checkCRC16Kermit(dataPacket))
    {
        rxData = kermit.getOriginalData(dataPacket);
        //**qDebug()  << "Receive data : " << rxData ;
    }
    //**else qDebug()  << "Data not valid ! " << dataPacket;

    status="connect";

    dataPacket.clear();

    sendFlag = false;
    count_timeout=0;
}

void MyClient::TcpReconnectToHost()
{
    if(client.state()==QAbstractSocket::UnconnectedState)
    {
        Stimer.stop();
        client.abort();
        status="timeout";
//        client.bind(QHostAddress(ip),port,QAbstractSocket::BindFlag::ReuseAddressHint);
        client.connectToHost(hostname,port);
        //**qDebug() << asmb << "Reconnecting to " << hostname << port;
        client.waitForConnected(10);
    }
}

void MyClient::AutoSend()
{
    //-----------------------------------------------
    // Format data send:  | Tick | M/B | Data | CRC |
    // ----------------------------------------------

    if(client.state()==QAbstractSocket::ConnectedState)
    {
        QByteArray data;

        // Send Data
        data.clear();
        data.append(QByteArray::number(tick));
        data.append(asmb);          // as Main/Backup
        data.append(txData);   // txClient
        data.append(kermit.getCRC16Kermit(data));
        client.write(data);
        //**qDebug() << data;
        client.waitForBytesWritten(100);



        tick ^= 1 << 0;  // Generate tick
        sendFlag = true;
    }

    if(sendFlag)count_timeout++;
    if(count_timeout >= 5) {
        count_timeout=5;
        status="timeout";
        rxData = "";
        client.abort();
    }
}

