import QtQuick
import IconType 1.0
import QtQuick.Controls
import QtQuick.Layouts

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    MyMessage{
      id:msg
    }

    Text {
        id: name
        text: msg.emoji.myEmojiType
        anchors.centerIn: parent
        color: "black"
        font.bold: true
    }

    RowLayout{
        anchors.top: name.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 20

        TextField{
            id:txt
            placeholderText: "Enter Text.."
        }

        Button{
            text: "Submit"
            onClicked: {
                msg.emoji.myEmojiType = txt.text
                txt.text = ""
            }
        }
    }
}
