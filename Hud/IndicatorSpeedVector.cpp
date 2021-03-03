#include "IndicatorSpeedVector.h"

IndicatorSpeedVector::IndicatorSpeedVector(QObject *parent)
	: QObject(parent)
{
}

IndicatorSpeedVector::~IndicatorSpeedVector()
{
}

void IndicatorSpeedVector::update()
{
	qDebug() << "IndicatorSpeedVector is updateing";
}
