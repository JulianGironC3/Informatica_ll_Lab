#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include "cuerpog.h"
#include <QtMath>

#define dt 0.3
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //int v_limit;
    //int h_limit;
    //void bordercollision(cuerpog *b);

    void aceleracion();

private slots:
    void actualizarc();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    cuerpog *cuerpo1;
    cuerpog *cuerpo2;
    cuerpog *cuerpo3;
    cuerpog *cuerpo4;
    cuerpog *cuerpo5;
    QTimer *timer;
};
#endif // MAINWINDOW_H
