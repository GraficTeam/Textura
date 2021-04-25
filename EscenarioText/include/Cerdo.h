#ifndef CERDO_H
#define CERDO_H

#include <GL/glut.h>
#include <stdlib.h>
#include "Textur.h"

class Cerdo
{
    private:
        float pata[24][3];
        float torso[24][3];
        float cabeza[24][3];
        char* filename[18];
        int band=0;
        int band2=0;
        Textur t;
        float grado=0;
        float mov=0;


    public:
        Cerdo();
        virtual ~Cerdo();
        void draw();
        void update(int bandera);




};

#endif // CERDO_H
