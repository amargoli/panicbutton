import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2


ApplicationWindow {
    visible: true
    width: 360
    height: 500
    id: mainWindow



        StackView {
            id: stackView
            anchors.fill: parent
            Component.onCompleted: {
                push( { item: items[0], destroyOnPop:false })
            }
            property variant items: [comp1.createObject(), comp2.createObject(), comp3.createObject(), comp4.createObject(), comp5.createObject(), comp6.createObject(), comp7.createObject(), comp8.createObject()]   // objects from the components
        }//end of stackview

///////////////////////////////////// Home View  /////////////////////////////////////////////////

        Component{
            id:comp1

            Rectangle{

                Button {
                    id: panicButton
                    x: 105
                    y: 188
                    width: 150
                    height: 125
                    text: qsTr("Push Me")
                    onClicked: {
                        label2.text= qsTr("Everything is going to be Alright!")

                    }
                }

                Label {
                    id: label2
                    x: 83
                    y: 319
                    width: 195
                    text: qsTr("Hold for 5 Seconds ")
                    horizontalAlignment: Text.AlignHCenter
                }//end of label
        }//end of Rectangle
       }//end of comp1


///////////////////////////////////// Menu View  /////////////////////////////////////////////////


        Component{
            id:comp2


            Rectangle{


            Button {
                id: button1
                x: -2
                y: 55
                width: 185
                height: 228
                text: qsTr("Home")
                onClicked: {
                    stackView.pop(stackView.find(function(item) {
                        return item.name === "comp1";
                    }));


                }
            }

            Button {
                id: button2
                x: 177
                y: 55
                width: 186
                height: 229
                text: qsTr("Actions")
                onClicked: {
                    stackView.push({ item: stackView.items[2], destroyOnPop:false })
                    row.text1="Actions"
                }
            }

            Button {
                id: button3
                x: -2
                y: 276
                width: 185
                height: 228
                text: qsTr("Settings")
                onClicked: {
                    stackView.push({ item: stackView.items[7], destroyOnPop:false })
                    row.text1="Settings"
                }
            }

            Button {
                id: button4
                x: 177
                y: 276
                width: 186
                height: 229
                text: qsTr("Add Actions")
                onClicked: {
                    stackView.push({ item: stackView.items[3], destroyOnPop:false })
                    row.text1="Add Actions"
                }
            }



        }//end of rectangle


        }//end of comp2


///////////////////////////////////// Actions View  /////////////////////////////////////////////////


        Component{
            id:comp3
            Rectangle {


                ListView {
                    id: listView1
                    x: 0
                    y: 55
                    width: 344
                    height: 237
                    delegate: Rectangle {
                        x: 5
                        width: 344
                        height: 40
                        border.color: "black"
                        border.width: 2

                        Row {
                            id: row1
                            spacing: 10


                            Text {
                                text: name
                                font.bold: true
                                //anchors.verticalCenter: parent.verticalCenter
                            }
                            MouseArea {
                                            id: mouseArea
                                            anchors.fill: parent
                                            onClicked:name.text += " Clicked";
                                        }

                        }
                    }
                    model: ListModel {
                        ListElement {
                            name: "Chris"



                        }

                        ListElement {
                            name: "Mother"


                        }

                        ListElement {
                            name: "Father"


                        }

                        ListElement {
                            name: "I.C.E"


                        }
                    }//end of ListModel
                }//end of ListView
            }//end of Rectangle

        }//end of comp3


///////////////////////////////////// AddActions View  /////////////////////////////////////////////////


        Component{
            id: comp4

            Rectangle {
                width: 360
                height: 500

                Text {
                    id: text1
                    x: 44
                    y: 116
                    width: 132
                    height: 26
                    text: qsTr("Alert Type:")
                    font.pixelSize: 12
                }

                ComboBox {
                    id: comboBox1
                    x: 72
                    y: 154
                    width: 217
                    height: 36

                    model: ListModel {
                            id: actionItems
                            ListElement { text: "Text Message"; color: "Yellow" }
                            ListElement { text: "Phone Call"; color: "Green" }
                            ListElement { text: "Email"; color: "Brown" }
                            ListElement { text: "Voice Recording"; color: "Red" }
                        }//end of listmodel

                        onCurrentIndexChanged: console.debug(currentText + ", " + actionItems.get(currentIndex).color)
                }//end of ComboBox

                Button {
                    id: button2
                    x: 30
                    y: 412
                    width: 300
                    height: 34
                    text: qsTr("Continue")
                    onClicked:{
                        if(comboBox1.currentIndex == 0){
                        stackView.push({ item: stackView.items[5], destroyOnPop:false })
                            row.text1="Add Actions: Text Mesage"
                        }else if(comboBox1.currentIndex == 1){
                            stackView.push({ item: stackView.items[4], destroyOnPop:false })
                            row.text1="Add Actions: Phone Call"

                        }else if(comboBox1.currentIndex == 2){
                            stackView.push({ item: stackView.items[6], destroyOnPop:false })
                            row.text1="Add Actions: Email"

                        }
                    }//end of onClicked
                }//end of button


            }//end of rectangle

        }//end of comp4

///////////////////////////////////// Phone Action View  /////////////////////////////////////////////////
        Component{
            id:comp5

            Rectangle {
                width: 360
                height: 500

                Text {
                    id: text1
                    x: 30
                    y: 87
                    width: 104
                    height: 20
                    text: qsTr("Action Name:")
                    font.pixelSize: 12
                }

                Text {
                    id: text2
                    x: 30
                    y: 155
                    width: 104
                    height: 22
                    text: qsTr("Phone Number:")
                    font.pixelSize: 12
                }

                TextInput {
                    id: textInput1
                    x: 76
                    y: 183
                    width: 213
                    height: 26
                    text: qsTr("Contact")
                    font.pixelSize: 12
                }

                TextInput {
                    id: textInput2
                    x: 41
                    y: 113
                    width: 243
                    height: 26
                    text: qsTr("Actions Name")
                    font.pixelSize: 12
                }

                Button {
                    id: button1
                    x: 41
                    y: 178
                    width: 30
                    height: 26
                    text: qsTr("+")
                }

                Text {
                    id: text3
                    x: 30
                    y: 228
                    width: 104
                    height: 20
                    text: qsTr("GPS Location:")
                    font.pixelSize: 12
                }

                Column {
                    x: 43
                    y: 256
                    Switch { width: 47;
                        checked: true
                     }

                }

                Text {
                    id: text4
                    x: 30
                    y: 285
                    width: 104
                    height: 20
                    text: qsTr("Maps Link:")
                    font.pixelSize: 12
                }

                Column {
                    x: 41
                    y: 313
                    Switch { width: 47; checked: true }

                }

                Button {
                    id: button2
                    x: 30
                    y: 412
                    width: 300
                    height: 34
                    text: qsTr("Add Action")
                    onClicked: {
                        stackView.pop(stackView.find(function(item) {
                            return item.name === "comp1";
                        }));
                    }
                }




            }//end of rectangle
        }//end of comp5

/////////////////////////////////////  Text Action View  /////////////////////////////////////////////////
    Component{
        id:comp6
        Rectangle {

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
                text: qsTr("Phone Number:")
                font.pixelSize: 12
            }

            TextInput {
                id: textInput1
                x: 71
                y: 163
                width: 213
                height: 26
                text: qsTr("Contacts")
                font.pixelSize: 12
            }

            TextInput {
                id: textInput2
                x: 41
                y: 93
                width: 243
                height: 26
                text: qsTr("Action Name")
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
                onClicked: {
                    stackView.pop(stackView.find(function(item) {
                        return item.name === "comp1";
                    }));
                }
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




        }//end of rectangle
    }//end of comp6

/////////////////////////////////////  Email Action View  /////////////////////////////////////////////////


    Component{
        id:comp7
        Rectangle {


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
                text: qsTr("Contacts")
                font.pixelSize: 12
            }

            TextInput {
                id: textInput2
                x: 41
                y: 93
                width: 243
                height: 26
                text: qsTr("Action Name")
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
                onClicked: {
                    stackView.pop(stackView.find(function(item) {
                        return item.name === "comp1";
                    }));
                }
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




        }//end of rectangle
    }//end of comp7


 /////////////////////////////////////  Settings View  /////////////////////////////////////////////////


    Component{
        id:comp8

        Rectangle {


            ListView {
                id: listView1
                x: 1
                y: 55
                width: 358
                height: 205
                    model: ListModel{
                        id: listModel
                        ListElement{ name: "Sync"
                        page:8
                        }
                        ListElement{ name: "Actions:Text Message"
                        page:5
                        }
                        ListElement{ name: "Actions:Phone"
                        page:4
                        }
                        ListElement{ name: "Actions:Email"
                        page:6
                        }

                    }

                    delegate: Button{
                        width: 358;height: 50 ;
                        text: model.name
                        onClicked: {
                            stackView.push({ item: stackView.items[page], destroyOnPop:false })

                        }
                    }
            }






        }//end of rectangle
    }//end of comp8

/////////////////////////////////////  ToolBar  /////////////////////////////////////////////////
        Row{
            id:row
            property alias text1: toolBarLabel.text
                    Rectangle{
                    id:toolBar2
                    color: "red"

                    ToolBar{
                        id:toolBar
                        anchors.top: parent.top
                            height: 58
                        Label {
                            id: toolBarLabel
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
                            y: -3
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
                                source: "qrc:/../Desktop/menu_button.png"
                                fillMode: Image.Stretch
                            }
                            checkable: false
                            checked: false

                            //Layout.minimumWidth: 100
                            //Layout.minimumHeight: 100
                            onClicked:{
                                stackView.push({ item: stackView.items[1], destroyOnPop:false })
                                row.text1="Menu"

                            }
                       }//end of menuButton
                 }//end of toolbar
                }//end of Rectangle


            }//end of Row



    
}//end of ApplicationWindow
