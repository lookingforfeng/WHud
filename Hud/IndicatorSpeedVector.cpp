#include "IndicatorSpeedVector.h"

IndicatorSpeedVector::IndicatorSpeedVector(QObject *parent)
	: QObject(parent)
{
}

IndicatorSpeedVector::~IndicatorSpeedVector()
{
}

void IndicatorSpeedVector::update(QPainter* painter)
{
	static int i;
	i++;
	qDebug() << "IndicatorSpeedVector updating";
	painter->setPen(Qt::blue);
	painter->setFont(QFont("Arial", 30 + 0.01 * i));
	QRectF rectangle(10.0, 20.0, 300, 300);
	painter->drawText(rectangle, Qt::AlignCenter, QString::number(i));
}
