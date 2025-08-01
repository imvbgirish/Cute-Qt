
// import QtQuick

// Item {
//     Item {
//         id: inner
//         property int count: 5
//     }
// }

// import QtQuick
// Rectangle {
//    width: root.width
//    height: root.height / 2
//    color:  "red"
// }


import QtQuick

Item {
    Item {
        id: inner
        property int count: 5
    }

    property alias innerCount: inner.count
}
