#include "dialogself.h"
#include <QGridLayout>

const static double PI=3.1416;

DialogSelf::DialogSelf(QWidget *parent)
    : QDialog(parent)
{
    label1=new QLabel(this);
    label1->setText(tr("请您输入圆的半径"));
    lineEdit=new QLineEdit(this);
    label2=new QLabel(this);
    button=new QPushButton(this);
    button->setText(tr("显示对应的圆面积"));
    QGridLayout *mainLayout=new QGridLayout(this);
    mainLayout->addWidget(label1,0,0);
    mainLayout->addWidget(lineEdit,0,1);
    mainLayout->addWidget(label2,1,0);
    mainLayout->addWidget(button,1,1);
    connect(button,SIGNAL(clicked()),this,SLOT(showArea()));
}

DialogSelf::~DialogSelf()
{
}
void DialogSelf::showArea()
{
    bool ok;
    QString tempstr;
    QString valuestr=lineEdit->text();
    int valueInt=valuestr.toInt(&ok);
    double area=valueInt*valueInt*PI;
    label2->setText(tempstr.setNum(area));
}

