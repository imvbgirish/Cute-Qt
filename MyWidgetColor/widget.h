#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    QPalette::ColorRole backgroundRole() const;  // hides base method (not virtual)
};

#endif // WIDGET_H
