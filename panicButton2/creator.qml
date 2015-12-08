import QtQuick 2.0
import QtQuick.Controls 1.4
import QtQuick.Extras 1.4

Rectangle {
    width: 360
    height: 500

    Text {
        id: text1
        x: 30
        y: 67
        width: 104
        height: 20
        text: qsTr("Action Name:")
        font.pixelSize: 12
    }

    Text {
        id: text2
        x: 30
        y: 135
        width: 104
        height: 22
        text: qsTr("Email:")
        font.pixelSize: 12
    }

    TextInput {
        id: textInput1
        x: 71
        y: 163
        width: 213
        height: 26
        text: qsTr("Text Input")
        font.pixelSize: 12
    }

    TextInput {
        id: textInput2
        x: 41
        y: 93
        width: 243
        height: 26
        text: qsTr("Text Input")
        font.pixelSize: 12
    }

    Button {
        id: button1
        x: 41
        y: 163
        width: 30
        height: 26
        text: qsTr("+")
    }

    Text {
        id: text3
        x: 30
        y: 208
        width: 104
        height: 20
        text: qsTr("GPS Location:")
        font.pixelSize: 12
    }

    Column {
        x: 43
        y: 236
        Switch { width: 47;
            checked: true
         }

    }

    Text {
        id: text4
        x: 30
        y: 265
        width: 104
        height: 20
        text: qsTr("Maps Link:")
        font.pixelSize: 12
    }

    Column {
        x: 41
        y: 293
        Switch { width: 47; checked: true }

    }

    Button {
        id: button2
        x: 30
        y: 439
        width: 300
        height: 34
        text: qsTr("Add Action")
    }

    Text {
        id: text5
        x: 30
        y: 325
        width: 104
        height: 20
        text: qsTr("Message:")
        font.pixelSize: 12
    }

    TextArea {
        id: textArea1
        x: 41
        y: 357
        width: 273
        height: 65
        text: "Message here"
    }




}

