#ifndef MESSAGE_H
#define MESSAGE_H

#include "emoji.h"
#include <QtQmlIntegration>
#include <QObject>
#include <qqmlintegration.h>

class Message : public QObject
{
    Q_OBJECT
    QML_NAMED_ELEMENT(MyMessage);

    Q_PROPERTY(Emoji emoji READ emoji WRITE setEmoji NOTIFY emojiChanged FINAL)

public:
    Message();
    ~Message();

    Emoji emoji() const;
    void setEmoji(const Emoji &newEmoji);

signals:
    void emojiChanged();

private:
    Emoji m_emoji;
};

Q_DECLARE_METATYPE(Message)

#endif // MESSAGE_H
