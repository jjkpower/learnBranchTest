#ifndef FILECNTDIALOG_H
#define FILECNTDIALOG_H

#include <QDialog>

namespace Ui {
class FileCntDialog;
}

class FileCntDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FileCntDialog(QWidget *parent = nullptr);
    ~FileCntDialog();

private:
    Ui::FileCntDialog *ui;
};

#endif // FILECNTDIALOG_H
