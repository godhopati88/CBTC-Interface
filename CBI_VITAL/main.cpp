#include <QCoreApplication>
#include "dataexchange.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    DataExchange cbi_vital;
    cbi_vital.run();

    return a.exec();
}

