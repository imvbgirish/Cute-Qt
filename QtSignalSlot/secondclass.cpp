#include "secondclass.h"

SecondClass::SecondClass() {

    connect(first,&FirstClass::nameChanged,this,&SecondClass::onNameChanged);
    first->setName("Darshan");
}

void SecondClass::onNameChanged()
{
    Q_FUNC_INFO;
    qDebug() << "Name Changed";
}
