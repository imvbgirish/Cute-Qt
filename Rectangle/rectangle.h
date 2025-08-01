#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QRect>
#include <QWidget>

class Rectangle : public QWidget
{
    Q_OBJECT

public:
    Rectangle(QWidget *parent = nullptr);
    ~Rectangle();

    void paintEvent(QPaintEvent* event) override;

};
#endif // RECTANGLE_H
