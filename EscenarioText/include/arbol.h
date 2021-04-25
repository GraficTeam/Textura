#ifndef ARBOL_H
#define ARBOL_H

#include <GL/glut.h>
#include <stdlib.h>
#include "Textur.h"
#include "Colision.h"

class arbol
{
    private:
        float cubo[24][3];
        char* filename[2];
       float radio;
       float centro[3]={0,0,0};
        int band=0;
        Textur t;
        Colision col;
    public:
        arbol();
        virtual ~arbol();
        void tronco();
        void hoja();
        float* getCentro();
        float getRadio();
        //void setCentro(float p1[],float p2[],float x,float y,float z);
        void Rotate(float,float ,float ,float );
        void Translate(float,float,float);
        void Scale(float s);
        bool Choque(float,float,float);
        void draw();
};

#endif // ARBOL_H


