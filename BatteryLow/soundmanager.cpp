#include "soundmanager.h"
#include "qdebug.h"
#include <iostream>

SoundManager::SoundManager() {
    std::cout << "Soundmanager constructor" << std::endl;
}

SoundManager::~SoundManager(){
    std::cout << "Soundmanager destructor" << std::endl;
}

void SoundManager::announce(QString message)
{
    qDebug() << message;
}
