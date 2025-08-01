#include "message.h"

Message::Message() {
    qDebug() << "Message Default Constructor";
}

Message::~Message()
{
    qDebug() << "Message Destructor";
}

Emoji Message::emoji() const
{
    return m_emoji;
}

void Message::setEmoji(const Emoji &newEmoji)
{
    // if (m_emoji == newEmoji)
    //     return;
    m_emoji = newEmoji;
    emit emojiChanged();
}

