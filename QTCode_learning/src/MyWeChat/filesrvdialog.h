#ifndef FILESRVDIALOG_H
#define FILESRVDIALOG_H

#include <QDialog>

namespace Ui {
class FilesrvDialog;
}

class FilesrvDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FilesrvDialog(QWidget *parent = nullptr);
    ~FilesrvDialog();

private:
    Ui::FilesrvDialog *ui;
};

#endif // FILESRVDIALOG_H
