import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.0

ApplicationWindow {

    visible: false
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

        Timer {
            id:time
            interval: 500
            repeat: true
            running: true
            onTriggered: {
                snake.clearLists(it);
                snake.snakeAlongTheXPosition(head.x)
                snake.snakeAlongTheYPosition(head.y)

                head.x = snake.snakeMovementX()
                head.y = snake.snakeMovementY()

            }

        }

        MouseArea {
            id: mouseArea1
            anchors.fill: parent
            onClicked: {
                it++;
                var component = Qt.createComponent("Rectangle.qml");

                childRec[it] = component.createObject(image1);


                childRec[it].x = snake.movementTrunkX(it);
                childRec[it].y = snake.movementTrunkY(it);


                childRec.width = 20;
                childRec.height = 20;
                childRec.color = "yellow"



                   snake.theChangeInDirectionOfMovementSnake(mouseX, mouseY)
                  var childRect = Qt.createQmlObject('import QtQuick 2.0; Timer {interval: 100; repeat: true; running: true
            onTriggered: {  for (var j = 1; j <= it; j++) { childRec[j].x = snake.movementTrunkX(j); childRec[j].y = snake.movementTrunkY(j);}}}',image1);


            }
        }
    }
}
