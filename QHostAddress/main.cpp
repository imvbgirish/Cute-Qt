#include <QCoreApplication>
#include <QHostAddress>
#include <QDebug>

int main() {
    QHostAddress ip("192.168.1.42");
    QHostAddress subnet("192.168.1.0");
    int prefixLength = 24;

    bool result = ip.isInSubnet(subnet, prefixLength);

    qDebug() << "Correct (prefix length) result:" << result;

    return 0;
}

