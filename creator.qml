import QtQuick 2.0
import QtQuick.Controls 1.4
import QtQuick.Extras 1.4

Rectangle {
    width: 360
    height: 500

    ListView {
        id: listView1
        x: -2
        y: 55
        width: 354
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
                id:page
                width: 344;height: 50 ;
                text: model.name
                onClicked: {
                    stackView.push({ item: stackView.items[Button.id], destroyOnPop:false })

                }
            }
    }






}

