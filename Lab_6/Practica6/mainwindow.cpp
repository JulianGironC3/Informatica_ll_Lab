#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene();
    //h_limit = 550;
    //v_limit = 550;
    scene->setSceneRect(0,0,1000,2000);
    ui->graphicsView0->setScene(scene);
    scene->addRect(scene->sceneRect());

    float m_=7000,px_=200,py_=150, vx_=2, vy_=0, rad_=80;

    float m_2=70,px_2=200,py_2=330, vx_2=-1.6, vy_2=1.2, rad_2=50;

    cuerpo1 = new cuerpog(m_,px_,py_, vx_, vy_, rad_);
    scene->addItem(cuerpo1);

    cuerpo2 = new cuerpog(m_2,px_2,py_2, vx_2, vy_2, rad_2);
    scene->addItem(cuerpo2);

    /*
    cuerpo3 = new cuerpog(70000,150,150,0,0,70);
    scene->addItem(cuerpo3);*/


    /*
    //m_,px_,py_, vx_, vy_, rad_
    cuerpo1 = new cuerpog(5000,0,0,0,0,20);
    scene->addItem(cuerpo1);

    cuerpo2 = new cuerpog(70,-500,0,0,0,70);

    scene->addItem(cuerpo2);

    cuerpo3 = new cuerpog(70,500,0,0,2,70);

    scene->addItem(cuerpo3);

    cuerpo4 = new cuerpog(70,0,-5000,2,0,70);

    scene->addItem(cuerpo4);

    cuerpo5 = new cuerpog(70,0,5000,-2,0,70);

    scene->addItem(cuerpo5);


*/

    timer= new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(actualizarc()));
    timer->start(100);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::aceleracion()
{
    float angl = qAtan(-1*(cuerpo2->getCuerpo()->getPy()+(cuerpo1->getCuerpo()->getPy()))/(cuerpo2->getCuerpo()->getPx() - cuerpo1->getCuerpo()->getPx()));
   float angl2 = qAtan(-1*(cuerpo1->getCuerpo()->getPy()+(cuerpo2->getCuerpo()->getPy()))/(cuerpo1->getCuerpo()->getPx() - cuerpo2->getCuerpo()->getPx()));

    float r=sqrt(qPow(cuerpo2->getCuerpo()->getPx() - cuerpo1->getCuerpo()->getPx(),2) + qPow(cuerpo2->getCuerpo()->getPy()+(cuerpo1->getCuerpo()->getPy()),2));
   float r2=sqrt(qPow(cuerpo1->getCuerpo()->getPx() - cuerpo2->getCuerpo()->getPx(),2) + qPow(cuerpo1->getCuerpo()->getPy()+(cuerpo2->getCuerpo()->getPy()),2));

    float ax=(g*cuerpo2->getCuerpo()->getM()/qPow(r,2))*cos(angl);
    float ay=(g*cuerpo2->getCuerpo()->getM()/qPow(r,2))*sin(angl);
    cuerpo1->getCuerpo()->setAx(ax);
    cuerpo1->getCuerpo()->setAy(ay);


    float ax2=(g*cuerpo1->getCuerpo()->getM()/qPow(r2,2))*cos(angl2);
    float ay2=(g*cuerpo1->getCuerpo()->getM()/qPow(r2,2))*sin(angl2);
    cuerpo2->getCuerpo()->setAx(ax2);
    cuerpo2->getCuerpo()->setAy(ay2);

}

/*void MainWindow::bordercollision(cuerpog *b)
{
    if(b->getEsfera()->getPx() < b->getEsfera()->getRad() || b->getEsfera()->getPx() > h_limit-b->getEsfera()->getRad()){
        b->getEsfera()->setVx(b->getEsfera()->getVx()*-0.8);
    }

    if(b->getEsfera()->getPy() < b->getEsfera()->getRad() || b->getEsfera()->getPy() > v_limit-b->getEsfera()->getRad()){
        b->getEsfera()->setVy(b->getEsfera()->getVy()*-0.8);
    }


}*/

void MainWindow::actualizarc()
{
    cuerpo1->actualizar(dt);
    cuerpo2->actualizar(dt);

    //cuerpo3->actualizar(dt);
    /*
    cuerpo4->actualizar(dt);
    cuerpo5->actualizar(dt);
*/
    aceleracion();
    cout<< "x1: "<<cuerpo1->getCuerpo()->getPx() <<"    "<< "y1: "<< cuerpo1->getCuerpo()->getPy()<< endl;
    cout<< "x2: "<<cuerpo2->getCuerpo()->getPx() <<"    "<< "y2: "<< cuerpo2->getCuerpo()->getPy()<< endl;
    //cout<< "x3: "<<cuerpo3->getCuerpo()->getPx() <<"    "<< "y3: "<< cuerpo3->getCuerpo()->getPy()<< endl;

}


