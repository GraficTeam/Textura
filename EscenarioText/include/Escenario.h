#ifndef ESCENARIO_H
#define ESCENARIO_H
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include "Textur.h"

#include "arbol.h"
#include "Zombie.h"
#include "Cerdo.h"
#include "Fuente.h"
#include "Steve.h"
#include "Colision.h"

#include "Casa.h"
class Escenario
{
    private:
        bool bond=false;
        char* filename = "pasto.bmp";
        float pasto[4][3];
        Textur t;
        Steve personaje;
        Zombie zombie;
        Cerdo cerd;
        arbol arb[10];
        Fuente fuente;
        Casa casa[12];
        Colision coli;
        float tras[3]={0,0,0};
    public:
        Escenario();
        virtual ~Escenario();
        void drawAxis();
        void draw();
        bool update(float,float);
};

#endif // ESCENARIO_H
