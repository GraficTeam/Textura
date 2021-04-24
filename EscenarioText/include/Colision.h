#ifndef COLISION_H
#define COLISION_H

#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

class Colision
{
    private:
         bool band;
         bool band2=false;
         float cX,cZ;
    public:
        Colision();
        virtual ~Colision();
        bool Choque(float*,float,float,float);
};

#endif // COLISION_H
