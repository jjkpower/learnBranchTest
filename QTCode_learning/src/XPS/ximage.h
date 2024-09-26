#pragma once

#include <QWidget>
#include <QPen>

class XImage : public QWidget
{
	Q_OBJECT

public:
	XImage(QWidget *parent=0);
	~XImage();
	void paintEvent(QPaintEvent* ev);
	void mouseMoveEvent(QMouseEvent* ev);
	void mouseReleaseEvent(QMouseEvent* ev)
	{
		mpos = QPoint();
	}
public slots:
	void Open();
	void Save();
	//设置画笔粗细和颜色
	void SetPen(int size, QColor col);
	//橡皮擦设置
	void SetEraser(int Size);
protected:
	//原图
	QImage src;
	//输出图形
	QImage out;
	//上一次的鼠标位置
	QPoint mpos;
	QPen pen;
};
