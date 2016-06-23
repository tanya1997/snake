import QtQuick 2.7
import QtQuick.Controls 2.0
//import QtQuick.Controls 1.4
import QtQuick.Layouts 1.0

ApplicationWindow  {
    visible: true
    width: 250
    height: 400

    Button {
        id: button1
        x: 63
        y: 78
        text: qsTr("Играть")
        onClicked: gameWindow.visible = true
    }

    Button {
        id: button2
        x: 63
        y: 150
        text: qsTr("Счёт")
    }

    Game {
        id: gameWindow
        visible: false
    }


}
