#ifndef EMOJI_H
#define EMOJI_H

#include <QString>
#include <QtQmlIntegration>

class Emoji
{
    Q_GADGET
    QML_VALUE_TYPE(MyEmoji)
    QML_STRUCTURED_VALUE

    Q_PROPERTY(QString myEmojiType READ myEmojiType WRITE setMyEmojiType FINAL)

public:
    Emoji();
    ~Emoji();

    QString myEmojiType() const;
    void setMyEmojiType(const QString &newMyEmojiType);

private:
    QString m_myEmojiType;
};

#endif // EMOJI_H
