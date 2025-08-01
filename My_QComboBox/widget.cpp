#include "widget.h"
#include <QVBoxLayout>
// #include <QComboBox>
// #include <QLabel>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(400,500);
    createComboBox();
}

Widget::~Widget() {}


void Widget::createComboBox(){

    QVBoxLayout *layout = new QVBoxLayout();

   m_label = new QLabel("Select your place:");
    m_comboBox = new QComboBox();

    QStringList list = {
        "Bangalore",
        "Mysore",
        "Shivamogga",
        "Davanagere"
    };

    m_comboBox->addItems(list);

    layout->addWidget(m_label);
    layout->addWidget(m_comboBox);
    layout->addStretch();

    this->setLayout(layout);

    connect(m_comboBox, &QComboBox::currentTextChanged,
            this, &Widget::onComboBoxChanged);

}

void Widget::onComboBoxChanged(const QString &text) {
    m_label->setText("You selected: " + text);
    m_label->setTextFormat(Qt::RichText);
}
