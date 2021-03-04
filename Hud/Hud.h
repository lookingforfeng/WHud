#pragma once

#include <QTimer>
#include <QPixmap>

#include <QtWidgets/QMainWindow>
#include "ui_Hud.h"
#include "IndicatorSpeedVector.h"

class Hud : public QMainWindow
{
	Q_OBJECT

public:
	Hud(QWidget *parent = Q_NULLPTR);
	void paintEvent(QPaintEvent *);

private:
	Ui::HudClass ui;

	QList<IndicatorBase*> indicator_list_;

	QTimer* update_timer_;
	QPixmap pixmap_;

	private slots:
	void updateIndicator();
};
