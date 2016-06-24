#include "snake.h"
#include <QDebug>
#include <windows.h>

snake::snake(QObject *parent) : QObject(parent)
{
    directionMovement = Right;
}

void snake::snakeAlongTheXPosition(int x)
{
    positionX = x;
}

void snake::snakeAlongTheYPosition(int y)
{
    positionY = y;
}

int snake::snakeMovementX()
{
    Sleep(10);
    switch (directionMovement) {
    case Right:
        positionX = positionX + 5;
        break;
    case Left:
        positionX = positionX - 5;
    default:
        break;

    }
    return positionX;

}
int snake::snakeMovementY()
{
    switch (directionMovement) {
    case Down:
        positionY = positionY + 5;
        break;
    case Up:
        positionY = positionY - 5;
    default:
        break;
    }
    return positionY;
}
void snake::theChangeInDirectionOfMovementSnake(int x, int y)
{

    if (directionMovement == Right || directionMovement == Left)
    {
        if (y > positionY )
            directionMovement = Down;
        if (y < positionY)
            directionMovement = Up;
    }
    else
    {
        if (x < positionX)
            directionMovement = Left;
        if (x > positionX)
            directionMovement = Right;
    }


}
