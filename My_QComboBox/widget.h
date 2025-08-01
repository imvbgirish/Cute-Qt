#ifndef WIDGET_H
#define WIDGET_H

#include <QComboBox>
#include <QLabel>
#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void createComboBox();

private slots:
    void onComboBoxChanged(const QString &text);

private:
    QLabel *m_label;
    QComboBox *m_comboBox;
};
#endif // WIDGET_H
