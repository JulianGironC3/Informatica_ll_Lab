#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(); //creamos la escena

    scene->setSceneRect(0,0,700,500); // agaregamos el rectangulo
    ui->graphicsView->setScene(scene); // pintamos en rectangulo
    scene->addRect(scene->sceneRect());

    player1 = new jugador();
    player1->posicion(0,0);
    scene->addItem(player1);

/*
    rect = new QGraphicsRectItem(-25,-25,50,50);
    rect->setPos(50*2,25);
    scene->addItem(rect);

    rect1 = new QGraphicsRectItem(-25,-25,50,50);
    rect1->setPos(50*4,25);
    scene->addItem(rect1);

    rect2 = new QGraphicsRectItem(-25,-25,50,50);
    rect2->setPos(50*6,25);
    scene->addItem(rect2);

    rect3 = new QGraphicsRectItem(-25,-25,50,50);
    rect3->setPos(50*8,25);
    scene->addItem(rect3);


    rect4 = new QGraphicsRectItem(-25,-25,50,50);
    rect4->setPos(50*10,25);
    scene->addItem(rect4);


    rect5 = new QGraphicsRectItem(-25,-25,50,50);
    rect5->setPos(50*12,25);
    scene->addItem(rect5);

    rect6 = new QGraphicsRectItem(-25,-25,50,50);
    rect6->setPos(0,200);
    scene->addItem(rect6) */

    for(int i=1; i<7;i++){
        solidos.append(new QGraphicsRectItem(-26,-25,50,50));
        solidos.last()->setPos(50*i*2,25);
        scene->addItem(solidos.last());

    }
    for(int i=1; i<7;i++){
        solidos.append(new QGraphicsRectItem(-26,-25,50,50));
        solidos.last()->setPos(50*i*2,25*4+30);
        scene->addItem(solidos.last());

    }
    for(int i=1; i<7;i++){
        solidos.append(new QGraphicsRectItem(-26,-25,50,50));
        solidos.last()->setPos(50*i*2,25*8+35);
        scene->addItem(solidos.last());

    }
    for(int i=1; i<7;i++){
        solidos.append(new QGraphicsRectItem(-26,-25,50,50));
        solidos.last()->setPos(50*i*2,25*12+40);
        scene->addItem(solidos.last());

    }
    for(int i=1; i<7;i++){
        solidos.append(new QGraphicsRectItem(-26,-25,50,50));
        solidos.last()->setPos(50*i*2,25*16+50);
        scene->addItem(solidos.last());

    }
    for(int i=1; i<7;i++){
        solidos.append(new QGraphicsRectItem(-26,-25,50,50));
        solidos.last()->setPos(50*i*2,-25*11);
        scene->addItem(solidos.last());

    }
    for(int i=1; i<7;i++){
        solidos.append(new QGraphicsRectItem(-26,-25,50,50));
        solidos.last()->setPos(50*i*2,-25*13);
        scene->addItem(solidos.last());

    }
    obstaculo1 = new QGraphicsRectItem(-25,-25,50,50);









}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getsolidos()
{
    if(true)
    {

    }
}

void MainWindow::keyPressEvent(QKeyEvent *event){

    if(event->key()== Qt::Key_A && player1->getX()>0){//colisiona con los bordes

        for (auto item: solidos){}
            if(player1->collidesWithItem(obstaculo1)){
                player1->setX(player1->getX()+10);
            }


        //if (!player1->collidesWithItem(solidos.last())) player1->setX(player1->getX()-10);
        //if (!jugador->collidesWithItem(rect)) jugador->setX(jugador->getX()-vel);
       else player1->setX(player1->getX()-10);

    }

    if(event->key()== Qt::Key_S && player1->getY()<scene->height()-50){
        //if (!jugador->collidesWithItem(rect)) jugador->setY(jugador->getY()+vel);
       player1->setY(player1->getY()+10);
    }

    if(event->key()== Qt::Key_D && player1->getX()<scene->width()-50){
        //if (!jugador->collidesWithItem(rect)) jugador->setX(jugador->getX()+vel);
       player1->setX(player1->getX()+10);
    }

    if(event->key()== Qt::Key_W && player1->getY()>0){
        //if (!jugador->collidesWithItem(rect)) jugador->setY(jugador->getY()-vel);
        player1->setY(player1->getY()-10);

    }

    //if(event->key()== Qt::Key_M){
       // if(timer->isActive()) timer->stop();
         //timer->start(8);



    player1->posicion();
}
