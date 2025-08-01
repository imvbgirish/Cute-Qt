#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>

class MyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MyDialog(QWidget *parent = nullptr);
    ~MyDialog();

protected:
    void closeEvent(QCloseEvent *event) override;
    void reject() override;
    void setVisible(bool visible) override;
    void add();

};

#endif // MYDIALOG_H
