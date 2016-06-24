#ifndef SNAKE_H
#define SNAKE_H

#include <QObject>

class snake : public QObject
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
    int positionX;
    int positionY;
    int theDirectionOfMovement;
    int directionMovement;

signals:

public slots:

   int  snakeMovementX();
   int  snakeMovementY();
   void snakeAlongTheXPosition(int x = 0);
   void snakeAlongTheYPosition(int y = 0);
   void theChangeInDirectionOfMovementSnake(int x, int y);

};

#endif // SNAKE_H
