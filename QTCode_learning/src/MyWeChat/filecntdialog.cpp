#include "filecntdialog.h"
#include "ui_filecntdialog.h"

FileCntDialog::FileCntDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FileCntDialog)
{
    ui->setupUi(this);
}

FileCntDialog::~FileCntDialog()
{
    delete ui;
}
