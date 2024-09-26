/********************************************************************************
** Form generated from reading UI file 'filesrvdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESRVDIALOG_H
#define UI_FILESRVDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FilesrvDialog
{
public:
    QLabel *label;
    QLineEdit *sfileNameLineEdit;
    QPushButton *openFilePushButton;
    QPushButton *sendFilePushButton;
    QLineEdit *sfileSizeLineEdit;
    QLineEdit *sendSizeLineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QProgressBar *sendprogressBar;
    QPushButton *srvClosePushButton;

    void setupUi(QDialog *FilesrvDialog)
    {
        if (FilesrvDialog->objectName().isEmpty())
            FilesrvDialog->setObjectName(QString::fromUtf8("FilesrvDialog"));
        FilesrvDialog->resize(506, 270);
        label = new QLabel(FilesrvDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 15, 131, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        sfileNameLineEdit = new QLineEdit(FilesrvDialog);
        sfileNameLineEdit->setObjectName(QString::fromUtf8("sfileNameLineEdit"));
        sfileNameLineEdit->setEnabled(false);
        sfileNameLineEdit->setGeometry(QRect(100, 60, 201, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        sfileNameLineEdit->setFont(font1);
        sfileNameLineEdit->setAlignment(Qt::AlignCenter);
        sfileNameLineEdit->setReadOnly(true);
        openFilePushButton = new QPushButton(FilesrvDialog);
        openFilePushButton->setObjectName(QString::fromUtf8("openFilePushButton"));
        openFilePushButton->setGeometry(QRect(300, 60, 31, 31));
        openFilePushButton->setFont(font1);
        sendFilePushButton = new QPushButton(FilesrvDialog);
        sendFilePushButton->setObjectName(QString::fromUtf8("sendFilePushButton"));
        sendFilePushButton->setGeometry(QRect(360, 60, 91, 31));
        sendFilePushButton->setFont(font1);
        sfileSizeLineEdit = new QLineEdit(FilesrvDialog);
        sfileSizeLineEdit->setObjectName(QString::fromUtf8("sfileSizeLineEdit"));
        sfileSizeLineEdit->setGeometry(QRect(130, 120, 81, 31));
        sendSizeLineEdit = new QLineEdit(FilesrvDialog);
        sendSizeLineEdit->setObjectName(QString::fromUtf8("sendSizeLineEdit"));
        sendSizeLineEdit->setGeometry(QRect(320, 120, 81, 31));
        label_2 = new QLabel(FilesrvDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 71, 21));
        label_3 = new QLabel(FilesrvDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 130, 41, 21));
        label_4 = new QLabel(FilesrvDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 130, 71, 21));
        label_5 = new QLabel(FilesrvDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 200, 71, 21));
        sendprogressBar = new QProgressBar(FilesrvDialog);
        sendprogressBar->setObjectName(QString::fromUtf8("sendprogressBar"));
        sendprogressBar->setGeometry(QRect(110, 192, 261, 31));
        sendprogressBar->setValue(24);
        srvClosePushButton = new QPushButton(FilesrvDialog);
        srvClosePushButton->setObjectName(QString::fromUtf8("srvClosePushButton"));
        srvClosePushButton->setGeometry(QRect(380, 190, 91, 31));
        srvClosePushButton->setFont(font1);

        retranslateUi(FilesrvDialog);

        QMetaObject::connectSlotsByName(FilesrvDialog);
    } // setupUi

    void retranslateUi(QDialog *FilesrvDialog)
    {
        FilesrvDialog->setWindowTitle(QCoreApplication::translate("FilesrvDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FilesrvDialog", "\346\226\207 \344\273\266 \345\217\221 \351\200\201", nullptr));
        openFilePushButton->setText(QCoreApplication::translate("FilesrvDialog", "...", nullptr));
        sendFilePushButton->setText(QCoreApplication::translate("FilesrvDialog", "\345\217\221 \351\200\201", nullptr));
        label_2->setText(QCoreApplication::translate("FilesrvDialog", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        label_3->setText(QCoreApplication::translate("FilesrvDialog", "\345\244\247 \345\260\217", nullptr));
        label_4->setText(QCoreApplication::translate("FilesrvDialog", "\345\267\262\345\217\221\351\200\201\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("FilesrvDialog", "\350\277\233    \345\272\246", nullptr));
        srvClosePushButton->setText(QCoreApplication::translate("FilesrvDialog", "\345\201\234  \346\255\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilesrvDialog: public Ui_FilesrvDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESRVDIALOG_H
