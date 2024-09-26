#ifndef TIEMCLIENT_H
#define TIEMCLIENT_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDateTimeEdit>
#include <QTcpSocket>
#include <QAbstractSocket>
class TiemClient : public QDialog
{
    Q_OBJECT

public:
    TiemClient(QWidget *parent = nullptr);
    ~TiemClient();
public slots:
    void enableGetBtn();
    void getTime();
    void readTime();
    void showError(QAbstractSocket::SocketError socketError);
private:
    QLabel *serverNameLabel;
    QLineEdit *serverNameLineEdit;
    QLabel *portLabel;
    QLineEdit *portLineEdit;
    QDateTimeEdit *dateTimeEdit;
    QLabel *stateLabel;
    QPushButton *getBtn;
    QPushButton *quitBtn;
    uint time2u;
    QTcpSocket *tcpSocket;
};
#endif // TIEMCLIENT_H
