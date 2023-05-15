#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QTimer>

class enemigo : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    enemigo(QGraphicsItem* carr = 0);
    void posicione(int _x, int _y);

    int getX() const;
    void setX(int newX);

    int getY() const;
    void setY(int newY);

public slots:
    void mov();

private:
    int x;
    int y;
    int vel=5;
};

#endif // ENEMIGO_H
