#include "converter.h"

QByteArray bit_byte_Q(QBitArray bits)//, QByteArray bytes)
{
    QByteArray bytes;
    int sizeBytes, b, sizeBits;

    sizeBits=bits.count();
    sizeBytes=sizeBits/8;
    if((sizeBits%8) != 0) sizeBytes++;

    bytes.resize(sizeBytes);
    bytes.fill(0);

    // Convert from QBitArray to QByteArray
    for(b=0; b<bits.count(); ++b)
        //bytes[b/8] = (bytes.at(b/8) | ((bits[b]?1:0)<<(7-(b%8))));
        bytes[b/8] = (bytes.at(b/8) | ((bits[b]?1:0)<<((b%8))));

    //qDebug() << bytes.toHex();
    return bytes;
}

QBitArray byte_bit_Q(QByteArray bytes)//, QBitArray bits)
{
    // Create a bit array of the appropriate size
    QBitArray bits(bytes.count()*8);

    // Convert from QByteArray to QBitArray
    for(int i=0; i<bytes.count(); ++i) {
        for(int b=0; b<8;b++) {
            //bits.setBit( i*8+b, bytes.at(i)&(1<<(7-b)) );
            bits.setBit( i*8+b, bytes.at(i)&(1<<(b)) );
        }
    }

    return bits;
}
