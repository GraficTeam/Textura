#ifndef CERDO_H
#define CERDO_H

#include <GL/glut.h>
#include <stdlib.h>
#include "RgbImage.h"
#define NTextures 2

class Cerdo
{
    private:
        float pata[24][3];
        float torso[24][3];
        float cabeza[24][3];

    public:
        Cerdo();
        virtual ~Cerdo();
         void draw();

    protected:


};

#endif // CERDO_H
