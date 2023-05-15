#include "jugador.h"

jugador::jugador(QGraphicsItem *carr): QGraphicsPixmapItem(carr)
{
    //imagen de 45x50
    setPixmap(QPixmap(":/Images/bom.png"));
    //scene->setBackgroundBrush(QBrush(QImage(":/imagenes/fondo")));
    //ellipse = new QGraphicsEllipseItem(0,0,100,100);
    //ellipse->setStartAngle(90*16);
    //ellipse->setSpanAngle(270*16);

}

int jugador::getX() const
{
    return x;
}

void jugador::setX(int value)
{
    x=value;
}

int jugador::getY() const
{
    return y;
}

void jugador::setY(int value)
{
    y= value;
}

void jugador::posicion()
{
    setPos(x,y);
}

void jugador::posicion(int newX, int newY)
{
    x=newX;
    y=newY;
    setPos(x,y);
}

