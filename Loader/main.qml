import QtQuick
Window {
    width: 640
    height: 480
    visible: true

    Item {
        id: itm
        width: 200
        height: 200

        function helloItem() {
            console.log("hello from Item")
        }

        Loader {
            x: 50
            function hello() {
                console.log("hello from Loader")
            }
            source: "Loded.qml"
        }
    }
}
