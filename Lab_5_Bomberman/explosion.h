#ifndef EXPLOSION_H
#define EXPLOSION_H
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>

class explosion: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explosion(QGraphicsItem *carr=0);
    void posicionex(int x,int y);
};

#endif // EXPLOSION_H
