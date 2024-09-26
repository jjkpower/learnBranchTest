#include "dialogcode.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DialogCode w;
    w.show();
    return a.exec();
}
