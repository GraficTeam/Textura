#ifndef ESCENARIO_H
#define ESCENARIO_H
#include <GL/glut.h>
#include <stdlib.h>
#include "Textur.h"
#include "Steve.h"
#include "arbol.h"

class Escenario
{
    private:
        char* filename = "pasto.bmp";
        float pasto[4][3];
        Textur t;
        Steve personaje;
        arbol arb;
    public:
        Escenario();
        virtual ~Escenario();
        void drawAxis();
        void draw();
        void update();
};

#endif // ESCENARIO_H
