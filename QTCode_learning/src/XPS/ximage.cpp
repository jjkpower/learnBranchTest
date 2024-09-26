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
	QString filename=QFileDialog::getOpenFileName(this, QStringLiteral("��ͼƬ"),""
		,QStringLiteral("֧�ָ�ʽ(*.jpg *.bmp *.png)"));
	if (filename.isEmpty())return;
	if (!src.load(filename))return;
	resize(src.size());
	mpos = QPoint();
	out = src.copy();
}

void XImage::Save()
{
	if (out.isNull()) return;
	QString filename = QFileDialog::getSaveFileName(this, QStringLiteral("�����ļ�"), ""
		, QStringLiteral("֧�ָ�ʽ(*.jpg *.bmp *.png)"));
	if (filename.isEmpty())return;
	if (!out.save(filename)) return;

}

void XImage::paintEvent(QPaintEvent* ev)
{
	QPainter p(this);
	//��ʾ����ͼƬ
	if (!out.isNull())
		p.drawImage(0,0,out);
}

void XImage::mouseMoveEvent(QMouseEvent* ev)
{
	if (out.isNull()) return;
	QPainter p(&out);
	
	//���������
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
	//��ԭͼ�����ʣ�ʵ�ָֻ�
	pen.setBrush(QBrush(src));

}