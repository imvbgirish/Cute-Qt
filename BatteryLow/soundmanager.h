#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include <QObject>

class SoundManager: public QObject{
    Q_OBJECT
public:
    SoundManager();
    ~SoundManager();

public slots:
    void announce(QString message);

};

#endif // SOUNDMANAGER_H
