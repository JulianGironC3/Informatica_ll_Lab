#ifndef CUERPOG_H
#define CUERPOG_H
#include <QGraphicsItem>
#include <QPainter>
#include "cuerpo.h"

class cuerpog : public QGraphicsItem
{
public:

    cuerpog(float m_=0,float px_=0, float py_=0, float vx_=0, float vy_=0, float rad_=10);
    QRectF boundingRect() const; //devuelve el rectangulo que encierra el objeto
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget); //define como se pinta el objeto
    void posicion();//posicion incial inicial

    cuerpo *getCuerpo() const;
    void setCuerpo(cuerpo *value);

    /*float getEscala() const;
    void setEscala(float value);*/

    void actualizar(float dt);

private:
    cuerpo *cuerpof;
    //float escala;
    QGraphicsEllipseItem *circulo;

};

#endif // CUERPOG_H
