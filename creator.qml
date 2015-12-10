import QtQuick 2.0
import QtQuick.Controls 1.4
import QtQuick.Extras 1.4

Rectangle {
    width: 360
    height: 500

    Label {
        id: label1
        x: 33
        y: 77
        width: 144
        height: 21

        text: qsTr("Actions: Text Message ")
        color: "green"
    }

    Column {
        x: 243
        y: 115
        Switch { y: 0; width: 47;
            checked: true
         }
    }

    Column {
        x: 243
        y: 145
        Switch { width: 47;
            checked: true
         }
    }

    Column {
        x: 243
        y: 175
        Switch { width: 47;
            checked: true
         }
    }

    Label {
        id: label2
        x: 33
        y: 213
        width: 144
        height: 21
        text: qsTr("Actions: Phone Call ")
    }

    Column {
        x: 243
        y: 261
        Switch { width: 47;
            checked: true
         }
    }

    Column {
        x: 243
        y: 291
        Switch { width: 47;
            checked: true
         }
    }


    Label {
        id: label3
        x: 33
        y: 331
        width: 144
        height: 21
        text: qsTr("Actions: E-mail ")
    }

    Column {
        x: 243
        y: 378
        Switch { width: 47;
            checked: true
         }
    }

    Column {
        x: 243
        y: 408
        Switch { width: 47;
            checked: true
        }
    }

    Column {
        x: 243
        y: 438
        Switch { width: 47;
            checked: true
        }
    }

    Label {
        id: label4
        x: 48
        y: 115
        width: 98
        height: 16
        text: qsTr("GPS Location ")
    }

    Label {
        id: label5
        x: 48
        y: 378
        width: 98
        height: 16
        text: qsTr("GPS Location ")
    }

    Label {
        id: label6
        x: 48
        y: 256
        width: 98
        height: 16
        text: qsTr("GPS Location ")
    }

    Label {
        id: label7
        x: 48
        y: 145
        width: 98
        height: 16
        text: qsTr("Map Links")
    }

    Label {
        id: label8
        x: 48
        y: 291
        width: 98
        height: 16
        text: qsTr("Map Links")
    }

    Label {
        id: label9
        x: 48
        y: 408
        width: 98
        height: 16
        text: qsTr("Map Links")
    }

    Label {
        id: label10
        x: 48
        y: 175
        width: 98
        height: 16
        text: qsTr("Personal Message")
    }

    Label {
        id: label11
        x: 48
        y: 438
        width: 98
        height: 16
        text: qsTr("Personal Message")
    }






}

