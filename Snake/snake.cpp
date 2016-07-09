#include "snake.h"
#include <windows.h>
#include <QtGlobal>
#include <QDebug>


snake::snake(QObject *parent) : Coordinates(parent)
{
    directionMovement = Right;
}

void snake::snakeAlongTheXPosition(int x)
{
    for (int i=0; i < X.size(); i++)
        qDebug() << "i= " << i <<  X[i];
    this->X.push_back(x);
    this->positionX = x;
}

void snake::snakeAlongTheYPosition(int y)
{
    this->Y.push_back(y);
    this->positionY = y;
}

int snake::snakeMovementX()
{
    if (directionMovement == Right)
        rightMovement();

    if (directionMovement == Left)
        leftMovement();

    return this->positionX;
}
void snake::rightMovement()
{
   this->positionX = this->positionX + 20;
}

void snake::leftMovement()
{
    this->positionX = this->positionX - 20;
}
void snake::downMovement()
{
    this->positionY = this->positionY + 20;
}
void snake::upMovement()
{
    this->positionY = this->positionY - 20;
}

int snake::snakeMovementY()
{
    if (directionMovement == Up)
        upMovement();

    if (directionMovement == Down)
        downMovement();

    return this->positionY;
}


void snake::theChangeInDirectionOfMovementSnake(int x, int y)
{

    if (directionMovement == Right || directionMovement == Left) {
       horizontalMotion(y);
    }
    else {
       verticalMotion(x);
    }

}

int snake::movementTrunkX(int j)
{
    return this->X[this->X.size()-j];

}

int snake::movementTrunkY(int j)
{
    return this->Y[this->Y.size()-j];
}

void snake::clearLists(int j)
{
    for (int i = 0; i < this->X.size()-j; i++)
    {
        this->X.removeAt(i);
        this->Y.removeAt(i);
    }
}

void snake::verticalMotion(int x)
{
    if (x < this->positionX)
        directionMovement = Left;

    if (x > this->positionX)
        directionMovement = Right;

}

void snake::horizontalMotion(int y)
{
    if (y > this->positionY )
        directionMovement = Down;
    if (y < this->positionY)
        directionMovement = Up;
}
