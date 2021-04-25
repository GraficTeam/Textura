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
        float Tnub1[7][3]={{0,50,0},
                        {-100,50,0},
                        {-50,50,-25},
                        {-75,70,-50},
                        {-50,70,75},
                        {50,70,-25},
                        {50,70,25}};
        float Tnub2[6][3]={{0,70,100},
                        {-100,70,-100},
                        {-100,50,100},
                        {-25,50,50},
                        {50,50,-75},
                        {50,50,75}};
        float Tnub3[6][3]={{0,50,-100},
                        {-25,50,-50},
                        {-75,70,50},
                        {100,70,-100},
                        {100,70,100},
                        {75,70,50}};
        float Tnub4[5][3]={{100,70,0},
                        {-50,70,-75},
                        {-50,50,25},
                        {25,50,-50},
                        {25,50,50}};
    public:
        Escenario();
        virtual ~Escenario();
        void drawAxis();
        void draw();
        bool Choque(float,float);
        void update();
};

#endif // ESCENARIO_H
