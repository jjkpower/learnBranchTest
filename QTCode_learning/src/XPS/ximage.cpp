#include "ximage.h"
#include <QPainter>
#include <QFileDialog>
#include <QMouseEvent>
XImage::XImage(QWidget *parent)
	: QWidget(parent)
{
}

XImage::~XImage()
{
}

void XImage::Open()
{
	QString filename=QFileDialog::getOpenFileName(this, QStringLiteral("打开图片"),""
		,QStringLiteral("支持格式(*.jpg *.bmp *.png)"));
	if (filename.isEmpty())return;
	if (!src.load(filename))return;
	resize(src.size());
	mpos = QPoint();
	out = src.copy();
}

void XImage::Save()
{
	if (out.isNull()) return;
	QString filename = QFileDialog::getSaveFileName(this, QStringLiteral("保存文件"), ""
		, QStringLiteral("支持格式(*.jpg *.bmp *.png)"));
	if (filename.isEmpty())return;
	if (!out.save(filename)) return;

}

void XImage::paintEvent(QPaintEvent* ev)
{
	QPainter p(this);
	//显示绘制图片
	if (!out.isNull())
		p.drawImage(0,0,out);
}

void XImage::mouseMoveEvent(QMouseEvent* ev)
{
	if (out.isNull()) return;
	QPainter p(&out);
	
	//开启抗锯齿
	p.setRenderHint(QPainter::Antialiasing);
	p.setPen(pen);

	if (mpos.isNull()) mpos = ev->pos();
	p.drawLine(QLine(mpos, ev->pos()));
	mpos = ev->pos();
	update();
}

void XImage::SetPen(int size, QColor col)
{
	pen.setWidth(size);
	pen.setBrush(col);
	pen.setCapStyle(Qt::RoundCap);
	pen.setJoinStyle(Qt::RoundJoin);
}

void XImage::SetEraser(int Size)
{
	pen.setWidth(Size);
	//用原图做画笔，实现恢复
	pen.setBrush(QBrush(src));

}