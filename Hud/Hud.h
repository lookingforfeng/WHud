#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Hud.h"

class Hud : public QMainWindow
{
    Q_OBJECT

public:
    Hud(QWidget *parent = Q_NULLPTR);

private:
    Ui::HudClass ui;
};
