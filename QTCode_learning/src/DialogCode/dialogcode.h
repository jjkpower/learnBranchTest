#ifndef DIALOGCODE_H
#define DIALOGCODE_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class DialogCode; }
QT_END_NAMESPACE

class DialogCode : public QDialog
{
    Q_OBJECT

public:
    DialogCode(QWidget *parent = nullptr);
    ~DialogCode();

private:
    Ui::DialogCode *ui;
};
#endif // DIALOGCODE_H
