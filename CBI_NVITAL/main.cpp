#include <QCoreApplication>
#include "dataexchange.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    DataExchange cbi_nv;

    cbi_nv.run();


//    NONVITALALL_initialize();

//    NONVITALALL_U.DEP12TPFROM = true + '6';

//    NONVITALALL_step();

//    boolean_T ayam = NONVITALALL_Y.BUZZERDO;

    return a.exec();
}
