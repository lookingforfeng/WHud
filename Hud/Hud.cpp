#include "Hud.h"

Hud::Hud(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	pixmap_ = QPixmap(size());//�½�pixmap
	pixmap_.fill(Qt::white);//����ɫ���Ϊ��ɫ

	IndicatorBase* speed_vector = new IndicatorSpeedVector(this);
	speed_vector->setParent(this);
	indicator_list_.append(speed_vector);

	update_timer_ = new QTimer();
	update_timer_->setInterval(1);
	connect(update_timer_, &QTimer::timeout, this, &Hud::updateIndicator);
	update_timer_->start();
}

void Hud::updateIndicator()
{


	this->repaint();
}

void Hud::paintEvent(QPaintEvent *)
{



	QPixmap pix = pixmap_;//��_pixmap��Ϊ����
	QPainter painter(&pix);//��_pixmap��Ϊ����
	unsigned int i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0;//����ͼ�ε�����

	QListIterator<IndicatorBase*> it(indicator_list_);
	while (it.hasNext())
	{
		it.next()->update(&painter);
	}
	painter.end();
	painter.begin(this);//����ǰ������Ϊ����
	painter.drawPixmap(0, 0, pix);//��pixmap��������





	////painter.setPen(Qt::blue);
	//painter.setPen(Qt::blue);
	//painter.setFont(QFont("Arial", 50 + 5 * i));
	//painter.drawText(rect(), Qt::AlignCenter, "Qt");
	////2���������
	//QRectF rectangle(100.0, 20.0, 80.0, 60.0);
	//int startAngle = 30 * 16;
	//int spanAngle = 120 * 16;

	//painter.drawArc(rectangle, startAngle, spanAngle);

	//static const QPointF points[4] = {
	//	QPointF(10.0 + 5 * i, 80.0),
	//	QPointF(20.0, 10.0),
	//	QPointF(80.0, 30.0),
	//	QPointF(90.0, 70.0 + 5 * i)
	//};
	//painter.drawConvexPolygon(points, 4);
	////3����Բ
	//QRectF rectangle1(10.0, 100.0, 80.0, 80.0);
	////QPainter painter(this);
	//painter.drawEllipse(rectangle1);
	////4������
	//QLineF line(10.0, 80.0, 90.0, 20.0);
	////QPainter(this);
	//painter.drawLine(line);
	////5����
	//static const QPointF points1[3] = {
	//	QPointF(110.0, 180.0),
	//	QPointF(120.0, 110.0),
	//	QPointF(180.0, 130.0),
	//};
	//painter.drawPolyline(points1, 3);
	////6��������
	//painter.setPen(Qt::red);
	//QRectF rectangle2(200.0, 20.0, 80.0, 60.0);
	//painter.drawRect(rectangle2);
	////7����Բ�Ǿ���
	//QRectF rectangle3(200.0, 120.0, 80.0, 60.0);
	//painter.drawRoundedRect(rectangle3, 20.0, 15.0);
	////8���������
	//QPointF pointf[10];
	//pen.setWidth(6);
	//painter.setPen(pen); // ���û���
	//for (int i = 0; i < 10; ++i)
	//{
	//	pointf[i].setX(2.0 + i*10.0);
	//	pointf[i].setY(130.0);
	//}
	//painter.drawPoints(pointf, 10);
	////9��������ֱ��
	//pen.setWidth(5);
	//pen.setColor(Qt::red); // ���û���Ϊ��ɫ
	//painter.setPen(pen); // ���û���
	//painter.drawLine(rect().topLeft(), rect().bottomRight());
	////10������
	//pen.setWidth(6);
	//pen.setColor(Qt::green); // ���û���Ϊ��ɫ
	//painter.setPen(pen); // ���û���
	//painter.drawPoint(200, 200);
	////11����Բ��
	//painter.setPen(QColor(Qt::blue));
	//painter.setBrush(QBrush(Qt::yellow));
	//painter.drawEllipse(50, 150, 15, 15);
}
