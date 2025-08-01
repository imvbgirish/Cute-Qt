#ifndef MODELAPPLE_H
#define MODELAPPLE_H

#include <QObject>
#include <QMetaEnum>

class ModelApple : public QObject {
    Q_OBJECT
public:
    enum AppleType { Big, Small };
    Q_ENUM(AppleType)
};

#endif // MODELAPPLE_H
