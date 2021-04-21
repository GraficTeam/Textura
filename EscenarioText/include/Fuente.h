#ifndef FUENTE_H
#define FUENTE_H

#include <GL/glut.h>
#include <stdlib.h>
#include "RgbImage.h"
#define NTextures 2

class Fuente
{

    private:
        float base[24][3];
        float columna[24][3];


    public:
        Fuente();
        virtual ~Fuente();
        void draw();

    protected:




};

#endif // FUENTE_H
