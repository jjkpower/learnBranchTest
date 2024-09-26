#ifndef DIALOGSELF_H
#define DIALOGSELF_H

#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>


class DialogSelf : public QDialog
{
    Q_OBJECT

public:
    DialogSelf(QWidget *parent = nullptr);
    ~DialogSelf();
private:
    QLabel *label1,*label2;
    QLineEdit *lineEdit;
    QPushButton *button;
private slots:
    void showArea();
};
#endif // DIALOGSELF_H
