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
        char* filename[24];
        Textur t;

    public:
        Cerdo();
        virtual ~Cerdo();
        void draw();




};

#endif // CERDO_H
