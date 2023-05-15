#ifndef JUGADOR_H
#define JUGADOR_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

class jugador:  public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    int x;
    int y;
    //QGraphicsEllipseItem *ellipse;
public:
    jugador(QGraphicsItem* carr = 0);

    int getX() const;
    void setX(int value);
    int getY() const;
    void setY(int value);

    void posicion();
    void posicion(int newX, int newY);



};

#endif // JUGADOR_H
