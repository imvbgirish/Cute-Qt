#include "widget.h"
#include <QDebug>
#include <QSlider>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    createSlider();
}

Widget::~Widget() {}

void Widget::createSlider()
{
    QSlider *slider = new QSlider(this);
    slider->setGeometry(100,100,500,500);
    slider->setSliderPosition(10);
    slider->sliderPressed();
    connect(slider, &QSlider::sliderPressed, this, &Widget::pressSlider);
    connect(slider, &QSlider::sliderReleased, this, &Widget::releasedSlider);
}

void Widget::pressSlider()
{
    qDebug() << "Slider Pressed";
}

void Widget::releasedSlider()
{
    qDebug() << "Slider released";
}
