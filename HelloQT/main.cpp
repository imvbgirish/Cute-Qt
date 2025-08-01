#include <QPushButton>
#include <QApplication>
#include <QLayoutItem>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton button;
    QWidget window;
    window.setFixedSize(500,300);
    QPushButton *pushbutton = new QPushButton("Hello world",&window);
    pushbutton->setGeometry(10,10,100,50);

    QFont font ("Courier");
    pushbutton->setFont(font);

    window.show();

    return a.exec();
}
