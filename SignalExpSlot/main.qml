import QtQuick
import QtQuick.Window
import SignalExperiment 1.0

Window {
    width: 400
    height: 300
    visible: true

    MyObject {
        id: obj

        onPrivateSignal: {
            console.log("Private signal received")  // ✅ Will run!
        }
    }

    Component.onCompleted: {
        obj.publicInvokable()    // ✅ Works
        obj.publicSlot()         // ✅ Works
        // obj.privateSlot()     // ❌ Will cause QML error
        obj.privateSignal()      // ✅ Works — emits signal
    }
}
