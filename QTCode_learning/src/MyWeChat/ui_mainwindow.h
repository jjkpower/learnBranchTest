/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *SearchPushButton;
    QTableWidget *tableWidget;
    QLabel *userLabel;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QPushButton *transPushButton;
    QLabel *label_4;
    QTextEdit *chatTextEdit;
    QPushButton *sendPushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(742, 501);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 60, 501));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        label->setPixmap(QPixmap(QString::fromUtf8("bar.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 0, 251, 65));
        label_2->setFrameShadow(QFrame::Sunken);
        label_2->setPixmap(QPixmap(QString::fromUtf8("search.jpg")));
        SearchPushButton = new QPushButton(centralwidget);
        SearchPushButton->setObjectName(QString::fromUtf8("SearchPushButton"));
        SearchPushButton->setGeometry(QRect(74, 25, 191, 26));
        SearchPushButton->setFlat(true);
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(60, 65, 250, 435));
        userLabel = new QLabel(centralwidget);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        userLabel->setGeometry(QRect(311, 1, 121, 62));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        userLabel->setFont(font);
        userLabel->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 0, 432, 65));
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Sunken);
        label_3->setPixmap(QPixmap(QString::fromUtf8("title.jpg")));
        label_3->setScaledContents(false);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(310, 65, 431, 300));
        transPushButton = new QPushButton(centralwidget);
        transPushButton->setObjectName(QString::fromUtf8("transPushButton"));
        transPushButton->setGeometry(QRect(350, 375, 31, 23));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(transPushButton->sizePolicy().hasHeightForWidth());
        transPushButton->setSizePolicy(sizePolicy1);
        transPushButton->setFlat(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(310, 365, 432, 40));
        label_4->setFrameShape(QFrame::Box);
        label_4->setFrameShadow(QFrame::Sunken);
        label_4->setPixmap(QPixmap(QString::fromUtf8("tool.jpg")));
        chatTextEdit = new QTextEdit(centralwidget);
        chatTextEdit->setObjectName(QString::fromUtf8("chatTextEdit"));
        chatTextEdit->setGeometry(QRect(310, 403, 431, 97));
        sendPushButton = new QPushButton(centralwidget);
        sendPushButton->setObjectName(QString::fromUtf8("sendPushButton"));
        sendPushButton->setGeometry(QRect(665, 476, 75, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        sendPushButton->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        SearchPushButton->setText(QString());
        userLabel->setText(QString());
        label_3->setText(QString());
        transPushButton->setText(QString());
        label_4->setText(QString());
        sendPushButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221 \351\200\201(s)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
