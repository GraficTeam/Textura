#ifndef STEVE_H
#define STEVE_H

#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include "Textur.h"

class Steve
{
    private:
        float pierna[24][3];
        float torso[24][3];
        float cabeza[24][3];
        char* filename[24];
        float centro[3]={0,0,0};
        float radio;
        float A[4][4]={{1,0,0,0},
                       {0,1,0,0},
                       {0,0,1,0},
                       {0,0,0,1},};
        int band=0;
        Textur t;

    public:
        Steve();
        virtual ~Steve();
        float* getCentro();
        float getRadio();
        void setCentro(float p1[],float p2[],float x,float y,float z);
        void Rotar(float,float ,float ,float );
        void Trasladar(float,float,float);
        void Escalar(float s);
        void draw();
};

#endif // STEVE_H
