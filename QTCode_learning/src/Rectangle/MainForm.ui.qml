import QtQuick 2.0

Rectangle {
    property alias mouseArea: mouseArea
    property alias topRect: topRect
    width: 360
    height: 360
    MouseArea{
        id:mouseArea
        anchors.fill: parent
    }
    Rectangle {
        rotation: 45
        x:40
        y:60
        width: 100
        height: 100
        color: "red"
    }
    Rectangle {
        id:topRect
        opacity: 0.6
        scale: 0.8
        x:135
        y:60
        width: 100
        height: 100
        radius: 8
        gradient: Gradient {
            GradientStop { position: 0.0;color: "aqua" }
            GradientStop { position: 1.0;color: "teal" }
        }
        border { width: 3; color:"blue" }
    }
}/*
Rectangle{
    Image {
        x:80
        y:80
        width: 1920/4
        height: 1200/4
        source: "images/desk.jpg"
        fillMode: Image.PreserveAspectCrop
        clip: true
    }
}*/

/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
##^##*/
