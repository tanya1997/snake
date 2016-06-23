import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.0

ApplicationWindow {
    visible: true
    width: maximumWidth
    height: maximumHeight

    Image {
        id: image1
        width: maximumWidth
        height: maximumHeight
        fillMode: Image.Tile
        source: "../Pictures/Grass.jpg"

        Rectangle {
            id: rectangle1
            x: 180
            y: 96
            width: 72
            height: 39
            color: "#ffffff"
        }
    }


}