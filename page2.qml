import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.2
import QtQuick.Extras 1.4
import QtQuick.Controls.Styles 1.2

ApplicationWindow {
    id:menuView
    visible: true
    width: 360
    height: 500
    
    toolBar:ToolBar{
        height: 58
        Label {
            id: label1
            x: 68
            y: 0
            width: 220
            height: 50
            text: qsTr("Panic Button")
            textFormat: Text.PlainText
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            transformOrigin: Item.Center
        }//end of toolbar label

        Button{
            x: -6
            y: -1
            width: 70
            height: 55
            Image {
                anchors.leftMargin: 4
                anchors.topMargin: -1
                sourceSize.height: 55
                sourceSize.width: 70
                anchors.rightMargin: 6
                anchors.bottomMargin: 1
                anchors.fill: parent
                source: "https://cdn4.iconfinder.com/data/icons/wirecons-free-vector-icons/32/menu-alt-512.png"
                fillMode: Image.Stretch
            }
            checkable: true
            checked: false
            Layout.minimumWidth: 100
            Layout.minimumHeight: 100
        }//end of menuButton
    }

    GridLayout {
        id: gridLayout1
        x: 0
        y: 0
        width: 360
        height: 442
    }

    Button {
        id: button1
        x: -2
        y: -6
        width: 185
        height: 228
        text: qsTr("Button")
    }

    Button {
        id: button2
        x: 177
        y: -6
        width: 186
        height: 229
        text: qsTr("Button")
    }

    Button {
        id: button3
        x: -2
        y: 215
        width: 185
        height: 228
        text: qsTr("Button")
    }

    Button {
        id: button4
        x: 177
        y: 214
        width: 186
        height: 229
        text: qsTr("Button")
    }

    //

 //end of toolbar

    
    
    
  }

