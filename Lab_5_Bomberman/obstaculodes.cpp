#include "obstaculodes.h"


obstaculodes::obstaculodes(QGraphicsItem *carr):QGraphicsPixmapItem(carr)
{
    setPixmap(QPixmap(":/Images/destroyableBlock.png"));
}

void obstaculodes::posicionod(int x, int y)
{
    setPos(x,y);
}
