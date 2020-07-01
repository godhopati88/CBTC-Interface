#include "serverars.h"

void ServerARS::run(QString ipAddress, quint16 ipPort)
{
    // Initialize
    cTicks_M=0; cTicks_B=0;
    ticks_M=0; ticks_B=0;
    mticks_M=0; mticks_B=0;

    // Create Comm. as Server
    ars.run(ipAddress,ipPort,"ARS");
    status_M = "Listen.";
    status_B = "Listen.";

    // Create Signal handling if there is new data
    connect(&ars, SIGNAL(newRxData(QByteArray)), this, SLOT(process(QByteArray)));

    // Create Timer to Handling Process
    QTimer *sTimer = new QTimer(this);
    connect(sTimer,SIGNAL(timeout()),this,SLOT(timeoutCheck()));
    sTimer->start(100);
}

void ServerARS::close()
{
    ars.close();
}

QByteArray ServerARS::getTxData() const
{
    return txData;
}

QByteArray ServerARS::getRxData_M() const
{
    return rxData_M;
}

QByteArray ServerARS::getRxData_B() const
{
    return rxData_B;
}

QByteArray ServerARS::getStatus_M() const
{
    return status_M;
}

QByteArray ServerARS::getStatus_B() const
{
    return status_B;
}

void ServerARS::setTxData(const QByteArray &value)
{
    txData = value;
}

void ServerARS::process(QByteArray inData)
{
    QByteArray idData, Data;
    QByteArray ticksData;

    incomingData =  inData;

    // Parsing
    ticksData = incomingData.mid(0,1);                  // idx - 0
    idData = incomingData.mid(1,1);                     // idx - 1
    Data = incomingData.mid(2,incomingData.size()-2);   // idx - 2 to end
    qDebug() << "ticks : " << ticksData << "id train : " << idData << "data : " << Data;

    if(idData == "M"){
        ticks_M = ticksData;
        rxData_M = Data;
        status_M = "Connect.";

    }
    else if(idData == "B"){
        ticks_B = ticksData;
        rxData_B = Data;
        status_B = "Connect.";
    }

    ars.setTxData(txData);
}

void ServerARS::timeoutCheck()
{
    //Timeout count
    if(mticks_M == ticks_M) {cTicks_M ++;}
    else {mticks_M = ticks_M; cTicks_M=0;}

    if(mticks_B == ticks_B) {cTicks_B ++;}
    else {mticks_B = ticks_B; cTicks_B=0;}

    //Timeout check
    if(cTicks_M >= 10) {cTicks_M=10; rxData_M.clear();status_M = "Timeout.";}
    if(cTicks_B >= 10) {cTicks_B=10; rxData_B.clear();status_B = "Timeout.";}

    //qDebug() << "status_F data : " << status_F << "  -Data : " << rxData_F;
    //qDebug() << "status_R data : " << status_R << "  -Data : " << rxData_R;
}
