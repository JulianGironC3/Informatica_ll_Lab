#include "explosion.h"

explosion::explosion(QGraphicsItem *carr): QGraphicsPixmapItem(carr)
{
    setPixmap(QPixmap(":/Images/fire.png"));
}

void explosion::posicion(int x,int y)
{
    setPos(x,y);
}
