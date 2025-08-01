// .import QtQuick 2.0 as QtQuickModuleImportedInJS

// var component;
// var sprite;

// function createSpriteObjects() {
//     component = Qt.createComponent("Sprite.qml");
//     if (component.status == QtQuickModuleImportedInJS.Component.Ready){
//         finishCreation();
//         console.log("If statement of createSpriteObjects");
//     }
//     else{
//         component.statusChanged.connect(finishCreation);
//         console.log("Else statement of createSpriteObjects");
//     }
// }

// function finishCreation() {
//     if (component.status == QtQuickModuleImportedInJS.Component.Ready) {
//         sprite = component.createObject(appWindow, {x: 100, y: 100});
//         if (sprite == null) {
//             // Error Handling
//             console.log("Error creating object");
//         }
//     } else if (component.status == QtQuickModuleImportedInJS.Component.Error) {
//         // Error Handling
//         console.log("Error loading component:", component.errorString());
//     }
// }


var component;
var sprite;

function createSpriteObjects() {
    component = Qt.createComponent("Sprite.qml");
    if (component.status == Component.Ready)
        finishCreation();
    else
        component.statusChanged.connect(finishCreation);
}

function finishCreation() {
    if (component.status == Component.Ready) {
        sprite = component.createObject(appWindow, {x: 100, y: 100});
        if (sprite == null) {
            // Error Handling
            console.log("Error creating object");
        }
    } else if (component.status == Component.Error) {
        // Error Handling
        console.log("Error loading component:", component.errorString());
    }
}
