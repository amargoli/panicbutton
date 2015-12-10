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
                push( { item: items[9], properties:{objectName:"login"}, destroyOnPop:false })
            }
            property variant items: [comp1.createObject(), comp2.createObject(), comp3.createObject(), comp4.createObject(), comp5.createObject(), comp6.createObject(), comp7.createObject(), comp8.createObject(), comp9.createObject(), comp10.createObject(), comp11.createObject(), comp12.createObject()]   // objects from the components
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
                        return item.objectName === "home";
                    }));
                    row.text1="PanicButton"


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
                    stackView.push({ item: stackView.items[2],properties:{objectName:"actions"}, destroyOnPop:false })
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
                    stackView.push({ item: stackView.items[7],properties:{objectName:"settings"}, destroyOnPop:false })
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
                    stackView.push({ item: stackView.items[3],properties:{objectName:"addactions"}, destroyOnPop:false })
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
                    x: 1
                    y: 55
                    width: 358
                    height: 205
                        model: ListModel{
                            id: listModel
                            ListElement{ name: "Chris"
                            page:5
                            nickName: "actiontextedit"
                            }
                            ListElement{ name: "Mother"
                            page:5
                            nickName: "actiontextedit"
                            }
                            ListElement{ name: "Father"
                            page:5
                            nickName: "actiontextedit"
                            }
                            ListElement{ name: "I.C.E"
                            page:5
                            nickName: "actiontextedit"
                            }
                        }

                        delegate: Button{
                            width: 358;height: 50 ;
                            text: model.name
                            onClicked: {
                                stackView.push({ item: stackView.items[page],properties:{objectName:nickName+name} })

                            }
                        }
                }
            }//end of Rectangle

        }//end of comp3


///////////////////////////////////// AddActions View  /////////////////////////////////////////////////


        Component{
            id: comp4

            Rectangle {
                width: 360
                height: 500

                Label {
                    id: text1
                    x: 44
                    y: 116
                    width: 132
                    height: 26
                    text: qsTr("Alert Type:")

                }

                ComboBox {
                    id: comboBox1
                    x: 72
                    y: 154
                    width: 217
                    height: 36

                    model: ListModel {
                            id: actionItems
                            ListElement { text: "Text Message"; }
                            ListElement { text: "Phone Call"; }
                            ListElement { text: "Email"; }
                            ListElement { text: "Voice Recording"; }
                        }//end of listmodel

                        //onCurrentIndexChanged: console.debug(currentText + ", " + actionItems.get(currentIndex).color)
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
                        stackView.push({ item: stackView.items[5],properties:{objectName:"actiontext"}, destroyOnPop:false })
                            row.text1="Add Actions: Text Mesage"
                        }else if(comboBox1.currentIndex == 1){
                            stackView.push({ item: stackView.items[4],properties:{objectName:"actionphonecall"}, destroyOnPop:false })
                            row.text1="Add Actions: Phone Call"

                        }else if(comboBox1.currentIndex == 2){
                            stackView.push({ item: stackView.items[6],properties:{objectName:"actionemail"}, destroyOnPop:false })
                            row.text1="Add Actions: Email"

                        }else if(comboBox1.currentIndex == 3){
                            stackView.push({ item: stackView.items[8],properties:{objectName:"actionrecording"}, destroyOnPop:false })
                            row.text1="Add Actions: Recording"

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

                Label {
                    id: text1
                    x: 30
                    y: 87
                    width: 104
                    height: 20
                    text: qsTr("Action Name:")

                }

                Label {
                    id: text2
                    x: 30
                    y: 155
                    width: 104
                    height: 22
                    text: qsTr("Phone Number:")

                }

                TextField {
                    id: textInput1
                    x: 76
                    y: 183
                    width: 213
                    height: 26
                    placeholderText: qsTr("Contact")

                }

                TextField {
                    id: textInput2
                    x: 41
                    y: 113
                    width: 243
                    height: 26
                    placeholderText: qsTr("Actions Name")

                }

                Button {
                    id: button1
                    x: 41
                    y: 178
                    width: 30
                    height: 26
                    text: qsTr("+")
                }

                Label {
                    id: text3
                    x: 30
                    y: 228
                    width: 104
                    height: 20
                    text: qsTr("GPS Location:")

                }

                Column {
                    x: 43
                    y: 256
                    Switch { width: 47;
                        checked: true
                     }

                }

                Label {
                    id: text4
                    x: 30
                    y: 285
                    width: 104
                    height: 20
                    text: qsTr("Maps Link:")

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
                    text: qsTr("Create Action")
                    onClicked: {
                        stackView.pop(stackView.find(function(item) {
                            return item.objectName === "home";
                        }));
                        row.text1="PanicButton"
                    }
                }




            }//end of rectangle
        }//end of comp5

/////////////////////////////////////  Text Action View  /////////////////////////////////////////////////
    Component{
        id:comp6
        Rectangle {

            Label {
                id: text1
                x: 30
                y: 67
                width: 104
                height: 20
                text: qsTr("Action Name:")

            }

            Label {
                id: text2
                x: 30
                y: 135
                width: 104
                height: 22
                text: qsTr("Phone Number:")

            }

            TextField {
                id: textInput1
                x: 71
                y: 163
                width: 213
                height: 26
                placeholderText: qsTr("Contacts")

            }

            TextField {
                id: textInput2
                x: 41
                y: 93
                width: 243
                height: 26
                placeholderText: qsTr("Action Name")

            }

            Button {
                id: button1
                x: 41
                y: 163
                width: 30
                height: 26
                text: qsTr("+")
            }

            Label {
                id: text3
                x: 30
                y: 208
                width: 104
                height: 20
                text: qsTr("GPS Location:")

            }

            Column {
                x: 43
                y: 236
                Switch { width: 47;
                    checked: true
                 }

            }

            Label {
                id: text4
                x: 30
                y: 265
                width: 104
                height: 20
                text: qsTr("Maps Link:")

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
                text: qsTr("Create Action")
                onClicked: {
                    stackView.pop(stackView.find(function(item) {
                        return item.objectName === "home";
                    }));
                    row.text1="PanicButton"
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


            Label {
                id: text1
                x: 30
                y: 67
                width: 104
                height: 20
                text: qsTr("Action Name:")

            }

            Label {
                id: text2
                x: 30
                y: 135
                width: 104
                height: 22
                text: qsTr("Email:")

            }

            TextField {
                id: textInput1
                x: 71
                y: 163
                width: 213
                height: 26
                placeholderText: qsTr("Contacts")

            }

            TextField {
                id: textInput2
                x: 41
                y: 93
                width: 243
                height: 26
                placeholderText: qsTr("Action Name")

            }

            Button {
                id: button1
                x: 41
                y: 163
                width: 30
                height: 26
                text: qsTr("+")
            }

            Label {
                id: text3
                x: 30
                y: 208
                width: 104
                height: 20
                text: qsTr("GPS Location:")

            }

            Column {
                x: 43
                y: 236
                Switch { width: 47;
                    checked: true
                 }

            }

            Label {
                id: text4
                x: 30
                y: 265
                width: 104
                height: 20
                text: qsTr("Maps Link:")

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
                text: qsTr("Create Action")
                onClicked: {
                    stackView.pop(stackView.find(function(item) {
                        return item.objectName === "home";
                    }));
                    row.text1="PanicButton"
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
                        nickName: "syncsettings"
                        }
                        ListElement{ name: "Actions"
                        page:11
                        nickName: "actionsettings"
                        }
                    }

                    delegate: Button{
                        width: 358;height: 50 ;
                        text: model.name
                        onClicked: {
                            stackView.push({ item: stackView.items[page],properties:{objectName:nickName}, destroyOnPop:false })

                        }
                    }
            }

        }//end of rectangle
    }//end of comp8


/////////////////////////////////////  Recording Action View  /////////////////////////////////////////////////


    Component{

        id:comp9

        Rectangle {


            Label {
                id: text1
                x: 30
                y: 87
                width: 104
                height: 20
                text: qsTr("Action Name:")

            }


            TextField {
                id: textInput2
                x: 41
                y: 113
                width: 243
                height: 26
                placeholderText: qsTr("Actions Name")

            }

            Button {
                id: button1
                x: 120
                y: 245
                width: 85
                height: 31
                text: qsTr("Play")
            }

            ComboBox {
                id: comboBox1
                x: 54
                y: 195
                width: 217
                height: 36

                model: ListModel {
                        id: recordingItems
                        ListElement { text: "Recording 1"; filename:"x.mp3"; }
                        ListElement { text: "Recording 2"; filename:"y.mp3"; }
                        ListElement { text: "Recording 3"; filename:"z.mp3"; }
                        ListElement { text: "Recording 4"; filename:"w.mp3"; }
                    }//end of listmodel

                    //onCurrentIndexChanged: console.debug(currentText + ", " + recordingItems.get(currentIndex).color)
            }//end of ComboBox

            Button {
                id: button2
                x: 30
                y: 412
                width: 300
                height: 34
                text: qsTr("Create Action")
                onClicked: {
                    stackView.pop(stackView.find(function(item) {
                        return item.objectName === "home";
                    }));
                    row.text1="PanicButton"
                }
            }




        }//end of Rectangle

    }//end of comp9



/////////////////////////////////////  Login View  /////////////////////////////////////////////////

    Component{
        id:comp10
        Rectangle{
            Rectangle {
                color:"#e2fc51"
                radius: 0
                border.width: 0
                opacity: 1
                clip: false
                visible: true
                x:0
                y:157
                width:360
                height:167

                TextField {
                    id: textInput1
                    x: 60
                    y: 28
                    width: 240
                    height: 39
                    readOnly: false
                    placeholderText: qsTr("User Name")

                }

                TextField {
                    id: textInput2
                    x: 60
                    y: 81
                    width: 240
                    height: 39
                    placeholderText: qsTr("Password")
                    font.pixelSize: 12
                }
            }
            Rectangle {
                color:"#3cec3c"
                x:0
                y:325
                width:360
                height:149

                Button {
                    id: logInButton
                    x: 30
                    y: 28
                    width: 300
                    height: 34
                    text: qsTr("Log In")
                    checkable: false
                    isDefault: false
                    activeFocusOnPress: false
                    onClicked: {
                        stackView.push({ item: stackView.items[0],properties:{objectName:"home"}, destroyOnPop:false })
                        row.visible = true

                    }

                }

                Button {
                    id: signUpButton
                    x: 30
                    y: 80
                    width: 300
                    height: 34
                    text: qsTr("Sign Up")
                    rotation: 0
                    onClicked: {
                        stackView.push({ item: stackView.items[10],properties:{objectName:"signup"}, destroyOnPop:false })

                    }
                }
            }
            Rectangle {
                color:"#60a2f6"
                border.width: 0
                x:0
                y:0
                width:360
                height:158

                Label {
                    id: label1
                    x: 31
                    y: 41
                    width: 298
                    height: 77
                    color: "#ffffff"
                    text: qsTr("PanicButton")
                    visible: true
                    opacity: 1
                    font.strikeout: false
                    font.italic: true
                    style: Text.Raised
                    font.bold: true
                    font.family: "Tahoma"
                    font.pointSize: 39
                    styleColor: "#fadcdc"
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignHCenter
                }
            }
        }//end of Rectangle

    }//end of comp10

/////////////////////////////////////  Signup View /////////////////////////////////////////////////

    Component{
        id:comp11

        Rectangle {


            TextField {
                id: textField1
                x: 61
                y: 123
                width: 238
                height: 28
                placeholderText: qsTr("First Name")
            }

            TextField {
                id: textField2
                x: 61
                y: 162
                width: 238
                height: 28
                placeholderText: qsTr("Last Name")
            }

            TextField {
                id: textField3
                x: 61
                y: 201
                width: 238
                height: 28
                placeholderText: qsTr("Email")
            }

            TextField {
                id: textField4
                x: 61
                y: 241
                width: 238
                height: 28
                placeholderText: qsTr("User Name")
            }

            TextField {
                id: textField5
                x: 61
                y: 285
                width: 238
                height: 28
                echoMode: 1
                placeholderText: qsTr("Password")
            }

            TextField {
                id: textField6
                x: 61
                y: 326
                width: 238
                height: 28
                echoMode: 1
                placeholderText: qsTr("Comfirm")
            }

            Button {
                id: signUpButton2
                x: 30
                y: 403
                width: 300
                height: 34
                text: qsTr("Sign Up")
                rotation: 0
                onClicked: {
                    stackView.push({ item: stackView.items[0],properties:{objectName:"home"}, destroyOnPop:false })
                    row.visible = true

                }
            }

            Label {
                id: label1
                x: 44
                y: 25
                width: 273
                height: 77
                color: "#1d25b0"
                text: qsTr("PanicButton")
                font.strikeout: false
                font.italic: true
                style: Text.Raised
                font.bold: true
                font.family: "Courier"
                font.pointSize: 39
                styleColor: "#fadcdc"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
            }

            Label {
                id: label2
                x: 131
                y: 443
                width: 97
                height: 16
                text: qsTr("Log In")
                font.italic: true
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter

                MouseArea {
                        anchors.fill: parent
                        onClicked:{
                            stackView.pop()

                        }
                    }
            }




        }//end of rectangle

    }//end of comp11

/////////////////////////////////////  Action Settings View /////////////////////////////////////////////////


    Component{
        id:comp12

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

        }//end of rectangle

    }//end of comp12

/////////////////////////////////////  ToolBar  /////////////////////////////////////////////////
        Row{
            id:row
            property alias text1: toolBarLabel.text
            visible: false
                    Rectangle{
                    id:toolBar2


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

                                if(stackView.currentItem.objectName === "home"){
                                stackView.push({ item: stackView.items[1],properties:{objectName:"menu"}, destroyOnPop:false })
                                row.text1="Menu"

                                }else{
                                    stackView.pop(stackView.find(function(item) {
                                        return item.objectName === "menu";
                                    }));

                                }

                            }//end of onclicked
                       }//end of menuButton
                 }//end of toolbar
                }//end of Rectangle


            }//end of Row



    
}//end of ApplicationWindow
