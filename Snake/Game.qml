import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.0

ApplicationWindow {

    visible: true
    width: maximumWidth
    height: maximumHeight
    property var childRec: [100];
    property int it: 0;
    Image {
        id: image1
        width: maximumWidth
        height: maximumHeight
        fillMode: Image.Tile
        source: "../Pictures/Grass.jpg"

        Rectangle {
            id: head
            x: 200
            y: 100
            width: 20
            height: 20
            color: "#ffffff"
        }
        Rectangle {
            id: trunk
            x: 180
            y: 100
            width: 20
            height: 20
            color: "red"
        }
        Rectangle {
            id: tail
            x: 160
            y: 100
            width: 20
            height: 20
            color: "pink"
        }

        Timer {
            id:time
            interval: 1000
            repeat: true
            running: true
            onTriggered: {
                snake.snakeAlongTheXPosition(head.x)
                snake.snakeAlongTheYPosition(head.y)

                head.x = snake.snakeMovementX()
                head.y = snake.snakeMovementY()

                trunk.x = snake.snakeMovementX() - snake.snakeMovementTrunkX(head.x)
                trunk.y = snake.snakeMovementY() - snake.snakeMovementTrunkY(head.y)
            }

        }

        MouseArea {
            id: mouseArea1
            anchors.fill: parent
            onClicked: {
                it++;
                var component = Qt.createComponent("Rectangle.qml");

                childRec[it] = component.createObject(image1);
                childRec[it].x = trunk.x -it*20;
                childRec[it].y = trunk.y;

                childRec.width = 20;
                childRec.height = 20;
                childRec.color = "black"


                  var childRect = Qt.createQmlObject('import QtQuick 2.0; Timer {interval: 100; repeat: true; running: true
            onTriggered: {  for (var j = 1; j <= it; j++) {childRec[j].x = trunk.x - j*20; childRec[j].y = trunk.y}}}',image1);




                snake.theChangeInDirectionOfMovementSnake(mouseX, mouseY)

            }
        }
    }
}
