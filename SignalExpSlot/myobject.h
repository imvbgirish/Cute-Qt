#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>

class MyObject : public QObject
{
    Q_OBJECT

public:
    explicit MyObject(QObject *parent = nullptr) {}

    Q_INVOKABLE void publicInvokable() {
        qDebug("Called publicInvokable");
    }

public slots:
    void publicSlot() {
        qDebug("Called publicSlot");
    }

private slots:
    void privateSlot() {
        qDebug("Called privateSlot");
    }

signals:
    void publicSignal();
    void privateSignal();
};

#endif // MYOBJECT_H
