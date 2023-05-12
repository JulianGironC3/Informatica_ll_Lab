#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include "jugador.h"
#include "obstaculo.h"
#include "obstaculodes.h"
#include <QList>
#include <QGraphicsItem>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void getsolidos();
    void keyPressEvent(QKeyEvent *event);

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    jugador *player1;
    QTimer *timer;
    QList <QGraphicsRectItem*> solidos;
    QGraphicsRectItem *obstaculo1;

    /*
    QGraphicsRectItem *rect;
    QGraphicsRectItem *rect1;
    QGraphicsRectItem *rect2;
    QGraphicsRectItem *rect3;
    QGraphicsRectItem *rect4;
    QGraphicsRectItem *rect5;
    QGraphicsRectItem *rect6;*/


};



#endif // MAINWINDOW_H
