#include "IndicatorBase.h"

IndicatorBase::IndicatorBase(QObject *parent)
	: QObject(parent)
{
}

IndicatorBase::~IndicatorBase()
{
}


void IndicatorBase::update(QPainter* painter)
{
}

void IndicatorBase::loadeSetting(XMLElement* elment)
{
}
