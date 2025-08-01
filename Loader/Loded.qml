// pragma ComponentBehavior: Bound
import QtQuick

Rectangle {
    width: 100
    height: 100
    color: "red"
    x: 150

    Component.onCompleted: {
       hello()
      itm.helloItem()
    }
}
