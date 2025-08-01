#ifndef MYCLASS_H
#define MYCLASS_H

#include <QMainWindow>

class MyClass : public QMainWindow
{
    Q_OBJECT

public:
    MyClass(QWidget *parent = nullptr);
    ~MyClass();
};
#endif // MYCLASS_H
