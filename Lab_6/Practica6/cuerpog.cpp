#include "cuerpog.h"

cuerpog::cuerpog(float m_, float px_, float py_, float vx_, float vy_, float rad_)
{
    cuerpof = new cuerpo(m_,px_,py_,vx_,vy_, rad_);

    /*
    circulo = new QGraphicsEllipseItem(px_,py_,rad_,rad_);
    QPen pen(Qt:: darkGreen, 3, Qt::DashDotDotLine, Qt::RoundCap, Qt::RoundJoin);
    circulo->setPen(pen);
    QBrush brush("aaaa00", Qt::SolidPattern);
*/
}


QRectF cuerpog::boundingRect() const
{

    return QRectF(cuerpof->getPx(),cuerpof->getPy(),2*cuerpof->getRad(),2*cuerpof->getRad());

}

void cuerpog::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::darkBlue);
    //painter->drawRect(boundingRect());
    painter->drawEllipse(boundingRect());
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void cuerpog::posicion()
{
    setPos(cuerpof->getPx(),cuerpof->getPy());
}

void cuerpog::actualizar(float dt)
{
    cuerpof->mover(dt);
    posicion();

    /*
    cuerpof->setPx(cuerpof->getPx());
    cuerpof->setPy(cuerpof->getPy());
*/

}

cuerpo *cuerpog::getCuerpo() const
{
    return cuerpof;
}

void cuerpog::setCuerpo(cuerpo *value)
{
    cuerpof=value;
}
/*
float cuerpog::getEscala() const
{
    return escala;
}

void cuerpog::setEscala(float value)
{
    escala = value;
}
*/
