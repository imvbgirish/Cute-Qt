#include "batterymanager.h"
#include "soundmanager.h"

#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    BatteryManager battery(100);
    SoundManager sound;
    QObject::connect(&battery,&BatteryManager::batteryLow, &sound, &SoundManager::announce,Qt::UniqueConnection);
    battery.changeInBatteryPercent();

    return a.exec();
}
