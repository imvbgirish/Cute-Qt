#include <QCoreApplication>
#include <QDebug>
#include "ModelApple.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QMetaEnum metaEnum = QMetaEnum::fromType<ModelApple::AppleType>();
    qDebug() << metaEnum.valueToKey(ModelApple::Big);  // Output: "Big"

    return 0;
}
