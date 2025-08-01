#include "keypresseater.h"
#include <QObject>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QDebug>

KeyPressEater::KeyPressEater(QObject *parent)
    : QObject(parent)
{
}

bool KeyPressEater::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress) {
        // QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        qDebug() << "Ate key press:" << keyEvent->key();
        return true;
    }
    else if (event->type() == QEvent::MouseButtonPress) {
        // QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        QKeyEvent *keyEvent = dynamic_cast<QKeyEvent *>(event);
        qDebug() << "Mouse click (pretending to be key press):" << keyEvent->key();
        return false;
    }
    else {
        return QObject::eventFilter(obj, event);
    }
}
