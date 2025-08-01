#include "mydialog.h"
#include <QDebug>
#include <QCloseEvent>
#include <QMessageBox>
#include <QHideEvent>
#include <QPushButton>

MyDialog::MyDialog(QWidget *parent)
    : QDialog(parent)
{
    resize(600, 300);
    add();
}

MyDialog::~MyDialog()
{
}

void MyDialog::closeEvent(QCloseEvent *event)
{
    qDebug() << "closeEvent called";

    QMessageBox::StandardButton reply = QMessageBox::question(
        this,
        "Confirm Close",
        "Do you want to close the dialog?",
        QMessageBox::Yes | QMessageBox::No
        );


    if (reply == QMessageBox::Yes) {
        event->accept();
        qDebug() << "closeEvent accepted";
    } else {
        event->ignore();
        qDebug() << "closeEvent ignored";
    }

}

void MyDialog::reject()
{
    qDebug() << "reject called (Escape key or manual call)";
    QDialog::reject();
}

void MyDialog::setVisible(bool visible)
{
    QDialog::setVisible(visible);
    qDebug() << "Dialog visibility changed:" << (visible ? "shown" : "hidden");
}

void MyDialog::add()
{
    QMessageBox* box = new QMessageBox(this);
    QPushButton* button = new QPushButton("Girish",this);
    box->addButton(button,QMessageBox::AcceptRole);
    box->exec();
}
