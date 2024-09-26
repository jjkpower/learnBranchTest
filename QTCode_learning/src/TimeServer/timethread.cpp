#include "timethread.h"
#include <QDateTime>
#include <QDataStream>
#include <QByteArray>

TimeThread::TimeThread(qintptr socketDescriptor,QObject *parent):QThread(parent),socketDescriptor(socketDescriptor)
{

}

void TimeThread::run()
{
    QTcpSocket tcpsocket;
    if(!tcpsocket.setSocketDescriptor(socketDescriptor))
    {
        emit error(tcpsocket.error());
        return;
    }
    QByteArray block;
    QDataStream out(&block,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_11);
    uint time2u =QDateTime::currentDateTime().toTime_t();
    out<<time2u;
    tcpsocket.write(block);
    tcpsocket.disconnectFromHost();
    tcpsocket.waitForConnected();

}
