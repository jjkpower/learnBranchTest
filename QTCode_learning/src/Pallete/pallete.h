#ifndef PALLETE_H
#define PALLETE_H

#include <QDialog>
#include <QComboBox>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QLineEdit>


class Pallete : public QDialog
{
    Q_OBJECT

public:
    Pallete(QWidget *parent = nullptr);
    ~Pallete();
    void createCtrlFrame();
    void createContentFrame();
    void fillColorList(QComboBox *);

private slots:
    void ShowWindow();
    void ShowWindowText();
    void ShowButton();
    void ShowButtonText();
    void ShowBase();
private:
    QFrame *ctrlFrame;
    QLabel *windowLabel;
    QComboBox *windowComboBox;
    QLabel *windowTextLabel;
    QComboBox *windowTextComboBox;
    QLabel *ButtonLabel;
    QComboBox *ButtonComboBox;
    QLabel *ButtonTextLabel;
    QComboBox *ButtonTextComboBox;
    QLabel *baseLabel;
    QComboBox *baseComboBox;

    QFrame *contentFrame;
    QLabel *label1;
    QComboBox *combobox1;
    QLabel *label2;
    QLineEdit *lineEdit2;
    QTextEdit *textEdit;
    QPushButton *OkBtn;
    QPushButton *CancleBtn;



};
#endif // PALLETE_H
