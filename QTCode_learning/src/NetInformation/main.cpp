#include "netinformation.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NetInformation w;
    w.show();
    return a.exec();
}
