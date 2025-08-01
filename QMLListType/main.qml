import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    visible: true
    width: 400
    height: 400

    Rectangle {
        id: parentRect
        objectName: "parentRect"
        width: 300
        height: 300
        anchors.centerIn: parent

        Rectangle {
            id: item1
            objectName: "item1"
            width: 100; height: 100
            color: "red"
            x: 100; y: 100
        }

        Rectangle {
            id: item2
            objectName: "item2"
            width: 100; height: 100
            color: "green"
            x: 100; y: 100
        }

        Rectangle {
            id: item3
            objectName: "item3"
            width: 100; height: 100
            color: "blue"
            x: 100; y: 100
        }
    }
}
