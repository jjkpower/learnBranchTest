#ifndef UDPSERVER_H
#define UDPSERVER_H

#include <QDialog>

class UdpServer : public QDialog
{
    Q_OBJECT

public:
    UdpServer(QWidget *parent = nullptr);
    ~UdpServer();
};
#endif // UDPSERVER_H
