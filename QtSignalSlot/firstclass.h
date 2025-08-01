#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H

#include <QObject>

class FirstClass : public QObject
{
    Q_OBJECT
public:
    explicit FirstClass(QObject *parent = nullptr);

    QString getName() const;
    void setName(const QString &newName);

signals:
    void nameChanged();

private:
    QString m_name;
};

#endif // FIRSTCLASS_H
