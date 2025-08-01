#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QTextEdit>
#include <QPushButton>
#include <QDebug>

class Login : public QWidget
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

    void createLoginPage();

public slots:
    void onSubmitButtonClicked();
    void onCancelButtonClicked();

private:
    QLabel* m_userLabel;
    QLabel* m_passwordLabel;
    QVBoxLayout* m_vBoxLayout;
    QHBoxLayout* m_hBoxLayout;
    QTextEdit* m_username;
    QTextEdit* m_password;
    QPushButton* m_submit;
    QPushButton* m_cancel;
};
#endif // LOGIN_H
