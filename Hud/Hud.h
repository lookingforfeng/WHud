#pragma once

#include <QTimer>

#include <QtWidgets/QMainWindow>
#include "ui_Hud.h"
#include "IndicatorSpeedVector.h"

class Hud : public QMainWindow
{
	Q_OBJECT

public:
	Hud(QWidget *parent = Q_NULLPTR);

private:
	Ui::HudClass ui;

	QList<IndicatorBase*> indicator_list_;

	QTimer* update_timer_;

	private slots:
	void update();
};
