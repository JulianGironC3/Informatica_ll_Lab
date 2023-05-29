#ifndef CUERPO_H
#define CUERPO_H

#define g 10
class cuerpo
{
public:
    cuerpo(float m, float px_=0, float py_=0, float vx_=0, float vy_=0, float rad_=1);

    float getM() const;
    void setM(float newM);

    float getPx() const;
    void setPx(float newPx);

    float getPy() const;
    void setPy(float newPy);

    float getRad() const;

    float getVx() const;
    void setVx(float newVx);

    float getVy() const;
    void setVy(float newVy);

    float getAx() const;
    void setAx(float newAx);

    float getAy() const;
    void setAy(float newAy);

    void mover(float dt);



private:
    float m=0;
    float px=0;
    float py=0;
    float rad=0;
    float vx=0;
    float vy=0;
    float ax=0;
    float ay=0;

};

#endif // CUERPO_H
