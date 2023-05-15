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

    enemigorand = new enemigo();
    enemigorand->posicione(650,0);
    scene->addItem(enemigorand);
    //se crea un vector con objetos obstaculos para despues mostrarlos
    for(int i=1; i<7;i++){
        solidos.push_back(new obstaculo);
        solidos.last()->posiciono(50*i*2,0);
        scene->addItem(solidos.back());
    }

    for(int i=1; i<7;i++){
        solidos.push_back(new obstaculo);
        solidos.last()->posiciono(50*i*2,50*1+55);
        scene->addItem(solidos.last());

    }
    for(int i=1; i<7;i++){
        solidos.push_back(new obstaculo);
        solidos.last()->posiciono(50*i*2,50*3+55);
        scene->addItem(solidos.last());

    }
    for(int i=1; i<7;i++){
        solidos.push_back(new obstaculo);
        solidos.last()->posiciono(50*i*2,50*6+5);
        scene->addItem(solidos.last());

    }
    for(int i=1; i<7;i++){
        solidos.push_back(new obstaculo);
        solidos.last()->posiciono(50*i*2,50*8+5);
        scene->addItem(solidos.last());

    }
    for(int i=1; i<7;i++){
        solidos.push_back(new obstaculo);
        solidos.last()->posiciono(50*i*2,50*11+5);
        scene->addItem(solidos.last());

    }
    for(int i=1; i<7;i++){
        solidos.push_back(new obstaculo);
        solidos.last()->posiciono(50*i*2,50*15+5);
        scene->addItem(solidos.last());

    }


    ///Aparecen obstaculos destructibles
    ///
    ///

        solidosdes.push_back(new obstaculodes);
        solidosdes.last()->posicionod(50,0);
        scene->addItem(solidosdes.last());





    int a=5; //variable de y
for(int i=0; i<3;i++){//FILA 1
    solidosdes.push_back(new obstaculodes);
    if (a==405) a=455;
    if (a==155) a=405;
    if (a==5) a=155;
    solidosdes.last()->posicionod(0,a);
    scene->addItem(solidosdes.back());
}
a=5;
for(int i=0; i<3;i++){//FILA 2
    solidosdes.push_back(new obstaculodes);
    if(a==205) a=255;
    if(a==155) a=205;
    if(a==5) a=155;
    solidosdes.last()->posicionod(50,a);
    scene->addItem(solidosdes.last());


}
a=0;
for(int i=0; i<4;i++){//FILA 4
    solidosdes.push_back(new obstaculodes);
    solidosdes.last()->posicionod(150,a);
    if(a==105) a=205;
    if(a==55) a=105;
    if(a==0) a=55;

    scene->addItem(solidosdes.last());

}
a=255;
for(int i=1; i<7;i++){//FILA 6
    solidosdes.push_back(new obstaculodes);
    cout << a;
    solidosdes.last()->posicionod(250,a);
    if(a==405) a=450;
    if(a==305) a=405;
    if(a==255) a=305;
    scene->addItem(solidosdes.last());

}
a=50;
for(int i=0; i<4;i++){//FILA 7
    solidosdes.push_back(new obstaculodes);
    solidosdes.last()->posicionod(350,a);
    if(a==205) a=255;
    if(a==105) a=205;
    if(a==50) a=105;
    scene->addItem(solidosdes.last());
}

for(int i=0; i<1;i++){//FILA 8
    solidosdes.push_back(new obstaculodes);
    solidosdes.last()->posicionod(400,350);
    scene->addItem(solidosdes.last());

}
a=350;
for(int i=0; i<3;i++){//FILA 9
    solidosdes.push_back(new obstaculodes);
    solidosdes.last()->posicionod(450,a);
    if(a==405) a=455;
    if(a==350) a=405;
    scene->addItem(solidosdes.last());
}
for(int i=1; i<7;i++){//FILA 10
    solidosdes.push_back(new obstaculodes);
    solidosdes.last()->posicionod(500,50);
    scene->addItem(solidosdes.last());

}
a=0;
for(int i=0; i<3;i++){//FILA 11
    solidosdes.push_back(new obstaculodes);
    solidosdes.last()->posicionod(550,a);
    if(a==50) a=255;
    if(a==0) a=50;
    scene->addItem(solidosdes.last());

}
for(int i=0; i<1;i++){//FILA 1
    solidosdes.push_back(new obstaculodes);
    solidosdes.last()->posicionod(600,50);
    scene->addItem(solidosdes.last());

}
a=305;
for(int i=0; i<4;i++){//FILA 11
    solidosdes.push_back(new obstaculodes);
    solidosdes.last()->posicionod(650,a);
    if(a==405) a=455;
    if(a==355) a=405;
    if(a==305) a=355;
    scene->addItem(solidosdes.last());

}
//---------------------------------------------------------





}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::keyPressEvent(QKeyEvent *event){
    if(event->key()==Qt::Key_Space) explotar();

    if(event->key()== Qt::Key_A && player1->getX()>0){//colisiona con los bordes
        if (colicion()==true) player1->setX(player1->getX()+10);

        player1->setX(player1->getX()-5);
    }


    if(event->key()== Qt::Key_S && player1->getY()<scene->height()-50){
        //if (!jugador->collidesWithItem(rect)) jugador->setY(jugador->getY()+vel);
        if (colicion()==true) player1->setY(player1->getY()-10);

         player1->setY(player1->getY()+5);

    }

    if(event->key()== Qt::Key_D && player1->getX()<scene->width()-50){
        //if (!jugador->collidesWithItem(rect)) jugador->setX(jugador->getX()+vel);
        if (colicion()==true) player1->setX(player1->getX()-10);

        player1->setX(player1->getX()+5);
    }

    if(event->key()== Qt::Key_W && player1->getY()>0){
        //if (!jugador->collidesWithItem(rect)) jugador->setY(jugador->getY()-vel);
        if (colicion()==true) player1->setY(player1->getY()+10);

        player1->setY(player1->getY()-5);
    }


    //if(event->key()== Qt::Key_M){
       // if(timer->isActive()) timer->stop();
         //timer->start(8);



    player1->posicion(); //ACTUALIZA LA POSICION



}

bool MainWindow::colicion() //Colision con obstaculo
{
    for (auto item: solidos){
       if(item->collidesWithItem(player1)) return true;

    }
    for (auto item: solidosdes){
       if(item->collidesWithItem(player1)) return true;
    }
}

void MainWindow::explotar()
{
    bombap= new bomba();
    bombap->posicionb(player1->getX(),player1->getY());
    scene->addItem(bombap);

    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(explotarbum()));
    timer->start(2500);
}

void MainWindow::explotarbum()
{
            timer->stop();
            scene->removeItem(bombap);

            bum.push_back(new explosion);
            bum.last()->posicionex(bombap->getX(),bombap->getY());
            scene->addItem(bum.last());

            bum.push_back(new explosion);
            bum.last()->posicionex(bombap->getX()+50,bombap->getY());
            scene->addItem(bum.last());

            bum.push_back(new explosion);
            bum.last()->posicionex(bombap->getX()+100,bombap->getY());
            scene->addItem(bum.last());

            bum.push_back(new explosion);
            bum.last()->posicionex(bombap->getX()-50,bombap->getY());
            scene->addItem(bum.last());

            bum.push_back(new explosion);
            bum.last()->posicionex(bombap->getX()-10,bombap->getY());
            scene->addItem(bum.last());

            bum.push_back(new explosion);
            bum.last()->posicionex(bombap->getX(),bombap->getY()+50);
            scene->addItem(bum.last());

            bum.push_back(new explosion);
            bum.last()->posicionex(bombap->getX(),bombap->getY()+100);
            scene->addItem(bum.last());

            bum.push_back(new explosion);
            bum.last()->posicionex(bombap->getX(),bombap->getY()-50);
            scene->addItem(bum.last());

            bum.push_back(new explosion);
            bum.last()->posicionex(bombap->getX(),bombap->getY()-100);
            scene->addItem(bum.last());


            QTimer *timer2=new QTimer();
            connect(timer2,SIGNAL(timeout()),this, SLOT(removerbum()));
            timer2->start(1500);

       //if (item->collidesWithItem(explosion)) scene->removeItem(item);

}

void MainWindow::removerbum()
{
    for (int j=0; j < solidosdes.size();j++){
            obstaculodes *o=solidosdes.at(j);
            for(auto item : bum){
                if(item->collidesWithItem(o)){

                    scene->removeItem(item);
                    scene->removeItem(o);
                    bum.removeOne(item);
                    solidosdes.removeOne(o);

                }
            }
    }

    for(auto item:bum) scene->removeItem(item);
}
