/********************************************************************************
** Form generated from reading UI file 'filecntdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECNTDIALOG_H
#define UI_FILECNTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FileCntDialog
{
public:
    QLabel *label;
    QLineEdit *rfileNameLineEdit;
    QLineEdit *rfileSizeLineEdit;
    QLineEdit *recvSizeLineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QProgressBar *recvprogressBar;
    QPushButton *contClosePushButton;
    QLabel *rateLabel;

    void setupUi(QDialog *FileCntDialog)
    {
        if (FileCntDialog->objectName().isEmpty())
            FileCntDialog->setObjectName(QString::fromUtf8("FileCntDialog"));
        FileCntDialog->resize(506, 270);
        label = new QLabel(FileCntDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 15, 131, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        rfileNameLineEdit = new QLineEdit(FileCntDialog);
        rfileNameLineEdit->setObjectName(QString::fromUtf8("rfileNameLineEdit"));
        rfileNameLineEdit->setEnabled(false);
        rfileNameLineEdit->setGeometry(QRect(100, 60, 201, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        rfileNameLineEdit->setFont(font1);
        rfileNameLineEdit->setAlignment(Qt::AlignCenter);
        rfileNameLineEdit->setReadOnly(true);
        rfileSizeLineEdit = new QLineEdit(FileCntDialog);
        rfileSizeLineEdit->setObjectName(QString::fromUtf8("rfileSizeLineEdit"));
        rfileSizeLineEdit->setGeometry(QRect(130, 120, 81, 31));
        recvSizeLineEdit = new QLineEdit(FileCntDialog);
        recvSizeLineEdit->setObjectName(QString::fromUtf8("recvSizeLineEdit"));
        recvSizeLineEdit->setGeometry(QRect(320, 120, 81, 31));
        label_2 = new QLabel(FileCntDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 71, 21));
        label_3 = new QLabel(FileCntDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 130, 41, 21));
        label_4 = new QLabel(FileCntDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 130, 71, 21));
        label_5 = new QLabel(FileCntDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 200, 71, 21));
        recvprogressBar = new QProgressBar(FileCntDialog);
        recvprogressBar->setObjectName(QString::fromUtf8("recvprogressBar"));
        recvprogressBar->setGeometry(QRect(110, 192, 261, 31));
        recvprogressBar->setValue(24);
        contClosePushButton = new QPushButton(FileCntDialog);
        contClosePushButton->setObjectName(QString::fromUtf8("contClosePushButton"));
        contClosePushButton->setGeometry(QRect(370, 60, 91, 31));
        contClosePushButton->setFont(font1);
        rateLabel = new QLabel(FileCntDialog);
        rateLabel->setObjectName(QString::fromUtf8("rateLabel"));
        rateLabel->setGeometry(QRect(390, 200, 68, 21));
        rateLabel->setFont(font1);

        retranslateUi(FileCntDialog);

        QMetaObject::connectSlotsByName(FileCntDialog);
    } // setupUi

    void retranslateUi(QDialog *FileCntDialog)
    {
        FileCntDialog->setWindowTitle(QCoreApplication::translate("FileCntDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FileCntDialog", "\346\226\207 \344\273\266 \346\216\245 \346\224\266", nullptr));
        label_2->setText(QCoreApplication::translate("FileCntDialog", "\346\216\245\346\224\266\346\226\207\344\273\266", nullptr));
        label_3->setText(QCoreApplication::translate("FileCntDialog", "\345\244\247 \345\260\217", nullptr));
        label_4->setText(QCoreApplication::translate("FileCntDialog", "\345\267\262\346\216\245\346\224\266\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("FileCntDialog", "\350\277\233    \345\272\246", nullptr));
        contClosePushButton->setText(QCoreApplication::translate("FileCntDialog", "\345\201\234  \346\255\242", nullptr));
        rateLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FileCntDialog: public Ui_FileCntDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECNTDIALOG_H
