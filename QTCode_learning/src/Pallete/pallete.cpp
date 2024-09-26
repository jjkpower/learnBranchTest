#include "pallete.h"
#include <QHBoxLayout>
Pallete::Pallete(QWidget *parent)
    : QDialog(parent)
{
    createCtrlFrame();
    createContentFrame();
    QHBoxLayout *mainLayout= new QHBoxLayout(this);
    mainLayout->addWidget(ctrlFrame);
    mainLayout->addWidget(contentFrame);
}

Pallete::~Pallete()
{
}

void Pallete::createCtrlFrame()
{
    ctrlFrame =new QFrame;

    windowLabel=new QLabel(tr("QPalette::Widow: "));
    windowComboBox =new QComboBox;
    fillColorList(windowComboBox);
    connect(windowComboBox,SIGNAL(activated(int)),this,SLOT(ShowWindow()));

    windowTextLabel=new QLabel(tr("QPalette::WindowText: "));
    windowTextComboBox =new QComboBox;
    fillColorList(windowTextComboBox);
    connect(windowTextComboBox,SIGNAL(activated(int)),this,SLOT(ShowWindowText()));

    ButtonLabel=new QLabel(tr("QPalette::Button: "));
    ButtonComboBox =new QComboBox;
    fillColorList(ButtonComboBox);
    connect(ButtonComboBox,SIGNAL(activated(int)),this,SLOT(ShowButton()));

    ButtonTextLabel=new QLabel(tr("QPalette::ButtonText: "));
    ButtonTextComboBox =new QComboBox;
    fillColorList(ButtonTextComboBox);
    connect(ButtonTextComboBox,SIGNAL(activated(int)),this,SLOT(ShowButtonText()));

    baseLabel=new QLabel(tr("QPalette::Base: "));
    baseComboBox =new QComboBox;
    fillColorList(baseComboBox);
    connect(baseComboBox,SIGNAL(activated(int)),this,SLOT(ShowBase()));

    QGridLayout *mainLayout=new QGridLayout(ctrlFrame);
    mainLayout->setSpacing(10);
    mainLayout->addWidget(windowLabel,0,0);
    mainLayout->addWidget(windowComboBox,0,1);
    mainLayout->addWidget(windowTextLabel,1,0);
    mainLayout->addWidget(windowTextComboBox,1,1);
    mainLayout->addWidget(ButtonLabel,2,0);
    mainLayout->addWidget(ButtonComboBox,2,1);
    mainLayout->addWidget(ButtonTextLabel,3,0);
    mainLayout->addWidget(ButtonTextComboBox,3,1);
    mainLayout->addWidget(baseLabel,4,0);
    mainLayout->addWidget(baseComboBox,4,1);


}

void Pallete::createContentFrame()
{
    contentFrame=new QFrame;

    label1 =new QLabel(tr("请输入一个值： "));
    combobox1 =new QComboBox;
    label1 =new QLabel(tr("请输入字符串： "));
    lineEdit2 =new QLineEdit;
    textEdit =new QTextEdit;

    QGridLayout *TopLayout =new QGridLayout(contentFrame);
    TopLayout->addWidget(label1,0,0);
    TopLayout->addWidget(combobox1,0,1);
    TopLayout->addWidget(label2,1,0);
    TopLayout->addWidget(lineEdit2,1,1);
    TopLayout->addWidget(textEdit,2,0,1,2);

    OkBtn=new QPushButton(tr("确认"));
    CancleBtn =new QPushButton(tr("取消"));

    QHBoxLayout *BottomLayout =new QHBoxLayout;
    BottomLayout->addStretch(1);
    BottomLayout->addWidget(OkBtn);
    BottomLayout->addWidget(CancleBtn);

    QVBoxLayout *mainLayout= new QVBoxLayout(contentFrame);
    mainLayout->addLayout(TopLayout);
    mainLayout->addLayout(BottomLayout);

}

void Pallete::ShowWindow()
{
    QStringList colorList =QColor::colorNames();
    QColor color =QColor(colorList[windowComboBox->currentIndex()]);
    QPalette p =contentFrame->palette();
    p.setColor(QPalette::Window,color);

    contentFrame->setPalette(p);
    contentFrame->update();
}

void Pallete::ShowWindowText()
{
    QStringList colorList =QColor::colorNames();
    QColor color =QColor(colorList[windowComboBox->currentIndex()]);
    QPalette p =contentFrame->palette();
    p.setColor(QPalette::WindowText,color);

    contentFrame->setPalette(p);
    //contentFrame->update();
}

void Pallete::ShowButton()
{
    QStringList colorList =QColor::colorNames();
    QColor color =QColor(colorList[windowComboBox->currentIndex()]);
    QPalette p =contentFrame->palette();
    p.setColor(QPalette::Button,color);

    contentFrame->setPalette(p);
    contentFrame->update();
}

void Pallete::ShowButtonText()
{
    QStringList colorList =QColor::colorNames();
    QColor color =QColor(colorList[windowComboBox->currentIndex()]);
    QPalette p =contentFrame->palette();
    p.setColor(QPalette::ButtonText,color);

    contentFrame->setPalette(p);
   // contentFrame->update();
}

void Pallete::ShowBase()
{
    QStringList colorList =QColor::colorNames();
    QColor color =QColor(colorList[windowComboBox->currentIndex()]);
    QPalette p =contentFrame->palette();
    p.setColor(QPalette::Base,color);

    contentFrame->setPalette(p);
    //contentFrame->update();
}

void Pallete::fillColorList(QComboBox *)
{
   QStringList colorList =QColor::colorNames();
   QString color;
   foreach(color,colorList)
   {
       QPixmap pix(QSize(70,20));
       pix.fill(QColor(color));
       combobox1->addItem(QIcon(pix),NULL);
       combobox1->setIconSize(QSize(70,20));
       combobox1->setSizeAdjustPolicy(QComboBox::AdjustToContents);
   }
}
