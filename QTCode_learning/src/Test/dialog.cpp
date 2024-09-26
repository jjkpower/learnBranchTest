#include "dialog.h"
#include "ui_dialog.h"
#include <QRegExpValidator>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
    ui->lineEdit->setValidator(new QRegExpValidator(regExp,this));
    connect(ui->OkBtn,SIGNAL(clicked()),this,SLOT(accept()));
    connect(ui->cancelBtn,SIGNAL(clicked()),this,SLOT(reject()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_lineEdit_textChanged()
{
    ui->OkBtn->setEnabled(ui->lineEdit->hasAcceptableInput());
}
