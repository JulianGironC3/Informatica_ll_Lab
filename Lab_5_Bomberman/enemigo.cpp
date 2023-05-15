#include "enemigo.h"

enemigo::enemigo(QGraphicsItem *carr): QGraphicsPixmapItem(carr)
{
    setPixmap(QPixmap(":/Images/playmove.png"));

    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(mov()));
    timer->start(5000);
}

void enemigo::posicione(int _x,int _y)
{
    x=_x;
    y=_y;
    setPos(x,y);

}

int enemigo::getX() const
{
    return x;
}

void enemigo::setX(int newX)
{
    x = newX;
}

int enemigo::getY() const
{
    return y;
}

void enemigo::setY(int newY)
{
    y = newY;
}

void enemigo::mov()
{
    if(getX()>=0 and getX()<=650) setX(getX()-50);
    else setX(getX()+50);

    if(getY()>0) setY(getY()+50);
    else setY(getY()-50);

    if(getX()>=650) setX(getX()+50);
    else setX(getX()-50);

    if(getY()<=450) setY(getY()+50);
    else setY(getY()-50);

    posicione(getX(),getY());
}
