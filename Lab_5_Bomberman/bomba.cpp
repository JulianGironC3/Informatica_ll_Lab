#include "bomba.h"

bomba::bomba(QGraphicsItem *carr) : QGraphicsPixmapItem(carr)
{
    setPixmap(QPixmap(":/Images/bomb.png"));

}

void bomba::posicionb(int _x, int _y)
{
    x=_x;
    y=_y;
    setPos(_x,_y);
}

void bomba::explocion(int x,int y)
{
    explocionf = new explosion();
    explocionf->posicionex(getY(),getX());

}

int bomba::getY() const
{
    return y;
}

void bomba::setY(int newY)
{
    y = newY;
}

bomba::~bomba()
{
    delete rectbom;
}

int bomba::getX() const
{
    return x;
}

void bomba::setX(int newX)
{
    x = newX;
}

