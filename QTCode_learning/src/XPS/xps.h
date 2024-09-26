#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_xps.h"
enum XSTATUS
{
	XPEN,
	XERASER
};
class XPS : public QMainWindow
{
	Q_OBJECT

public:
	XPS(QWidget *parent = Q_NULLPTR);
	XSTATUS status = XPEN;

public slots:
	void SetPen();
	void SetColor();
	void SetEraser();
	void Save();
private:
	QColor col;
	Ui::XPSClass ui;
};
