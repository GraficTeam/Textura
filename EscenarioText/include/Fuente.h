#ifndef FUENTE_H
#define FUENTE_H

#include <GL/glut.h>
#include <stdlib.h>
#include "Textur.h"
#include "Colision.h"


class Fuente
{

    private:
        float base[24][3];
        float columna[24][3];
        char* filename[4];
        float centro[3]={0,0,0};
        float radio;
        int band=0;
        Textur t;
        Colision col;


    public:
        Fuente();
        virtual ~Fuente();
        float* getCentro();
        float getRadio();
        //void setCentro(float p1[],float p2[],float x,float y,float z);
        void Rotate(float,float ,float ,float );
        void Translate(float,float,float);
        void Scale(float s);
        bool Choque(float,float,float);
        void draw();

    protected:




};

#endif // FUENTE_H
