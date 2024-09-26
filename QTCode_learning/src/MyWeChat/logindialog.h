#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "mainwindow.h"
#include <QFile>
#include "qdom.h"



namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();
private slots:
    void on_LoginPushButton_clicked();
    void showWeChatWindow();

private:
    Ui::LoginDialog *ui;
    MainWindow *wechatWindow;//指向聊天窗口
    QDomDocument *mydoc;//构建全局变量获取xml中的dom对象
};

#endif // LOGINDIALOG_H
