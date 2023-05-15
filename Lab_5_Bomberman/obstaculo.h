#ifndef OBSTACULO_H
#define OBSTACULO_H
#include <QObject>
#include <QGraphicsRectItem>


class obstaculo: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    obstaculo(QGraphicsItem* carr = 0);
    void posicion(int x, int y);

private:
    QGraphicsRectItem *rect;
};

#endif // OBSTACULO_H
