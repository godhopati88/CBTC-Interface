#ifndef COMMNONVITAL_H
#define COMMNONVITAL_H

extern "C" {
    #include "DataAplikasi/NONVITALALL.h"
}
#include "../_General_Path/converter.h"
extern void DataFromARS(QByteArray bytes);
extern QByteArray DataToARS(int size);
extern void DataFromVital(QByteArray bytes);
extern QByteArray DataToVital(int size);
extern void DataFromVDU(QByteArray bytes);
extern QByteArray DataToVDU(int size);
extern void DataFromDEPOT(QByteArray bytes);
extern QByteArray DataToDEPOT(int size);


extern QByteArray DataToTT_Mainline(int size);
extern QByteArray DataToTT_Depo(int size);

#endif // COMMNONVITAL_H

