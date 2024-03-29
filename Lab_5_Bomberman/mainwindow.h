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
#include "bomba.h"
#include "enemigo.h"
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
    void keyPressEvent(QKeyEvent *event);
    bool colicion();
    void explotar();

private slots:
    void explotarbum();
    void removerbum();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    jugador *player1;
    QTimer *timer;
    QList <obstaculo*> solidos;
    obstaculo *rect;
    QList <obstaculodes*> solidosdes;
    obstaculodes *obdes;
    bomba *bombap;
    QList <explosion* > bum;
    enemigo *enemigorand;

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
