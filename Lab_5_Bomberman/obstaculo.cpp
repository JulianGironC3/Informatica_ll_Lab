#include "obstaculo.h"


obstaculo::obstaculo(QGraphicsItem *carr):QGraphicsPixmapItem(carr)
{
    setPixmap(QPixmap(":/Images/unDestroyableBlock.png"));
}

void obstaculo::posicion(int x, int y)
{
    setPos(x,y);
}


/*
QRectF obstaculo::boundingRect() const
{
    return QRectF(0,0,50,50);
}

void obstaculo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{//Grafica
    QPixmap qpixmap(":/Images/unDestroyableBlock.png");
    painter->drawPixmap(0,0,50,50,qpixmap);

}

void obstaculo::setTipoImagen(int value)
{

}*/
