#include "rectangle.h"
#include <QPainter>

Rectangle::Rectangle(QWidget *parent)
    : QWidget(parent)
{
}

Rectangle::~Rectangle() {}

void Rectangle::paintEvent(QPaintEvent *event)
{
    Q_UNUSED (event);

    QPainter paint(this);
    paint.setPen(Qt:: white);
    paint.setBrush(Qt:: blue);
    paint.drawRect(30,40,200,300);
}
