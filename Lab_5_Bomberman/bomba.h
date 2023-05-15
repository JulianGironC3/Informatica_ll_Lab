#ifndef BOMBA_H
#define BOMBA_H
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include "explosion.h"

class bomba:  public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    bomba(QGraphicsItem* carr = 0);
    void posicionb(int _x,int _y);

    int getX() const;
    void setX(int newX);

    int getY() const;
    void setY(int newY);


    ~bomba();

public slots:
    void explocion(int x,int y);

private:
    int x;
    int y;

    QGraphicsRectItem *rectbom;
    QTimer *timer;
    explosion *explocionf;
};

#endif // BOMBA_H
