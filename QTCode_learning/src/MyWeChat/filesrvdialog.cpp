#include "filesrvdialog.h"
#include "ui_filesrvdialog.h"

FilesrvDialog::FilesrvDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FilesrvDialog)
{
    ui->setupUi(this);
}

FilesrvDialog::~FilesrvDialog()
{
    delete ui;
}
