

#include <QCoreApplication>
#include <dataexchange.h>
//#include "myudp.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    MyUdp cp1;
//    cp1.txData = "hello CP";
//    cp1.runClient("10.254.1.1", 2000, "127.0.0.1");

    DataExchange data;
    if(data.run()==0)
        return a.exec();

}
