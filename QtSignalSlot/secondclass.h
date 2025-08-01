#ifndef SECONDCLASS_H
#define SECONDCLASS_H

#include "firstclass.h"
#include <QObject>
#include <QDebug>

class SecondClass: public QObject
{
    Q_OBJECT
public:
    SecondClass();

public slots:
    void onNameChanged();

private:
    FirstClass *first = new FirstClass;
};

#endif // SECONDCLASS_H
