#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget *window = new QWidget;
    window->resize(300,300);

    QGridLayout *layout = new QGridLayout;

    layout->addWidget(new QPushButton("Top Left"),     0, 0);
    layout->addWidget(new QPushButton("Top Right"),    0, 1);
    layout->addWidget(new QPushButton("Bottom Left"),  1, 0);
    layout->addWidget(new QPushButton("Bottom Right"), 1, 1);

    window->setLayout(layout);
    window->show();

    return app.exec();
}
