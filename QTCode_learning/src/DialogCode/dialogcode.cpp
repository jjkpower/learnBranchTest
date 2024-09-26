#include "dialogcode.h"
#include "ui_dialogcode.h"

DialogCode::DialogCode(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogCode)
{
    ui->setupUi(this);
}

DialogCode::~DialogCode()
{
    delete ui;
}

