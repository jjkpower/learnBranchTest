#include "dialogself.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DialogSelf w;
    w.show();
    return a.exec();
}
