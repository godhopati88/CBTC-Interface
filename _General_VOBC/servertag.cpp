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

#include "servertag.h"

void ServerTag::close()
{
    sTimer.disconnect();
    tag.disconnect();
    tag.close();
}

QByteArray ServerTag::getRxData_F() const
{
    return rxData_F;
}

QByteArray ServerTag::getStatus_F() const
{
    return status_F;
}

QByteArray ServerTag::getRxData_R() const
{
    return rxData_R;
}

QByteArray ServerTag::getStatus_R() const
{
    return status_R;
}

QByteArray ServerTag::getTxData() const
{
    return txData;
}

void ServerTag::setTxData(const QByteArray &value)
{
    txData = value;
}

void ServerTag::resetTagDetect_F()
{
    tagDetect_F = 0;
}

void ServerTag::resetTagDetect_R()
{
    tagDetect_R = 0;
}

quint8 ServerTag::getByteStatus_F() const
{
    return byteStatus_F;
}

quint8 ServerTag::getByteStatus_R() const
{
    return byteStatus_R;
}

void ServerTag::run(QString ipAddress, quint16 ipPort)
{
    // Initialize
    rxData_F.clear(); rxData_R.clear();
    cTicks_F=0; cTicks_R=0;
    ticks_F=0; ticks_R=0;
    mticks_F=0; mticks_R=0;
    flagTOUT_F=0; flagTOUT_R=0;

    rxData_F[0] = 0; rxData_R[0] = 0; // MSB ID
    rxData_F[1] = 0; rxData_R[1] = 0; // LSB ID
    rxData_F[2] = 0; rxData_R[2] = 0; // Tag Detect - Battery Status - Timeout Status

    tagDetect_F=0;
    tagDetect_R=0;

    // Create Comm. as Server
    tag.run(ipAddress,ipPort,"Tag");
    status_F = "Listen.";
    status_R = "Listen.";

    // Create Signal handling if there is new data
    connect(&tag, SIGNAL(newRxData(QByteArray)), this, SLOT(process(QByteArray)));

    // Create Timer to Handling Process
    connect(&sTimer,SIGNAL(timeout()),this,SLOT(timeoutCheck()));
    sTimer.start(50);
}

void ServerTag::timeoutCheck()
{
    //Timeout count
    if(mticks_F == ticks_F) {cTicks_F ++;}
    else {mticks_F = ticks_F; cTicks_F=0;}

    if(mticks_R == ticks_R) {cTicks_R ++;}
    else {mticks_R = ticks_R; cTicks_R=0;}

    //Timeout check
    if(cTicks_F >= 20) {cTicks_F=20; flagTOUT_F=1; status_F="Timeout."; byteStatus_F=0;} else {flagTOUT_F=0;}
    if(cTicks_R >= 20) {cTicks_R=20; flagTOUT_R=1; status_R="Timeout."; byteStatus_R=0;} else {flagTOUT_R=0;}

    // Update flag buffer
    rxData_F[2] = (rxData_F[2] & 0x0B) | (flagTOUT_F << 2); // timeout flag bit 2
    rxData_R[2] = (rxData_R[2] & 0x0B) | (flagTOUT_R << 2); // timeout flag bit 2

    rxData_F[2] = tagDetect_F | (rxData_F[2] & 0x0E) ; // tag bit 0
    rxData_R[2] = tagDetect_R | (rxData_R[2] & 0x0E) ; // tag bit 0

    emit newDataTag();

    //qDebug() << "status_F data : " << status_F << "  -Data : " << rxData_F;
    //qDebug() << "status_R data : " << status_R << "  -Data : " << rxData_R;
}

void ServerTag::process(QByteArray inData)
{
    QByteArray idData, Data;
    QByteArray ticksData;

    incomingData = inData;

    tag.setTxData("ACK");

    // Parsing
    ticksData = incomingData.mid(0,1);           // idx - 0
    idData = incomingData.mid(1,1);              // idx - 1

    if(idData == "F"){
        ticks_F = ticksData;
        if(incomingData.size() > 25)
        {
            Data = incomingData.mid(2,incomingData.size()-2);   // idx - 2 to end
            variable = parsing(Data.data());

            if ((variable.decID > 0) && (variable.decID < 1200)){
                tagDetect_F = 1;
                rxData_F[0] = variable.msbID;
                rxData_F[1] = variable.lsbID;
                rxData_F[2] = ((variable.sBatt & 0x01) << 1) | (rxData_F[2] & 0x0D);  // battery bit 1
            }

        }
        status_F = "Connect.";
        byteStatus_F=1;
    }

    else if(idData == "R"){
        ticks_R = ticksData;
        if(incomingData.size() > 25)
        {
            Data = incomingData.mid(2,incomingData.size()-2);   // idx - 2 to end
            variable = parsing(Data.data());
            if ((variable.decID > 0) && (variable.decID < 1200)){
                tagDetect_R = 1;
                rxData_R[0] = variable.msbID;
                rxData_R[1] = variable.lsbID;                
                rxData_R[2] = ((variable.sBatt & 0x01) << 1) | (rxData_R[2] & 0x0D);  // battery bit 1
            }
        }
        status_R = "Connect.";
        byteStatus_R=1;
    }
}

ServerTag::varTag ServerTag::parsing(QByteArray buffer)
{
    quint16 i=0, j=0, size=0;
    char buff[10];
    unsigned char rawBuff[512], hexBuff[127];
    quint8 rawData, Batt;
    quint64 ID;
    struct varTag retVal;

    // Get data from index 25
    for(i=0;  i<buffer.size()-25; i++){
        rawBuff[i] = buffer[i+25];
    }
    rawBuff[i]='\0';

    size = i; i=0;

    // Get valid data
    for(j=0; j<size; j++)
    {
        rawData = rawBuff[j];

        if(rawData == 37) // "%"
        {
            buff[0] = rawBuff[j+1];
            buff[1] = rawBuff[j+2];
            buff[2] = '\0';
            hexBuff[i]= strtol(buff,NULL,16);
            i = i+1;
            j = j+2;
        }
        else
        {
            hexBuff[i]=rawData;
            i = i+1;
        }
    }

    size = i;

//    // Print the data
//    for(i=0; i<size; i++)
//    {
//        printf("HexBuff[%02d] = 0x%02x\n", i, hexBuff[i]);
//    }

    // Calculate ID Tag
    if ((hexBuff[1] & 0x3F) == 0x3F){ // Use Open32 Format
        ID = (hexBuff[0] << 24) | ((hexBuff[1] & 0xC0) << 16) | (hexBuff[2] << 14) | (hexBuff[3] << 6) | ((hexBuff[4] & 0xfc) >> 2);
    } else { // Use Standart Format
        ID = ((hexBuff[1] & 0x3f) << 22) | (hexBuff[2] << 14) | (hexBuff[3] << 6) | ((hexBuff[4] & 0xfc) >> 2);
    }

    // Calculate Battery status
    Batt = ((hexBuff[8] << 6) | (hexBuff[9] >> 2)) & 0xfe;

    retVal.decID = ID;
    retVal.msbID = ((ID & 0x0000ff00) >> 8);
    retVal.lsbID = (ID & 0x000000ff);
    retVal.sBatt = Batt;

//    printf("  ID Tag (v.16bit) = 0x%02x%02x | (v.64bit) = 0x%08x, battery = %d \n\n", retVal.msbID, retVal.lsbID, ID, retVal.sBatt);

    return retVal;
}


