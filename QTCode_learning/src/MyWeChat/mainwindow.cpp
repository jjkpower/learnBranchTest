#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initMainWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_sendPushButton_clicked()
{
    sendChatMsg(ChatMsg);
}

void MainWindow::on_transPushButton_clicked()
{

}

void MainWindow::on_SearchPushButton_clicked()
{
    myname=this->windowTitle();
    ui->userLabel->setText(myname);
    sendChatMsg(OnLine);
}

void MainWindow::initMainWindow()
{
    myUdpSocket =new QUdpSocket(this);
    myUdpPort=23232;
    myUdpSocket->bind(myUdpPort,QUdpSocket::ShareAddress|QUdpSocket::ReuseAddressHint);
    connect(myUdpSocket,SIGNAL(readyRead()),this,SLOT(recvAndProcessChatMsg()));

   // myfsrv =new FilesrvDialog(this);
    //connect(myfsrv,SIGNAL(sendFileName(QString)),this,SLOT(getSfileName(QString)));

}

void MainWindow::sendChatMsg(ChatMsgType msgType, QString rmtName)
{
    QByteArray qba;
    QDataStream write(&qba,QIODevice::WriteOnly);
    QString locHostIp=getLocalHostIp();
    QString locChatMsg=getLocalChatMsg();
    write<<msgType<<myname;
    switch (msgType) {
    case ChatMsg:
        write<<locHostIp<<locChatMsg;
        break;
    case OnLine:
        write<<locHostIp;
        break;
    case OffLine:
        break;
    case SfileName:
        write<<locHostIp<<rmtName<<myFileName;
        break;
    case ReFile:
        write<<locHostIp<<rmtName;
        break;

    }
    myUdpSocket->writeDatagram(qba,qba.length(),QHostAddress::Broadcast,myUdpPort);
}

void MainWindow::recvAndProcessChatMsg()
{
    while (myUdpSocket->hasPendingDatagrams()) {
        QByteArray qba;
        qba.resize(myUdpSocket->pendingDatagramSize());
        myUdpSocket->readDatagram(qba.data(),qba.size());
        QDataStream read(&qba,QIODevice::ReadOnly);
        int msgType;
        read>>msgType;
        QString name,hostip,chatmsg,rname,fname;
        QString curtime=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
        switch (msgType) {
        case ChatMsg:{
            read>>name>>hostip>>chatmsg;
            ui->textBrowser->setTextColor(Qt::darkGreen);
            ui->textBrowser->setCurrentFont(QFont("Times New Roman,14"));
            ui->textBrowser->append("[" + name + "]"+ curtime);
            ui->textBrowser->append(chatmsg);
            break;
        }
        case OnLine:
            read>>name>>hostip;
            onLine(name,curtime);
        case OffLine:
            read>>name;
            offLine(name,curtime);
            break;
        case SfileName:
            read>>name>>hostip>>rname>>fname;
            recvFileName(name,hostip,rname,fname);
            break;
        case ReFile:
            read>>name>>hostip>>rname;
           // if(myname==rname) myfsrv->cntRefused();
            break;
        }

    }
}

void MainWindow::getSfileName(QString)
{


}

void MainWindow::closeEvent(QCloseEvent *event)
{
    sendChatMsg(OffLine);
}

void MainWindow::onLine(QString name, QString time)
{
    bool notExist= ui->tableWidget->findItems(name,Qt::MatchExactly).isEmpty();
    if(notExist)
    {
        QTableWidgetItem *newuser= new QTableWidgetItem(name);
        ui->tableWidget->insertRow(0);
        ui->tableWidget->setItem(0,0,newuser);
        ui->textBrowser->setTextColor(Qt::gray);
        ui->textBrowser->setCurrentFont(QFont("Times New Roman",12));
        ui->textBrowser->append(tr("%1 %2 上线").arg(time).arg(name));
        sendChatMsg(OnLine);
    }
}

void MainWindow::offLine(QString name, QString time)
{
    bool row= ui->tableWidget->findItems(name,Qt::MatchExactly).first()->row();

    ui->tableWidget->removeRow(row);

    ui->textBrowser->setTextColor(Qt::gray);
    ui->textBrowser->setCurrentFont(QFont("Times New Roman",12));
    ui->textBrowser->append(tr("%1 %2 离线").arg(time).arg(name));

}

QString MainWindow::getLocalHostIp()
{
    QList<QHostAddress> addrlist=QNetworkInterface::allAddresses();
    foreach (QHostAddress addr, addrlist) {
        if(addr.protocol()==QAbstractSocket::IPv4Protocol)
            return  addr.toString();
    }
    return 0;
}

QString MainWindow::getLocalChatMsg()
{
    QString chatmsg=ui->chatTextEdit->toHtml();
    ui->chatTextEdit->clear();
    ui->chatTextEdit->setFocus();
    return  chatmsg;
}

void MainWindow::recvFileName(QString name, QString hostip, QString rmtname, QString filename)
{

}

