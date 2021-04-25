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
#include "nube.h"
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
        arbol arb[8];
        Fuente fuente;
        Casa casa[12];
        nube nub;
        Colision coli;
        //Variable de control
         float velocidad1=0;

        float Tarb[8][3]={{-13,0,-7},
                           {-13,0,8},
                           {10.5,0,-6},
                           {10.5,0,6.5},
                           {-7,0,14},
                           {6,0,13},
                           {-6,0,-12},
                           {6,0,-12}};
    public:
        Escenario();
        virtual ~Escenario();
        void drawAxis();
        void draw();
        bool Choque(float,float);
        void update();
};

#endif // ESCENARIO_H
