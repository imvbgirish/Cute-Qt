#include <QCoreApplication>
#include <QVariant>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> list = {1, 2, 3, 4, 5};
    QVariant var = QVariant::fromValue(list);

    if (var.canConvert<QList<int>>()) {
        QList<int> extractedList = var.value<QList<int>>();
        for (int i = 0; i < extractedList.size(); ++i) {
            qDebug() << "Element" << i << ":" << extractedList.at(i);
        }
    } else {
        qDebug() << "Variant does not hold QList<int>";
    }


    // union {
    //     std::string name;    //not possible
    // };



    return 0;
}
