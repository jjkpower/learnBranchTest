#include "xps.h"
#include <QColorDialog>
#include <QButtonGroup>
XPS::XPS(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.openaction, SIGNAL(triggered()), ui.image, SLOT(Open()));
	connect(ui.saveaction, SIGNAL(triggered()), ui.image, SLOT(Save()));
	col=QColor(200, 0, 0, 255);
	SetPen();

	//»­±ÊºÍÏðÆ¤²Á°´Å¥ÅÅËûÑ¡Ôñ
	QButtonGroup *gp = new QButtonGroup(this);
	gp->addButton(ui.eraseButton);
	gp->addButton(ui.penButton);
	gp->setExclusive(true);
}

void XPS::SetPen()
{
	ui.image->SetPen(ui.penSize->value(),col);
	status = XPEN;
	ui.penButton->setChecked(true);
}

void XPS::SetColor()
{
	col=QColorDialog::getColor(Qt::red, this);
	QString sty=QString("background-color:rgba(%1,%2,%3,%4)")
		.arg(col.red()).arg(col.green()).arg(col.blue()).arg(col.alpha());
	ui.colorButton->setStyleSheet(sty);
	
	SetPen();
}

void XPS::SetEraser()
{
	ui.image->SetEraser(ui.penSize->value());
	status = XERASER;
	ui.eraseButton->setChecked(true);
}

void XPS::Save()
{
	ui.image->Save();
	ui.statusBar->showMessage(QStringLiteral("±£´æÍ¼Æ¬"),5000);
}
