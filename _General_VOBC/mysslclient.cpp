#include "mysslclient.h"

MySslClient::~MySslClient()
{
    close();
}

void MySslClient::close()
{
    Stimer.disconnect();
    timer.disconnect();
    sslClient.disconnect();
    sslClient.abort();
    sslClient.close();
}

QByteArray MySslClient::getStatus() const
{
    return status;
}

QByteArray MySslClient::getRxData() const
{
    return rxData;
}

QByteArray MySslClient::getTxData() const
{
    return txData;
}

void MySslClient::setTxData(const QByteArray &value)
{
    txData = value;
}

quint8 MySslClient::getByteStatus() const
{
    return byteStatus;
}

quint8 MySslClient::run(quint16 ID, QString asMB, QString IPfile, quint16 Port, QString IP_Host)
{
    if (asMB == "." || IPfile == "." || IP_Host == ".") return 0;

    ip = IPfile;
    ip_host = IP_Host; port = Port;
    asmb = asMB; id = (ID & 0xFF); tick = 0;

    tWaitssl=1000;

    tReconn=1500;// + (id * 1000);
    tReCount=1;

    fConn = false;
    sendFlag = false;
    count_timeout=0;

    // Create timer auto reconnect
    //QTimer *timer = new QTimer(this);
    connect(&timer, SIGNAL(timeout()), this, SLOT(TCP_reconnect()));
    timer.start(tReconn);

    // Create timer auto send every 200ms
    //QTimer *Stimer = new QTimer(this);
    connect(&Stimer, SIGNAL(timeout()), this, SLOT(AUTO_send()));
    Stimer.start(200);

    // Report any SSL errors that occur
    connect(&sslClient, SIGNAL(sslErrors(const QList<QSslError> &)), this, SLOT(SSL_errors(const QList<QSslError> &)));

    connect(&sslClient, SIGNAL(connected()), this, SLOT(SSL_connect()));
    connect(&sslClient, SIGNAL(disconnected()), this, SLOT(SSL_disconnect()));
    connect(&sslClient, SIGNAL(encrypted()), this, SLOT(SSL_encrypt()));
    connect(&sslClient, SIGNAL(readyRead()), this, SLOT(SSL_readyRead()));
    connect(&sslClient, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(TCP_socketError()));
    //connect(&sslClient, SIGNAL(aboutToQuit()), this, SLOT(SSL_forceExitHandlers()));

    // Initiate an SSL connection to the chat server.
    QFile caFiles(":/certs/ca.crt"); caFiles.open(QIODevice::ReadOnly);
    QSslCertificate caCert(caFiles.readAll());

    QFile certFiles(":/certs/"+ IPfile +".crt"); certFiles.open(QIODevice::ReadOnly);
    QSslCertificate cert(certFiles.readAll());

    QFile keyFiles(":/certs/"+ IPfile +".key"); keyFiles.open(QIODevice::ReadOnly);
    QSslKey key(keyFiles.readAll(), QSsl::Rsa, QSsl::Pem, QSsl::PrivateKey, QByteArray());

    sslClient.addCaCertificate(caCert);
    sslClient.setLocalCertificate(cert);
    sslClient.setPrivateKey(key);
    sslClient.setPeerVerifyMode(QSslSocket::VerifyPeer);

    qDebug() << "sslClient _.. Connecting to host: " << ip_host << "port: " << port;
    sslClient.bind(QHostAddress(ip), port, QAbstractSocket::BindFlag::ReuseAddressHint);
    sslClient.connectToHostEncrypted(ip_host, port);
    sslClient.waitForConnected(10);
    return 0;
}

void MySslClient::TCP_reconnect()
{
    if(sslClient.state()==QAbstractSocket::UnconnectedState && tReCount==id)
    {
        sslClient.abort();
        rxData = "";
        status = "Reconnecting..";

        qDebug() << "sslClient _.. Connecting to host: " << ip_host << "port: " << port;

        sslClient.bind(QHostAddress(ip), port, QAbstractSocket::BindFlag::ReuseAddressHint);

        sslClient.connectToHostEncrypted(ip_host,port);
        sslClient.waitForConnected(10);
    }
    tReCount++;
    if(tReCount==4)tReCount=1;
}

void MySslClient::AUTO_send()
{
    if(sslClient.state()==QAbstractSocket::ConnectedState)
    {

        QByteArray data;

        // Send Data
        //----------------------------------------------------
        // Format data send:  | Tick | ID | M/B | Data | CRC |
        // ---------------------------------------------------
        data.append(tick);
        data.append(id);
        data.append(asmb);     // as Main/Backup
        data.append(txData);   // Transmit SslClient Data
        data.append(kermit.getCRC16Kermit(data)); // CRC
        sslClient.write(data);
        //qDebug() << "sslClient _tx data : "<< data;
        sslClient.waitForBytesWritten(100);

        data.clear();

        //tick ^= 1 << 0;  // Generate tick
        tick ++;  // Generate tick
        sendFlag = true;

        if(sslClient.isEncrypted()) {status = "Connected !";byteStatus=1;}
    }

    if(sslClient.state()==QAbstractSocket::UnconnectedState)
    {
        if(fConn==false){tReCount=1;fConn=true;}
    }

    if(sendFlag)count_timeout++;
    if(count_timeout >= 5) {
        count_timeout=5;
        rxData = "";
        status = "Timeout..";
        byteStatus=0;
        sslClient.abort();        
        //sslClient.close();
        if(fConn==false){tReCount=1;fConn=true;}
    }
}

void MySslClient::SSL_readyRead()
{
    QByteArray dataPacket;
    dataPacket = sslClient.readAll();

    if (kermit.checkCRC16Kermit(dataPacket)==true){
        rxData = kermit.getOriginalData(dataPacket);
        //qDebug()  << "sslClient _rx data : " << rxData ;
    }
    else qDebug()  << "sslClient _rx data <not valid !> " << dataPacket;

    dataPacket.clear();

    sendFlag = false;
    count_timeout=0;
}

void MySslClient::SSL_connect()
{
    qDebug() << "sslClient _Wait for encrypted..";
    status = "Wait for encrypted..";


//    if(! sslClient.waitForEncrypted(tWaitssl)){
        sslClient.waitForEncrypted(tWaitssl);
//        status = "sslClient _Wait for encrypted..done!";
//            QEventLoop loop;
//            loop.connect(&sslClient, SIGNAL(encrypted()), SLOT(quit()));
//            //connect(&sslClient,SIGNAL(encrypted()), &loop, SLOT(quit()));
//            QTimer::singleShot(1000,&loop,SLOT(quit()));
//            loop.exec();
//    }
//    else
//        status = "sslClient _Wait for encrypted..fail";



    sendFlag = false;
    fConn=false;
    count_timeout=0;
}

void MySslClient::SSL_encrypt()
{
    qDebug() << "sslClient _Connected !";
    status = "Connected !";
    byteStatus=1;
}

void MySslClient::SSL_disconnect()
{
    sslClient.abort();
    qDebug() << "sslClient _Disconnected from host" << ip_host << "port: " << port;
}

void MySslClient::SSL_forceExitHandlers()
{
    close();
}

void MySslClient::SSL_err(const QSslError &error)
{
    QString errorStrings;

    errorStrings += error.errorString();

    errorStrings += '\n';


    qDebug() << "sslClient _(" << ip_host << ":" << port << ") ERR: " << errorStrings;

     sslClient.abort();
}

// Process SSL errors
void MySslClient::SSL_errors(const QList<QSslError> &errors)
{
  QString errorStrings;
  foreach (QSslError error, errors)
  {
    errorStrings += error.errorString();
    if (error != errors.last())
    {
      errorStrings += '\n';
    }
  }

  qDebug() << "sslClient _(" << ip_host << ":" << port << ") SSL error: " << errorStrings;
   status = "SSL Error !";
   sslClient.abort();
}

void MySslClient::TCP_socketError()
{
        qDebug() << "sslClient _(" << ip_host << ":" << port << ") Socket Error: " << sslClient.error() << sslClient.errorString();
        status = "Socket Error !";
        sslClient.abort();
}
