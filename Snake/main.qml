import QtQuick 2.7
import QtQuick.Controls 2.0
//import QtQuick.Controls 1.4
import QtQuick.Layouts 1.0

ApplicationWindow {
    id: mainMenu
    visible: true
    width: 250
    height: 350

    ColumnLayout {
        id: columnLayout1
        spacing: 3
        anchors.fill: parent

        Button {
            id: play
            text: qsTr("Играть")
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            onClicked: {gameWindow.visible = true; mainMenu.visible = false; update()}
        }

        Button {
            id: settings
            text: qsTr("Настройки")
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
        }

        Game {
            id: gameWindow
            visible: false
        }

        Button {
            id: score
            text: qsTr("Счёт")
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
        }

    }


}
