/**
  * Author  : Ahmad Fuady
  * Email   : ahmad.fuady@len.co.id
  * Licence : PT Len Industri (Persero)
  * File name    : crc16kermit.c
  * Description  : CRC 16 Kermit Calculation
  *
        - Calculate, check and get original data

*/

#include "crc16kermit.h"

QByteArray CRC16Kermit::getCRC16Kermit(const QByteArray &data)
{
    quint16     valuehex = 0;
    quint16     CRC = 0;
    int         size = data.size();
    CRC = 0;
    QByteArray result;

    for(int i=0; i<size; ++i) {
        valuehex = ((static_cast<quint8>(data[i]) ^ CRC) & 0x0fu) * 0x1081;
        CRC >>= 4;
        CRC ^= valuehex;
        valuehex = ((static_cast<quint8>(data[i]) >> 4) ^ (CRC & 0x00ffu)) & 0x0fu;
        CRC >>= 4;
        CRC ^= (valuehex * 0x1081u);
    }
    quint16 ret = ( (CRC & 0x00ffu) << 8) | ((CRC & 0xff00u) >> 8);

    result.clear();

    // return as hex-character (4 bytes data)
    // result.append(QString("%1").arg(ret, 4, 16, QLatin1Char( '0' )));

    // return as hex-raw (2 bytes data)
    QDataStream stream(&result, QIODevice::WriteOnly);
    stream << ret;

    return result;
}

bool CRC16Kermit::checkCRC16Kermit(QByteArray dataPacket)
{
    /* Parsing Data */
    quint16 size = dataPacket.size() - 2;

    QByteArray oriData = dataPacket.left(size);
    QByteArray CRCdata = dataPacket.right(2);

    /* Checksum CRC16Kermit */
    if(getCRC16Kermit(oriData)==CRCdata)return true;
    else return false;
}

QByteArray CRC16Kermit::getOriginalData(QByteArray dataPacket)
{
    /* Parsing Data */
    quint16 size = dataPacket.size() - 2;
    return dataPacket.mid(0,size);
}
