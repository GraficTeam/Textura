#ifndef COLISION_H
#define COLISION_H

#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

class Colision
{
    private:
         float cX,cZ;
         float A[4][4]={{1,0,0,0},
                       {0,1,0,0},
                       {0,0,1,0},
                       {0,0,0,1},};
    public:
        Colision();
        virtual ~Colision();
        void multiplicar(float aux[]);
        void setCentro(float p1[],float p2[],float piv[],float centro[],float*);
        void Rotate(float,float ,float ,float );
        void Translate(float,float,float);
        void Scale(float);
        bool Choque(float*,float,float,float,float);
};

#endif // COLISION_H
