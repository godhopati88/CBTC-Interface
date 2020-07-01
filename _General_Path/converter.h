#ifndef CONVERTER_H
#define CONVERTER_H

#include <QDebug>
#include <QByteArray>
#include <QBitArray>

extern QByteArray bit_byte_Q(QBitArray bits);
extern QBitArray byte_bit_Q(QByteArray bytes);

#endif // CONVERTER_H
