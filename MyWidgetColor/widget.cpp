#include "widget.h"
#include <QPalette>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setAutoFillBackground(true);

    QPalette pal = palette();
    pal.setColor(QPalette::Window, Qt::yellow);
    pal.setColor(QPalette::Button, Qt::white);
    setPalette(pal);
}

Widget::~Widget()
{
}

QPalette::ColorRole Widget::backgroundRole() const
{
    // Hide base method and return Button role instead of Window
    return QPalette::Button;
}
