#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickItem>
#include <QTimer>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    if (engine.rootObjects().isEmpty())
        return -1;

    QObject *rootObject = engine.rootObjects().first();
    QQuickItem *parentRect = rootObject->findChild<QQuickItem*>("parentRect");

    QTimer::singleShot(0, [&]() {
        QQuickItem *item1 = rootObject->findChild<QQuickItem*>("item1");
        QQuickItem *item2 = rootObject->findChild<QQuickItem*>("item2");
        QQuickItem *item3 = rootObject->findChild<QQuickItem*>("item3");

        if (item1 && item2 && item3) {
            qDebug() << "Swapping Z: Blue before Green";
            item1->stackAfter(item3);
        }
    });
    return app.exec();
}
