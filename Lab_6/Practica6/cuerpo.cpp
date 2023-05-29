#include "cuerpo.h"

cuerpo::cuerpo(float m_, float px_, float py_, float vx_, float vy_, float rad_)
{
    m=m_;
    px=px_;
    py=py_;
    vx=vx_;
    vy=vy_;
    rad=rad_;
}

float cuerpo::getPx() const
{
    return px;
}

void cuerpo::setPx(float newPx)
{
    px = newPx;
}

float cuerpo::getPy() const
{
    return py;
}

void cuerpo::setPy(float newPy)
{
    py = newPy;
}

float cuerpo::getRad() const
{
    return rad;
}

float cuerpo::getM() const
{
    return m;
}

void cuerpo::setM(float newM)
{
    m = newM;
}

float cuerpo::getVx() const
{
    return vx;
}

void cuerpo::setVx(float newVx)
{
    vx = newVx;
}

float cuerpo::getVy() const
{
    return vy;
}

void cuerpo::setVy(float newVy)
{
    vy = newVy;
}

float cuerpo::getAx() const
{
    return ax;
}

void cuerpo::setAx(float newAx)
{
    ax = newAx;
}

float cuerpo::getAy() const
{
    return ay;
}

void cuerpo::setAy(float newAy)
{
    ay = newAy;
}

void cuerpo::mover(float dt)
{

    vx=vx+ax*dt;
    vy=vy+ay*dt;

    px=px+vx*dt+((ax*dt*dt)/2);
    py=py+vy*dt+((ay*dt*dt)/2);
}
