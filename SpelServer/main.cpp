#include <QtCore/QCoreApplication>

#include "../SpelCore/server.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug("running");

    Server server(&a);

    return a.exec();
}
