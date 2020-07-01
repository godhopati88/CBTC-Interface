#ifndef COMMVITAL_H
#define COMMVITAL_H

extern "C" {
    #include "DataAplikasi/VITALALL.h"
}
#include "../_General_Path/converter.h"

extern void DataFromNV(QByteArray bytes);
extern QByteArray DataToNV(int size);

extern void DataFromSimulator(QByteArray bytes);
extern QByteArray DataToSimulator(int size);
#endif // COMMVITAL_H
