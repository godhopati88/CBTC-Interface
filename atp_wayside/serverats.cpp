/**
  * Author  : Ahmad Fuady
  * Email   : ahmad.fuady@len.co.id
  * Licence : PT Len Industri (Persero)
  * File name    : ServerTag.c
  * Description  : Tag Master Communication Handlers
  *
        - The Program call class LenTCPServer to handle 2 clients
        - The Program call Timer every 50ms to handle process
        - The received data only with format "ticks [0/1] + id [F/R] + data"
        - If the received data ticks not change for 2000ms, then the connection is timeout

*/

#include "serverats.h"

void ServerATS::run(QString ipAddress, quint16 ipPort)
{
    // Initialize
    rxData_M.clear(); rxData_B.clear();
    cTicks_M=0; cTicks_B=0;
    ticks_M=0; ticks_B=0;
    mticks_M=0; mticks_B=0;
    flagTOUT_M=0; flagTOUT_B=0;

    rxData_M[0] = 0; rxData_B[0] = 0;
    rxData_M[1] = 0; rxData_B[1] = 0;
    rxData_M[2] = 0; rxData_B[2] = 0;
    rxData_M[3] = 0; rxData_B[3] = 0;

    // Create Comm. as Server
    ats.run(ipAddress,ipPort,"ats");
    status_M = "Listen.";
    status_B = "Listen.";

    // Create Signal handling if there is new data
    connect(&ats, SIGNAL(newRxData(QByteArray)), this, SLOT(process(QByteArray)));

    // Create Timer to Handling Process
    QTimer *sTimer = new QTimer(this);
    connect(sTimer,SIGNAL(timeout()),this,SLOT(timeoutCheck()));
    sTimer->start(50);
}

void ServerATS::close()
{
    ats.close();
}

QByteArray ServerATS::getRxData_M() const
{
    return rxData_M;
}

QByteArray ServerATS::getStatus_M() const
{
    return status_M;
}

QByteArray ServerATS::getRxData_B() const
{
    return rxData_B;
}

QByteArray ServerATS::getStatus_B() const
{
    return status_B;
}

QByteArray ServerATS::getTxData() const
{
    return txData;
}

void ServerATS::setTxData(const QByteArray &value)
{
    txData = value;
}

void ServerATS::reset_rxData()
{
    qDebug()<<"resetting data";
    reset_rxData_M();
    reset_rxData_B();
}

void ServerATS::reset_rxData_M()
{
    rxData_M[0] = 0;
    rxData_M[1] = 0;
    rxData_M[2] = 0;
}

void ServerATS::reset_rxData_B()
{
    rxData_B[0] = 0;
    rxData_B[1] = 0;
    rxData_B[2] = 0;
}

void ServerATS::timeoutCheck()
{
    //Timeout count
    if(mticks_M == ticks_M) {cTicks_M ++;}
    else {mticks_M = ticks_M; cTicks_M=0;}

    if(mticks_B == ticks_B) {cTicks_B ++;}
    else {mticks_B = ticks_B; cTicks_B=0;}

    //Timeout check
    if(cTicks_M >= 20) {cTicks_M=20; flagTOUT_M=1; status_M="Timeout."; reset_rxData_M();} else {flagTOUT_M=0;}
    if(cTicks_B >= 20) {cTicks_B=20; flagTOUT_B=1; status_B="Timeout."; reset_rxData_B();} else {flagTOUT_B=0;}

    // Update flag buffer
    rxData_M[3] = flagTOUT_M; rxData_B[3] = flagTOUT_B;

    emit newDataCBI();

//    qDebug() << "status_F data : " << status_F << "  -Data : " << rxData_F;
//    qDebug() << "status_R data : " << status_R << "  -Data : " << rxData_R;
}

void ServerATS::process(QByteArray inData)
{
    QByteArray idData, Data;
    QByteArray ticksData;

    incomingData = inData;

    // Parsing
    ticksData = incomingData.mid(0,1);           // idx - 0
    idData = incomingData.mid(1,1);              // idx - 1

    if(idData == "M"){
        ticks_M = ticksData;
        Data = incomingData.mid(2,incomingData.size()-2);

        status_M = "Connect.";
    }

    else if(idData == "B"){
        ticks_B = ticksData;
        Data = incomingData.mid(2,incomingData.size()-2);

        status_B = "Connect.";
    }
}


