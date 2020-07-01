#include "commVITAL.h"


void DataFromNV(QByteArray bytes)
{

    if((bytes.count()*8) > 0)
    {
        unsigned int j;
        QBitArray VTL_in(bytes.count()*8);
        VTL_in=byte_bit_Q(bytes);

        for (j=0; j<sizeof(VITALALL_U.DATAFROMNV); j++){
            VITALALL_U.DATAFROMNV[j] =VTL_in[j];
        }
        //**qDebug() << "RR " << VITALALL_U.DATAFROMNV[1];
    }
}

QByteArray DataToNV(int size)
{
    int j;
    QBitArray VTL_out(size); // by generate

    for (j=0; j<size; j++){
        VTL_out[j] = VITALALL_Y.DATATONV[j];
    }

//    VTL_out[0] = true;
//    VTL_out[size-1] = true;
    //qDebug() << "---> VDR " << VTL_out[0];
    //qDebug() << "---> 10A " << VTL_out[3];
    //qDebug() << "---> 20A " << VTL_out[15];
    return bit_byte_Q(VTL_out);
}

void DataFromSimulator(QByteArray bytes)
{
    // VSFROMZC
    // INTIB
    // INDEP
    // INT3

    if((bytes.count()*8) > 0)
    {
        unsigned int j, x, iteration;
        QBitArray VTL_in(bytes.count()*8);
        VTL_in=byte_bit_Q(bytes);

        j=0;

        x=0;
        iteration = sizeof(VITALALL_U.DATAFROMZC);
        for (; j<iteration; j++){
            VITALALL_U.DATAFROMZC[x]=VTL_in[j];
            x++;
        }
//        qDebug() << "20A = " << VITALALL_U.DATAFROMZC[0];
//        qDebug() << "20B = " << VITALALL_U.DATAFROMZC[1];
//        qDebug() << "14A = " << VITALALL_U.DATAFROMZC[25];
//        qDebug() << "14B = " << VITALALL_U.DATAFROMZC[26];

        x=0;
        iteration = j + sizeof(VITALALL_U.INTIB);
        for (; j<iteration; j++){
            VITALALL_U.INTIB[x]=VTL_in[j];\
            x++;
        }

        x=0;
        iteration = j + sizeof(VITALALL_U.INDEP);
        for (; j<iteration; j++){
            VITALALL_U.INDEP[x]=VTL_in[j];\
            x++;
        }

        x=0;
        iteration = j + sizeof(VITALALL_U.INT3);
        for (; j<iteration; j++){
            VITALALL_U.INT3[x]=VTL_in[j];

            //    VTL_out[7] = true;
            //    VTL_out[18] = true;
            //    VTL_out[36] = true;
            //    VTL_out[45] = true;
            //    VTL_out[size-1] = true;]=VTL_in[j];

            x++;
        }

        //qDebug() <<VITALALL_U.DATAFROMZC[0] << VITALALL_U.DATAFROMZC[42] ;
    }
}

QByteArray DataToSimulator(int size)
{
    int j;
    QBitArray VTL_out(size); // by generate

    for (j=0; j<size; j++){
        VTL_out[j] = VITALALL_Y.SIMULATION[j];
    }


//    VTL_out[1] = true;
//    VTL_out[7] = true;
//    VTL_out[18] = true;
//    VTL_out[36] = true;
//    VTL_out[45] = true;
//    VTL_out[size-1] = true;

    //qDebug() <<VTL_out[0] << VTL_out[size-1];

    return bit_byte_Q(VTL_out);
}
