#include "emoji.h"
#include <QDebug>
#include <QString>

Emoji::Emoji() {
    qDebug() << "Emoji Default Constructor";
    m_myEmojiType = "Smile";
}

Emoji::~Emoji() {
    qDebug() << "Emoji Destructor";
}

QString Emoji::myEmojiType() const {
    return m_myEmojiType;
}

void Emoji::setMyEmojiType(const QString &newMyEmojiType) {
    qDebug() << Q_FUNC_INFO << " new value: " << newMyEmojiType;
    m_myEmojiType = newMyEmojiType;
}
