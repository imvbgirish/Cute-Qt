#include <QString>
#include <QDebug>

int main() {
    QString str = "hello";

    for (QString::iterator it = str.begin(); it != str.end(); ++it) {
        qDebug() << *it;
        *it = it->toUpper();
    }

    for (QString::const_iterator it = str.cbegin(); it != str.cend(); ++it) {
        // *it = it->toUpper();
        qDebug() << *it;
    }

    qDebug() << str;
    return 0;
}
