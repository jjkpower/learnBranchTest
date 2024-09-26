#ifndef NETINFORMATION_H
#define NETINFORMATION_H

#include <QWidget>

#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QMessageBox>

#include <QHostInfo>
#include <QNetworkInterface>

class NetInformation : public QWidget
{
    Q_OBJECT

public:
    NetInformation(QWidget *parent = nullptr);
    ~NetInformation();
private:
    QLabel *hostLabel;
    QLineEdit *LineEditLocalHostName;
    QLabel *ipLabel;
    QLineEdit *LineEditAddress;
    QPushButton *detailBtn;
    QGridLayout *mainLayout;
public:
    void getHostInformation();
public slots:
    void slotDetail();

};
#endif // NETINFORMATION_H
