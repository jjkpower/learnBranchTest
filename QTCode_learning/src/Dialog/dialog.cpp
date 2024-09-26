#include "dialog.h"
#include "ui_dialog.h"
const static double PI=3.1416;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    bool ok;
    QString tempstr;
    QString valuestr=ui->radiusLineEdit->text();
    int valueInt=valuestr.toInt(&ok);
    double area=valueInt*valueInt*PI;
    ui->areaLabel_3->setText(tempstr.setNum(area));
}
