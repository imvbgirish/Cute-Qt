import QtQuick
import QtQuick.Window
import QtTest

Window {
    width: 400
    height: 200
    visible: true

    Item {
        id: testItem
        signal mySignal()
    }

    SignalSpy {
        id: spy
        target: testItem
        signalName: "mySignal"
    }

    Component.onCompleted: {

        testItem.mySignal();
        console.log("After 1st emit — count:", spy.count, " valid:", spy.valid);

        spy.clear();
        console.log("After clear() — count:", spy.count, " valid:", spy.valid);
        console.log("valid :", spy.valid);

        testItem.mySignal();
        console.log("After 2nd emit — count:", spy.count, " valid:", spy.valid);

        Qt.quit();
    }
}


// import QtQuick 2.0
// import QtTest 1.0

// TestCase {
//     name: "Untitled"

//     Item {
//         id: item

//         signal test
//     }

//     SignalSpy {
//         id: spy
//     }

//     function test_tryVerify() {
//         spy.target = item;
//         spy.signalName = "test";

//         item.test();
//         console.log("After first signal emit:");
//         console.log("spy.count =", spy.count);
//         console.log("spy.valid =", spy.valid);
//         compare(spy.count, 1);

//         spy.clear();
//         console.log("After spy.clear():");
//         console.log("spy.count =", spy.count);
//         console.log("spy.valid =", spy.valid);
//         verify(spy.valid);
//         print(spy.target, spy.signalName);

//         item.test();
//         console.log("After second signal emit:");
//         console.log("spy.count =", spy.count);
//         console.log("spy.valid =", spy.valid);
//         compare(spy.count, 1);
//     }
// }
