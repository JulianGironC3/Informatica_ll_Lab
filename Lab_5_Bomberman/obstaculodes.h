#ifndef OBSTACULODES_H
#define OBSTACULODES_H
#include <QObject>
#include <QGraphicsRectItem>

class obstaculodes : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    obstaculodes(QGraphicsItem* carr = 0);
    void posicionod(int x, int y);

private:
    QGraphicsRectItem *obdes;

};

#endif // OBSTACULODES_H
