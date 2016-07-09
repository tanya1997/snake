#ifndef SNAKE_H
#define SNAKE_H

#include <QObject>
#include <QQueue>
#include <QList>
#include <Coordinates.h>

class snake : public Coordinates
{
    Q_OBJECT
public:
    explicit snake(QObject *parent = 0);
    enum Direction {
        Down = 1,
        Up,
        Right,
        Left
    };

private:

    int directionMovement;
    void verticalMotion(int x);
    void horizontalMotion(int y);
    void rightMovement();
    void leftMovement();
    void upMovement();
    void downMovement();




signals:

public slots:
   int snakeMovementX();
   int movementTrunkX(int j);
   int movementTrunkY(int j);

   void clearLists(int j);

   int  snakeMovementY();
   void snakeAlongTheXPosition(int x = 0);
   void snakeAlongTheYPosition(int y = 0);
   void theChangeInDirectionOfMovementSnake(int x, int y);

};

#endif // SNAKE_H
