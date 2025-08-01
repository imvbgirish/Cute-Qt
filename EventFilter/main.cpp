#include <QApplication>
#include <QLineEdit>
#include "keypresseater.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QLineEdit lineEdit;
    KeyPressEater *eater = new KeyPressEater();

    lineEdit.installEventFilter(eater);
    lineEdit.show();

    return app.exec();
}
