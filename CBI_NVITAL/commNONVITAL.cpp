#include "commNONVITAL.h"


void DataFromARS(QByteArray bytes)
{
    if((bytes.count()*8)>0)
    {
        unsigned int j;
        QBitArray ARS_in(bytes.count()*8);
        ARS_in=byte_bit_Q(bytes);

        for (j=0; j<sizeof(NONVITALALL_U.DATAFROMARS); j++){
            NONVITALALL_U.DATAFROMARS[j] = ARS_in[j];
        }
        //NONVITALALL_U.DATAFROMATS[0]=true;
        qDebug() << "Data hapus rute 24-22A : " << NONVITALALL_U.DATAFROMARS[31];
    }
}


QByteArray DataToARS(int size)
{
    int j;
    QBitArray ARS_out(size); // by generate

    for (j=0; j<size; j++){
        ARS_out[j] = NONVITALALL_Y.DATATOARS[j];
    }


    return bit_byte_Q(ARS_out);
}


void DataFromVital(QByteArray bytes)
{
    if((bytes.count()*8) > 0)
    {
        unsigned int j;
        QBitArray NVTL_in(bytes.count()*8);
        NVTL_in=byte_bit_Q(bytes);

        for (j=0; j<sizeof(NONVITALALL_U.DATAFROMV); j++){
            NONVITALALL_U.DATAFROMV[j] = NVTL_in[j];
        }
            //qDebug()  << NONVITALALL_U.DATAFROMV[307] << NONVITALALL_U.DATAFROMV[308] << NONVITALALL_U.DATAFROMV[309] << NONVITALALL_U.DATAFROMV[310];
    }
    //NONVITALALL_U.DATAFROMV[307]=false;

}

QByteArray DataToVital(int size)
{
    int j;
    QBitArray NVTL_out(size); // by generate

    for (j=0; j<size; j++){
        NVTL_out[j] = NONVITALALL_Y.DATATOV[j];
        //NVTL_out[j] = NONVITALALL_Y.DATATONV[j];
    }

    //NVTL_out[1] = true;
//    NVTL_out[size-1] = true;
    qDebug() << "RR " << NVTL_out[1];
    return bit_byte_Q(NVTL_out);
}

void DataFromVDU(QByteArray bytes)
{
    // MAINLINEDI

    if((bytes.count()*8) > 0)
    {
        unsigned int j, x, iteration;
        QBitArray NVTL_in(bytes.count()*8);
        NVTL_in=byte_bit_Q(bytes);

        j=0;

        x=0;
        iteration = sizeof(NONVITALALL_U.MAINLINEDI);
        for (; j<iteration; j++){
            NONVITALALL_U.MAINLINEDI[x]=NVTL_in[j];
            x++;
        }


        //qDebug() <<NONVITALALL_U.MAINLINEDI[0] << NONVITALALL_U.MAINLINEDI[x-1] ;
    }
}

QByteArray DataToVDU(int size)
{
    int j;
    QBitArray NVTL_out(size); // by generate

    for (j=0; j<size; j++){
        NVTL_out[j] = NONVITALALL_Y.MAINLINEDO[j];
    }
//    NVTL_out[0] = true;
//    NVTL_out[306] = true;

//    qDebug() <<NVTL_out[0] << NVTL_out[306] ;
    return bit_byte_Q(NVTL_out);
}

void DataFromDEPOT(QByteArray bytes)
{
    if((bytes.count()*8) > 0)
    {
        unsigned int j, x, iteration;
        QBitArray NVTL_in(bytes.count()*8);
        NVTL_in=byte_bit_Q(bytes);

        j=0;

        x=0;
        iteration = sizeof(NONVITALALL_U.DEPOTDI);
        for (; j<iteration; j++){
            NONVITALALL_U.DEPOTDI[x]=NVTL_in[j];
            x++;
        }
        //qDebug() <<NONVITALALL_U.MAINLINEDI[0] << NONVITALALL_U.MAINLINEDI[x-1] ;
    }
}

QByteArray DataToDEPOT(int size)
{
    int j;
    QBitArray NVTL_out(size); // by generate

    for (j=0; j<size; j++){
        NVTL_out[j] = NONVITALALL_Y.DEPOTDO[j];
    }
//    NVTL_out[0] = true;
//    NVTL_out[306] = true;

//    qDebug() <<NVTL_out[0] << NVTL_out[306] ;
    return bit_byte_Q(NVTL_out);
}

QByteArray DataToTT_Mainline(int size)
{
    int j;
    QBitArray NVTL_out(size); // by generate

    for (j=0; j<size; j++){
        NVTL_out[j] = NONVITALALL_Y.DATATOLOGM[j];
    }
    return bit_byte_Q(NVTL_out);
}

QByteArray DataToTT_Depo(int size)
{
    int j;
    QBitArray NVTL_out(size); // by generate

    for (j=0; j<size; j++){
        NVTL_out[j] = NONVITALALL_Y.DATATOLOGD[j];
    }
    return bit_byte_Q(NVTL_out);
}
