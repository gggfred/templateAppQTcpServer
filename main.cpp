#include <QCoreApplication>

#include "gtcpserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    GTcpServer myServer;

    myServer.performListening();

    return a.exec();
}
