#include "IndicatorBase.h"

IndicatorBase::IndicatorBase(QObject *parent)
	: QObject(parent)
{
}

IndicatorBase::~IndicatorBase()
{
}

void IndicatorBase::setParent(QPaintDevice* parent)
{
	if (parent)
	{
		parent_ = parent;
		painter_ = new QPainter(parent);
	}
}

void IndicatorBase::update()
{
}

void IndicatorBase::loadeSetting(XMLElement* elment)
{
}
