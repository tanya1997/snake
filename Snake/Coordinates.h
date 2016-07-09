#ifndef COORDINATES_H
#define COORDINATES_H

#include <QObject>
#include <QList>

class Coordinates : public QObject
{
    Q_OBJECT
public:
    explicit Coordinates(QObject *parent = 0);
protected:
    int positionX;
    int positionY;
    QList<int> X;
    QList<int> Y;

signals:

public slots:
};

#endif // COORDINATES_H
