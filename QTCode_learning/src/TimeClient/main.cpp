#include "tiemclient.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TiemClient w;
    w.show();
    return a.exec();
}
