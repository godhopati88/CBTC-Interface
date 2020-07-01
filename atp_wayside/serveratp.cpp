#include "serveratp.h"



void ServerATP::run(QString ipAddress, quint16 ipPort)
{
    quint8 i;

    //initialize prev i=3
    for(i=0;i<6;i++)
    {
        cTicks_M[i]=0; cTicks_B[i]=0;
        ticks_M[i]=0; ticks_B[i]=0;
        mticks_M[i]=0; mticks_B[i]=0;
    }

    // Create Comm. as Server
    vatp.run(ipAddress,ipPort,"ATP");

    // Create Signal handling if there is new data
    connect(&vatp, SIGNAL(newRxData(QByteArray)), this, SLOT(process(QByteArray)));

    // Create Timer to Handling Process
    QTimer *sTimer = new QTimer(this);
    connect(sTimer,SIGNAL(timeout()),this,SLOT(slotTimeOut()));
    sTimer->start(50);
}

void ServerATP::close()
{
   vatp.close();
}

QByteArray ServerATP::getRxData_M(int idTrain) const
{
    return rxData_M[idTrain];
}

QByteArray ServerATP::getRxData_B(int idTrain) const
{
    return rxData_B[idTrain];
}

QByteArray ServerATP::getTxData_M(int idTrain) const
{
    return txData_M[idTrain];
}

void ServerATP::setTxData_M(const QByteArray &value, int idTrain)
{
    txData_M[idTrain] = value;
}

QByteArray ServerATP::getTxData_B(int idTrain) const
{
    return txData_B[idTrain];
}

void ServerATP::setTxData_B(const QByteArray &value, int idTrain)
{
    txData_B[idTrain] = value;
}

QByteArray ServerATP::getStatus_M(int idTrain) const
{
    return status_M[idTrain];
}

QByteArray ServerATP::getStatus_B(int idTrain) const
{
    return status_B[idTrain];
}

void ServerATP::process(QByteArray inData)
{
    QByteArray idData, Data;
    QByteArray ticksData;
    quint8 idTrain;

    incomingData =  inData;

    //vatp.setTxData(txData);

    //------------------------------------------------------
    // Format Pengiriman Data = | Tick | ID | M/B | Data | CRC16KERMIT |
    //------------------------------------------------------

     //Parsing
    ticksData = incomingData.mid(0,1);                  // idx - 0
    idTrain = incomingData[1]-1;                    // idx - 1
    idData = incomingData.mid(2,1);                     // idx - 2
    Data = incomingData.mid(3,incomingData.size()-3);   // idx - 2 to end
//    //qDebug() << "ticks : " << ticksData << "asMB : " << idData;


    if(idData == "M"){
        ticks_M[idTrain]=ticksData;
        rxData_M[idTrain] =  Data;
        status_M[idTrain] = "Connected.";
        vatp.setTxData(txData_M[idTrain]);

    }
    else if(idData == "B"){
        ticks_B[idTrain]=ticksData;
        rxData_B[idTrain] = Data;
        status_B[idTrain] = "Connected.";
        vatp.setTxData(txData_B[idTrain]);
    }
}

void ServerATP::slotTimeOut()
{
    quint8 i;

    // prev i=3;
    for(i=0;i<6;i++)
    {
        //Timeout count
        if(mticks_M[i] == ticks_M[i]) {cTicks_M[i] ++;}
        else {mticks_M[i] = ticks_M[i]; cTicks_M[i]=0;}

        if(mticks_B[i] == ticks_B[i]) {cTicks_B[i] ++;}
        else {mticks_B[i] = ticks_B[i]; cTicks_B[i]=0;}

        //Timeout check
        if(cTicks_M[i] >= 10) {cTicks_M[i]=10; rxData_M[i].clear();status_M[i] = "Timeout.";}
        if(cTicks_B[i] >= 10) {cTicks_B[i]=10; rxData_B[i].clear();status_B[i] = "Timeout.";}
    }

    if(status_M[0]=="Timeout.") vatp.closeIP("192.168.10.10");
    if(status_M[1]=="Timeout.") vatp.closeIP("192.168.10.20");
    if(status_M[2]=="Timeout.") vatp.closeIP("192.168.10.30");
    if(status_M[3]=="Timeout.") vatp.closeIP("192.168.10.110");
    if(status_M[4]=="Timeout.") vatp.closeIP("192.168.10.120");
    if(status_M[5]=="Timeout.") vatp.closeIP("192.168.10.130");

    if(status_B[0]=="Timeout.") vatp.closeIP("192.168.10.11");
    if(status_B[1]=="Timeout.") vatp.closeIP("192.168.10.21");
    if(status_B[2]=="Timeout.") vatp.closeIP("192.168.10.31");
    if(status_B[3]=="Timeout.") vatp.closeIP("192.168.10.111");
    if(status_B[4]=="Timeout.") vatp.closeIP("192.168.10.121");
    if(status_B[5]=="Timeout.") vatp.closeIP("192.168.10.131");
}

