#include "widget.h"

#include <QApplication>
#include <form2.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    Form2 f2;
    f2.show();
    return a.exec();
}
