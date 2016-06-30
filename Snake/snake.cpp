#include "snake.h"
#include <QDebug>
#include <windows.h>

snake::snake(QObject *parent) : QObject(parent)
{
    directionMovement = Right;
    count = 0;
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
        positionX = positionX + 20;
        break;
    case Left:
        positionX = positionX - 20;
    default:
        break;
    }
    return positionX;

}
int snake::snakeMovementY()
{
    switch (directionMovement) {
    case Down:
        positionY = positionY + 20;
        break;
    case Up:
        positionY = positionY - 20;
    default:
        break;
    }
    return positionY;
}
int snake::snakeMovementTrunkX(int x)
{
    if (positionX != x)
        return 40;
    else return 0;
}
int snake::snakeMovementTrunkY(int y)
{
    if (positionY != y)
        if (directionMovement == Up)
             return 40 * (-1);
        else
             return 40;
    else
    return 0;
}
int snake::snakeMovementTailX(int x)
{
    qDebug() << count;
    if (positionX != x)
        return 80;
    else
        if (count > 0)
        {
            count--;
            return 20;
        }
    else return 0;
}
int snake::snakeMovementTailY(int y)
{
    if (positionY != y)
        if (count > 0)
        {
            count--;
            return 60;
        }
         else
            return 80;
    else
    return 0;
}
void snake::theChangeInDirectionOfMovementSnake(int x, int y)
{

    if (directionMovement == Right || directionMovement == Left)
       horizontalMotion(y);
    else
        verticalMotion(x);
    qDebug() << count;

}
void snake::verticalMotion(int x)
{
    if (x < positionX)
        directionMovement = Left;

    if (x > positionX)
        directionMovement = Right;

}

void snake::horizontalMotion(int y)
{
    if (y > positionY )
        directionMovement = Down;
    if (y < positionY)
        directionMovement = Up;
    count = count + 2;
}
