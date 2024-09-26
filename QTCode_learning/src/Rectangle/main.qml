import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 1920
    height: 1200
    title: qsTr("Rectangle")

    MainForm {
        anchors.fill: parent
        mouseArea.onClicked: {
            topRect.visible=!topRect.visible
        }
    }
   /* MouseArea{
        id:mouseArea
        anchors.fill:parent
    }
    Rect{
        x:25;y:25
        opacity: (360.0-x)/360
    }*/
}
