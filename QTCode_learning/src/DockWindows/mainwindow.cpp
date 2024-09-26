#include "mainwindow.h"
#include <QTextEdit>
#include <QDockWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("DockWindows"));

    QTextEdit *te=new QTextEdit(this);
    te->setText(tr("Main Window"));
    te->setAlignment(Qt::AlignHCenter);
    setCentralWidget(te);

    //停靠窗口1
    QDockWidget *dock=new QDockWidget(tr("Dock Window1"),this);
    //可移动
    dock->setFeatures(QDockWidget::DockWidgetMovable);
    dock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);

    QTextEdit *te1=new QTextEdit();
    te1->setText(tr("Window1,The dock widget can be moved between docks by the user"));
    dock->setWidget(te1);
    addDockWidget(Qt::RightDockWidgetArea,dock);


    //停靠窗口2
    dock=new QDockWidget(tr("Dock Window2"),this);
    //可关闭，可浮动
    dock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);

    QTextEdit *te2=new QTextEdit();
    te2->setText(tr("Window2,The dock widget can be detached from the main window,""and floated as an independent window,and can be closed"));
    dock->setWidget(te2);
    addDockWidget(Qt::RightDockWidgetArea,dock);


    //停靠窗口2
    dock=new QDockWidget(tr("Dock Window3"),this);
    //全部特性
    dock->setFeatures(QDockWidget::AllDockWidgetFeatures);

    QTextEdit *te3=new QTextEdit();
    te3->setText(tr("Window3,The dock widget can be closed,moved,and floated"));
    dock->setWidget(te3);
    addDockWidget(Qt::RightDockWidgetArea,dock);



}

MainWindow::~MainWindow()
{
}

