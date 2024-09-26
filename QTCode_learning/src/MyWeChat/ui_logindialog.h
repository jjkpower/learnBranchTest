/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label;
    QLineEdit *usrLineEdit;
    QLineEdit *pwdLineEdit;
    QPushButton *LoginPushButton;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(280, 400);
        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 280, 400));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Sunken);
        label->setPixmap(QPixmap(QString::fromUtf8("login.jpg")));
        usrLineEdit = new QLineEdit(LoginDialog);
        usrLineEdit->setObjectName(QString::fromUtf8("usrLineEdit"));
        usrLineEdit->setGeometry(QRect(85, 215, 113, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        usrLineEdit->setFont(font);
        usrLineEdit->setAlignment(Qt::AlignCenter);
        pwdLineEdit = new QLineEdit(LoginDialog);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(85, 235, 113, 20));
        pwdLineEdit->setAlignment(Qt::AlignCenter);
        LoginPushButton = new QPushButton(LoginDialog);
        LoginPushButton->setObjectName(QString::fromUtf8("LoginPushButton"));
        LoginPushButton->setGeometry(QRect(33, 258, 214, 43));
        LoginPushButton->setFont(font);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        label->setText(QString());
        LoginPushButton->setText(QCoreApplication::translate("LoginDialog", "\347\231\273 \345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
