import QtQuick 2.12
import QtQuick.Controls 2.12
//import QtQuick.Dialogs 1.2


ApplicationWindow {
    visible: true
    width: 500
    height: 320
    title: qsTr("学生信息表单")
    MainForm {
        anchors.fill: parent
        submit.onClicked: {
            var hobbyText="";
            for(var i=0;i<7;i++){
                hobbyText=hobby.children[i].checked?(hobby.children[i].text+","):"";
            if(hobby.children[7].checked)
                hobbyText+="..."
            }
            details.text="我的名字叫"+name.text+"，是个"+age.text+"岁"+sex.current.text+"生，所学专业是"+spec.currentText+
                    ",业余爱好"+hobbyText;
        }
    }
}
