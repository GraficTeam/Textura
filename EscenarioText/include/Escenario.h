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
#include "Personaje.h"
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
        Personaje personaje, steves[6];;
        Zombie zombie;
        Zombie zombie2;
        Cerdo cerd;
        arbol arb[8];
        Fuente fuente;
        Fuente fuent;
        Casa casa[12];
        Casa casita;
        nube nub;
        Colision coli;
        //Variable de control
        int band_z=1;
         int grado=rand() % 4;
         float velocidad1=0;
         float velocidad2=0;
         float grado_zom=0;
         float grado_cerd=0;
         float moviC[4]={0,-80,-10,0};
        float moviZ[4]={270,20,0,0};


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
        float Tsteve[10][3]={{-15,0,-15},
                        {-15,0,30},
                        {-15,0,75},
                        {-15,0,15},
                        {-15,0,-30},
                        {-15,0,-75}};
    public:
        Escenario();
        virtual ~Escenario();
        void drawAxis();
        void draw(float,float,float,float,bool);
        bool Choque(float,float);
        void update();
};

#endif // ESCENARIO_H
