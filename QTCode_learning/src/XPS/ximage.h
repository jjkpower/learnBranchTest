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
	//���û��ʴ�ϸ����ɫ
	void SetPen(int size, QColor col);
	//��Ƥ������
	void SetEraser(int Size);
protected:
	//ԭͼ
	QImage src;
	//���ͼ��
	QImage out;
	//��һ�ε����λ��
	QPoint mpos;
	QPen pen;
};
