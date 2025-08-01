#include "login.h"

Login::Login(QWidget *parent)
    : QWidget(parent)
{
    qDebug() <<  Q_FUNC_INFO;
    setFixedSize(400,200);
    createLoginPage();

}

Login::~Login() {
    qDebug() <<  Q_FUNC_INFO;
}

void Login::createLoginPage()
{
    qDebug() <<  Q_FUNC_INFO;
    m_vBoxLayout = new QVBoxLayout;

    m_userLabel = new QLabel("Username");
    m_username = new QTextEdit(this);
    m_username->setPlaceholderText("Enter Username");

    m_passwordLabel = new QLabel("Password");
    m_password = new QTextEdit(this);
    m_password->setPlaceholderText("Enter Password");

    m_hBoxLayout = new QHBoxLayout;

    m_submit = new QPushButton("Submit",this);
    m_cancel = new QPushButton("Cancel",this);

    connect(m_submit,&QPushButton::clicked,this,&Login::onSubmitButtonClicked);
    connect(m_cancel,&QPushButton::clicked,this,&Login::onCancelButtonClicked);

    m_hBoxLayout->addWidget(m_submit);
    m_hBoxLayout->addWidget(m_cancel);

    m_vBoxLayout->addWidget(m_userLabel);
    m_vBoxLayout->addWidget(m_username);
    m_vBoxLayout->addWidget(m_passwordLabel);
    m_vBoxLayout->addWidget(m_password);
    m_vBoxLayout->addLayout(m_hBoxLayout);

    this->setLayout(m_vBoxLayout);

}

void Login::onSubmitButtonClicked()
{
    qDebug()<<Q_FUNC_INFO;
    QString userName = m_username->toPlainText();
    QString password = m_password->toPlainText();

    qDebug()<<" UserName: "<<userName<<"\n"<<"Password: "<<password;
}

void Login::onCancelButtonClicked()
{
    exit(0);
}
