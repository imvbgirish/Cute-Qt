#include "firstclass.h"

FirstClass::FirstClass(QObject *parent)
    : QObject{parent}
{
    setName("Girish");
}

QString FirstClass::getName() const
{
    Q_FUNC_INFO;
    return m_name;
}

void FirstClass::setName(const QString &newName)
{
    Q_FUNC_INFO;
    m_name = newName;
    emit nameChanged();
}
