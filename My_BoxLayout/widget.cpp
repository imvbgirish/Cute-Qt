#include "widget.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    createButton();

}

Widget::~Widget() {}

void Widget::createButton()
{

    QStringList list = {"Home","Login", "Contact", "Exit"};
    QHBoxLayout* mainLayout = new QHBoxLayout(this);
    QVBoxLayout* verticle = new QVBoxLayout();
    QHBoxLayout* horizontal = new QHBoxLayout();

    for(int i=0; i<list.size(); i++){
        QPushButton* button = new QPushButton(list[i]);
        verticle->addWidget(button);
        connect(button,&QPushButton::clicked,this,&Widget::click);
    }
    // verticle->addStretch();
    verticle->setAlignment(Qt::AlignTop);

    for(int i=0; i<list.size(); i++){
        QPushButton* button = new QPushButton(list[i]);
        horizontal->addWidget(button);
    }
    // horizontal->addStretch();
    horizontal->setAlignment(Qt::AlignTop);


    mainLayout->addLayout(horizontal);
    mainLayout->addLayout(verticle);
    setLayout(mainLayout);
}

void Widget::click()
{
    QMessageBox::information(this,"Button Info","Button Clicked Successfully");
}
