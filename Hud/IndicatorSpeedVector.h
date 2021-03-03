#pragma once

#include <QObject>

#include "IndicatorBase.h"

class IndicatorSpeedVector : public QObject, public IndicatorBase
{
	Q_OBJECT

public:
	IndicatorSpeedVector(QObject *parent);
	~IndicatorSpeedVector();

	void update();
};
