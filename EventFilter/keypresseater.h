#ifndef KEYPRESSEATER_H
#define KEYPRESSEATER_H

#include <QObject>
#include <QEvent>
#include <QKeyEvent>
#include <QDebug>

class KeyPressEater : public QObject
{
    Q_OBJECT

public:
    explicit KeyPressEater(QObject *parent = nullptr);

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;
};

#endif // KEYPRESSEATER_H
