#ifndef FUENTE_H
#define FUENTE_H

#include <GL/glut.h>
#include <stdlib.h>
#include "Textur.h"


class Fuente
{

    private:
        float base[24][3];
        float columna[24][3];
        char* filename[24];
        Textur t;


    public:
        Fuente();
        virtual ~Fuente();
        void draw();

    protected:




};

#endif // FUENTE_H
