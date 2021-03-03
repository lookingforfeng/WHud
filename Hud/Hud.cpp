#include "Hud.h"

Hud::Hud(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	IndicatorBase* speed_vector = new IndicatorSpeedVector(this);
	indicator_list_.append(speed_vector);

	update_timer_ = new QTimer();
	update_timer_->setInterval(1000);
	connect(update_timer_, &QTimer::timeout, this, &Hud::update);
	update_timer_->start();
}

void Hud::update()
{
	QListIterator<IndicatorBase*> it(indicator_list_);
	while (it.hasNext())
	{
		it.next()->update();
	}
}
