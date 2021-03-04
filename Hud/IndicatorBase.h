#pragma once

#include <QObject>
#include <QVariant> 
#include <QMap>
#include <QPainter> 
#include <QDebug>

#include "tinyxml2.h"
using namespace tinyxml2;

class IndicatorBase : public QObject
{
	Q_OBJECT

public:
	IndicatorBase(QObject *parent = NULL);
	~IndicatorBase();

	virtual void update(QPainter* painter);
	virtual void loadeSetting(XMLElement* elment);

protected:
	int offset_x_ = 0;
	int offset_y_ = 0;
	QMap<QString, QVariant> setting_map_;
	QPaintDevice* parent_;
};
