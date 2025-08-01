#ifndef BATTERYMANAGER_H
#define BATTERYMANAGER_H

#include <QObject>

class BatteryManager: public QObject{
    Q_OBJECT
private:
    int m_batteryPercentage;

public:
    BatteryManager(int batteryPercent);
    ~BatteryManager();

    void setBatteryPercent(int battery);
    int getBatteryPercent() const;
    void changeInBatteryPercent();

signals:
    void batteryLow(QString);
};
#endif // BATTERYMANAGER_H
