#ifndef ARBOL_H
#define ARBOL_H

#include <GL/glut.h>
#include <stdlib.h>
#include "Textur.h"

class arbol
{
    private:
        float cubo[24][3];
        char* filename[2];
        Textur t;
    public:
        arbol();
        virtual ~arbol();
        void hoja();
        void draw();
};

#endif // ARBOL_H
