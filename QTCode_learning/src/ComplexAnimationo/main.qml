import QtQuick 2.4

MainForm {
    Rectangle{
        property alias  mouseArea: mouseArea
        x: 20
        y: 40
        width: 600
        height: 400
        MouseArea{
            id:mouseArea
            anchors.fill: parent
        }
        CAnimateObj{ }
    }
}
