#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QUdpSocket>
#include <QNetworkInterface>
#include <QDateTime>
#include <QFile>
#include <QFileDialog>
#include "qdom.h"
#include "filesrvdialog.h"


class FilesrvDialog;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum ChatMsgType{ChatMsg,OnLine,OffLine,SfileName,ReFile};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void initMainWindow();

    void onLine(QString name,QString time);

    void offLine(QString name,QString time);

    void sendChatMsg(ChatMsgType msgType,QString rmtName="");

    QString getLocalHostIp();

    QString getLocalChatMsg();

    void recvFileName(QString name,QString hostip,QString rmtname,QString filename);

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void on_sendPushButton_clicked();

    void on_transPushButton_clicked();

    void on_SearchPushButton_clicked();

    void recvAndProcessChatMsg();

    void getSfileName(QString);


private:
    Ui::MainWindow *ui;
    QString myname="";
    QUdpSocket *myUdpSocket;
    qint16 myUdpPort;
    QDomComment myDoc;
    QString myFileName;
    FilesrvDialog *myfsrv;
};
#endif // MAINWINDOW_H
