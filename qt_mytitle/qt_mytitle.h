#pragma once

#include <QtWidgets/QWidget>
#include "ui_qt_mytitle.h"

class qt_mytitle : public QWidget
{
    Q_OBJECT

public:
    qt_mytitle(QWidget *parent = Q_NULLPTR);

private:
    Ui::qt_mytitleClass ui;
};
