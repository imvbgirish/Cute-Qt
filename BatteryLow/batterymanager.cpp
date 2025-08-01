#include "batterymanager.h"
#include <QString>
#include <chrono>
#include <iostream>
#include <thread>

BatteryManager::BatteryManager(int batteryPercent):m_batteryPercentage(batteryPercent){
    std::cout << "Battery constructor"<< std::endl;
}

BatteryManager::~BatteryManager() {
    std::cout << "Battery destructor" << std::endl;
}

void BatteryManager::setBatteryPercent(int battery){
    m_batteryPercentage = battery;
}

int BatteryManager::getBatteryPercent() const{
    return m_batteryPercentage;
}

void BatteryManager::changeInBatteryPercent(){
    for(int i=0; i<20; i++){
        m_batteryPercentage = m_batteryPercentage-5;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        if(m_batteryPercentage <= 0){
            break;
        }
        if(m_batteryPercentage <= 20){
            QString message = "Battery Low: " + QString::number(m_batteryPercentage);
            emit batteryLow(message);
        }
        std::cout << "Battery Percentage: " << m_batteryPercentage << std::endl;
    }
}
