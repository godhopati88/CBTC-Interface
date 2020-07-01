 #include "mysslserver.h"

void MySslServer::Run(QString MB, QHostAddress ipAddress, quint16 ipPort, QString caFile, QString certFile, QString keyFile)
{
    quint8 i;
    flagSsl = false;
    //flagIP = false;

    asMB = MB;
    Address = ipAddress;
    Port = ipPort;
    caF = caFile;
    certF = certFile;
    keyF = keyFile;


    sslServer.setCaCertificate(caFile);
    sslServer.setSslLocalCertificate(certFile);
    sslServer.setSslPrivateKey(keyFile, QByteArray());
    sslServer.setSslProtocol(QSsl::SecureProtocols);
    sslServer.listen(ipAddress, ipPort);
    connect(&sslServer, SIGNAL(newConnection()), this, SLOT(incomingSslConnection()));

    qDebug() << "SSL Server Listening at" << ipAddress << ipPort;


    for(i=0;i<3;i++)
    {
        tickTrain_M[i] = 0;
        tickTrain_B[i] = 0;
        detak_M[i] = 0;
        detak_B[i] = 0;
        idxTickTrain_M[i] = 11;
        idxTickTrain_B[i] = 11;
        flagIP_M[i] = false;
        flagIP_B[i] = false;
    }

    QTimer *sTimer = new QTimer(this);
    connect(sTimer,SIGNAL(timeout()),this,SLOT(slotTimeOut()));
    sTimer->start(100); // 200
}

MySslServer::~MySslServer()
{
    close();
}

void MySslServer::close()
{
    QHashIterator<int, QSslSocket*> i(allSslClients);
    while (i.hasNext())
    {
        i.next();
        if (!i.value()->isEncrypted())
        {
            i.value()->abort();
            i.value()->close();
            qDebug() << "ssl socket =" << i.value()->isEncrypted();
        }

    }
    sslServer.close();
}

void MySslServer::closeIP_M(QString ip, quint8 idTrain)
{
    QHashIterator<int, QSslSocket*> i(allSslClients);
    while (i.hasNext())
    {
        i.next();
        if (i.value()->peerAddress().toString() == ip && flagIP_M[idTrain])
        {
            i.value()->disconnectFromHost();
            i.value()->close();
            i.value()->abort();
            flagIP_M[idTrain]=false;
        }
    }
}

void MySslServer::closeIP_B(QString ip, quint8 idTrain)
{
    QHashIterator<int, QSslSocket*> i(allSslClients);
    while (i.hasNext())
    {
        i.next();
        if (i.value()->peerAddress().toString() == ip && flagIP_B[idTrain])
        {
            i.value()->disconnectFromHost();
            i.value()->close();
            i.value()->abort();
            flagIP_B[idTrain]=false;
        }
    }
}


QByteArray MySslServer::getRxData_M(int idTrain) const
{
    return rxData_M[idTrain];
}

QByteArray MySslServer::getRxData_B(int idTrain) const
{
    return rxData_B[idTrain];
}

QByteArray MySslServer::getTxData_M(int idTrain) const
{
    return txData_M[idTrain];
}

QByteArray MySslServer::getTxData_B(int idTrain) const
{
    return txData_B[idTrain];
}

void MySslServer::setTxData_M(const QByteArray &value, int idTrain)
{
    txData_M[idTrain] = value;
}

void MySslServer::setTxData_B(const QByteArray &value, int idTrain)
{
    txData_B[idTrain] = value;
}

QByteArray MySslServer::getStatus_M(int idTrain) const
{
    return status_M[idTrain];
}

QByteArray MySslServer::getStatus_B(int idTrain) const
{
    return status_B[idTrain];
}



void MySslServer::incomingSslConnection()
{
    
    QSslSocket *sslSocket = qobject_cast<QSslSocket*>(sslServer.nextPendingConnection());
    
    if (sslSocket)
    {

//        QTimer::singleShot(5000, this, SLOT(abortUnencryptedConnection())); /* Abort the unencrypted socket: Do not set below 200 ms */

        int sockDesc = sslSocket->socketDescriptor();
        allSslClients.insert(sockDesc, sslSocket);
        if(sslSocket->peerPort() > 0 )
        {
            qDebug() << "-> Connected (SSL Client) from :" << sslSocket->peerAddress() << sslSocket->peerPort();
            disconnect( &sslServer, SIGNAL(newConnection()),0,0);
            connect(sslSocket, SIGNAL(encrypted()), this, SLOT(slotEncryptedSsl()));
            flagSsl = true;
        }
        else
        {
            QHashIterator<int, QSslSocket*> i(allSslClients);
            while (i.hasNext())
            {
                i.next();
                if (!i.value()->isEncrypted())
                {
                    i.value()->abort();
                    i.value()->close();
                    qDebug() << "ssl socket =" << i.value()->isEncrypted();
                    sslServer.close();
                }
            }

            sslServer.setCaCertificate(caF);
            sslServer.setSslLocalCertificate(certF);
            sslServer.setSslPrivateKey(keyF, QByteArray());
            sslServer.setSslProtocol(QSsl::SecureProtocols);
            sslServer.listen(Address, Port);
            connect(&sslServer, SIGNAL(newConnection()), this, SLOT(incomingSslConnection()));
        }
        qDebug() << "size:" << allSslClients.size();
    }


}

void MySslServer::slotEncryptedSsl()
{
    QSslSocket *sslSocket = qobject_cast<QSslSocket*>(sender());

    if (sslSocket->isEncrypted())
    {
        connect(sslSocket, SIGNAL(readyRead()), this, SLOT(slotReadyReadSsl()));
        qDebug() << "Encrypted............";
    }
    else
    {
        sslSocket->abort();
        sslSocket->close();
        qDebug() << "Didn't Encrypted............";
    }
}

void MySslServer::slotSslSocketStateChanged(QAbstractSocket::SocketState state)
{
    qDebug() << "socket state:" << state;
}

void MySslServer::slotPeerVerifyError(const QSslError &error)
{
    QSslSocket *sslSocket = qobject_cast<QSslSocket*>(sender());

    connect(sslSocket, SIGNAL(sslErrors(QList<QSslError>)), this, SLOT(slotSslErrors(QList<QSslError>)));
    connect(sslSocket, SIGNAL(peerVerifyError(QSslError)), this, SLOT(slotPeerVerifyError(QSslError)));
    qDebug() << "peerVerifyError:" << error;
}

void MySslServer::slotReadyReadSsl()
{
    //------------------------------------------------------
    // Format Pengiriman Data = | Tick | ID | M/B | Data | CRC16KERMIT |
    //------------------------------------------------------
    QSslSocket *connection = qobject_cast<QSslSocket*>(sender());

    int c = allSslClients.key(connection);
    QSslSocket *sslSocket = allSslClients.value(c);

    QByteArray sendData;

    incomingSslData = (sslSocket->readAll());

    if (myCrc.checkCRC16Kermit(incomingSslData))
    {
        trainID = incomingSslData[1];
        statusMB = incomingSslData.mid(2,1);


        if(statusMB == "M")
        {
            quint8 id = trainID - 1;
            rxData_M[id] = incomingSslData.mid(3,incomingSslData.size()-5);
            tickTrain_M[id] = incomingSslData[0];
            sendData=txData_M[id];
            sendData.append(myCrc.getCRC16Kermit(txData_M[id]));
        }
        else if(statusMB == "B")
        {
            quint8 id = trainID - 1;
            rxData_B[id] = incomingSslData.mid(3,incomingSslData.size()-5);
            tickTrain_B[id] = incomingSslData[0];
            sendData = txData_B[id];
            sendData.append(myCrc.getCRC16Kermit(txData_B[id]));
        }

        connection->write(sendData);
        connection->waitForBytesWritten(50);


//        switch(trainID)
//        {
//        case 1:
//            if(statusMB == "M")
//            {
//                quint8 id = trainID - 1;
//                rxData_M[id] = incomingSslData.mid(3,incomingSslData.size()-5);
//                tickTrain_M[id] = incomingSslData[0];
//                sendData=txData_M[id];
//                sendData.append(myCrc.getCRC16Kermit(txData_M[id]));
//                //connection->write(sendData);
//                //connection->waitForBytesWritten(50);
//                //qDebug() << "Train 1 Master :" << rxData_M[id];
//            }
//            else if(statusMB == "B")
//            {
//                quint8 id = trainID - 1;
//                rxData_B[id] = incomingSslData.mid(3,incomingSslData.size()-5);
//                tickTrain_B[id] = incomingSslData[0];
//                sendData = txData_B[id];
//                sendData.append(myCrc.getCRC16Kermit(txData_B[id]));
//                //txData_B[id].append(myCrc.getCRC16Kermit(txData_B[id]));
//                //connection->write(sendData);
//                //connection->waitForBytesWritten(50);
//                //qDebug() << "Train 1 Backup :" << rxData_B[id];
//            }
//            break;

//        case 2:
//            if(statusMB == "M")
//            {
//                quint8 id = trainID - 1;
//                rxData_M[id] = incomingSslData.mid(3,incomingSslData.size()-5);
//                tickTrain_M[id] = incomingSslData[0];
//                sendData=txData_M[id];
//                sendData.append(myCrc.getCRC16Kermit(txData_M[id]));
//                //txData_M[id].append(myCrc.getCRC16Kermit(txData_M[id]));
//                //connection->write(txData_M[id]);
//                //connection->waitForBytesWritten(50);
//                //qDebug() << "Train 2 Master :" << rxData_M[id];
//            }
//            else if(statusMB == "B")
//            {
//                quint8 id = trainID - 1;
//                rxData_B[id] = incomingSslData.mid(3,incomingSslData.size()-5);
//                tickTrain_B[id] = incomingSslData[0];
//                sendData = txData_B[id];
//                sendData.append(myCrc.getCRC16Kermit(txData_B[id]));
//                //txData_B[id].append(myCrc.getCRC16Kermit(txData_B[id]));
//                //connection->write(txData_B[id]);
//                //connection->waitForBytesWritten(50);
//                //qDebug() << "Train 2 Backup :" << rxData_B[id];
//            }
//            break;

//        case 3:(uint8_T)(1);//
//            if(statusMB == "M")
//            {
//                quint8 id = trainID - 1;
//                rxData_M[id] = incomingSslData.mid(3,incomingSslData.size()-5);
//                tickTrain_M[id] = incomingSslData[0];
//                sendData=txData_M[id];
//                sendData.append(myCrc.getCRC16Kermit(txData_M[id]));
//                //txData_M[id].append(myCrc.getCRC16Kermit(txData_M[id]));
//                //connection->write(txData_M[id]);
//                //connection->waitForBytesWritten(50);
//                //qDebug() << "Train 3 Master :" << rxData_M[id];
//            }
//            else if(statusMB == "B")
//            {
//                quint8 id = trainID - 1;
//                rxData_B[id] = incomingSslData.mid(3,incomingSslData.size()-5);
//                tickTrain_B[id] = incomingSslData[0];
//                sendData = txData_B[id];
//                sendData.append(myCrc.getCRC16Kermit(txData_B[id]));
//                //txData_B[id].append(myCrc.getCRC16Kermit(txData_B[id]));
//                //connection->write(txData_B[id]);
//                //connection->waitForBytesWritten(50);
//                //qDebug() << "Train 3 Backup :" << rxData_B[id];
//            }
//            connection->write(sendData);
//            connection->waitForBytesWritten(50);
//            break;
//        }
    }
    incomingSslData.clear();
}

void MySslServer::slotSslDisconnected()
{
    QSslSocket *sslSocket = qobject_cast<QSslSocket*>(sender());
    if (!sslSocket)
        return;
    int key = allSslClients.key(sslSocket);
    allSslClients.remove(key);
    sslSocket->deleteLater();
    qDebug() << "Disconnected from =" << sslSocket->peerAddress() << sslSocket->peerPort();
}

void MySslServer::slotSslErrors(const QList<QSslError> &errors)
{
    foreach (const QSslError &error, errors)
        qDebug() << error.errorString();

    QSslSocket *sslSocket = qobject_cast<QSslSocket*>(sender());
    qDebug() << sslSocket->peerCertificate().expiryDate().toString();
}

void MySslServer::abortUnencryptedConnection()
{
    QHashIterator<int, QSslSocket*> i(allSslClients);
    while (i.hasNext())
    {
        i.next();
        if (!i.value()->isEncrypted())
        {
            i.value()->abort();
            qDebug() << "ssl socket =" << i.value()->isEncrypted();
        }

    }
}

void MySslServer::slotTimeOut()
{

    quint8 i;

    for (i=0;i<3;i++)
    {
        /*********** MAIN ***********/
        if(detak_M[i]==tickTrain_M[i]) {
            idxTickTrain_M[i] = idxTickTrain_M[i] + 1;
        }
        else {
            detak_M[i] = tickTrain_M[i];
            idxTickTrain_M[i] = 0;
        }

        if(idxTickTrain_M[i] > 10){
            idxTickTrain_M[i] = 11;
            rxData_M[i].clear();
            status_M[i] = "Time Out";
            if(status_M[0] == "Time Out") closeIP_M("192.168.10.10",0);
            if(status_M[1] == "Time Out") closeIP_M("192.168.10.20",1);
            if(status_M[2] == "Time Out") closeIP_M("192.168.10.30",2);
        }
        else{
            status_M[i] = "Connected.";
            if(status_M[0]=="Connected.") flagIP_M[0]=true;
            if(status_M[1]=="Connected.") flagIP_M[1]=true;
            if(status_M[2]=="Connected.") flagIP_M[2]=true;
            connect(&sslServer, SIGNAL(newConnection()), this, SLOT(incomingSslConnection()));
        }

        /********* BACK UP *********/
        if(detak_B[i]==tickTrain_B[i]) {
            idxTickTrain_B[i] = idxTickTrain_B[i] + 1;
        }
        else {
            detak_B[i] = tickTrain_B[i];
            idxTickTrain_B[i] = 0;
        }
        //if(!server_cbi.getRxDataM().isEmpty()) Data_CBI_to_CP = server_cbi.getRxDataM().mid(0,5);

        if(idxTickTrain_B[i] > 10){
            idxTickTrain_B[i] = 11;
            rxData_B[i].clear();
            status_B[i] = "Time Out";//
            if(status_B[0] == "Time Out") closeIP_B("192.168.10.11",0);
            if(status_B[1] == "Time Out") closeIP_B("192.168.10.21",1);
            if(status_B[2] == "Time Out") closeIP_B("192.168.10.31",2);
        }
        else {
            status_B[i] = "Connected.";
            if(status_B[0]=="Connected.") flagIP_B[0]=true;
            if(status_B[1]=="Connected.") flagIP_B[1]=true;
            if(status_B[2]=="Connected.") flagIP_B[2]=true;
            connect(&sslServer, SIGNAL(newConnection()), this, SLOT(incomingSslConnection()));
        }

    }

    if (flagSsl )
    {
        connect(&sslServer, SIGNAL(newConnection()), this, SLOT(incomingSslConnection()));
        flagSsl=false;
    }
}


