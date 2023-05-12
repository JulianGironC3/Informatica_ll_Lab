#ifndef OBSTACULO_H
#define OBSTACULO_H
#include <QObject>
#include <QGraphicsRectItem>
#include <QPainter>


class obstaculo: public QObject
{
    Q_OBJECT
    int tipoImagen=1;
public:
    obstaculo(int tipoimagen);
    QRectF boundingRect() const; //necesario definirla, devuelve el rectangulo que encierra el objeto
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void setTipoImagen(int value);
};

#endif // OBSTACULO_H
