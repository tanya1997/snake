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
            width: 40
            height: 40
            color: "#ffffff"
        }
        Timer {
            id:time
            interval: 100
            repeat: true
            running: true
            onTriggered: {
                snake.snakeAlongTheXPosition(rectangle1.x)
                snake.snakeAlongTheYPosition(rectangle1.y)

                rectangle1.x = snake.snakeMovementX()
                rectangle1.y = snake.snakeMovementY()
            }//rectangle1.x = snake.snakeMovementDown(rectangle1.x)

        }
    }

    MouseArea {
        id: mouseArea1
        anchors.fill: parent
        onClicked: {
            snake.theChangeInDirectionOfMovementSnake(mouseX, mouseY)
        }
    }


}
