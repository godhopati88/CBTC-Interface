/**
  * Author  : Ahmad Fuady
  * Email   : ahmad.fuady@len.co.id
  * Licence : PT Len Industri (Persero)
  * File name    : crc16kermit.h
  *
*/

#ifndef CRC16KERMIT_H
#define CRC16KERMIT_H

#include <QObject>
#include <QDataStream>

class CRC16Kermit : public QObject
{
    Q_OBJECT
public:
    QByteArray getCRC16Kermit(const QByteArray &data);
    bool checkCRC16Kermit(QByteArray dataPacket);
    QByteArray getOriginalData(QByteArray dataPacket);
signals:

public slots:
};

#endif // CRC16KERMIT_H
