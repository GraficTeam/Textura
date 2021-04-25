#ifndef CASA_H
#define CASA_H

#include <GL/glut.h>
#include <stdlib.h>
#include "Textur.h"
#include "Colision.h"

class Casa
{
    private:
        float base[24][3];
        float techo[24][3];
        float puntosFachaV1[4][3];
        float puntosFachaV2[4][3];
        float puntosFachaFr[4][3];
        char* filename[24];
        int band=0;
        Textur t;
        float centro[3]={0,0,0};
        float radio;
        Colision col;

    public:
        Casa();
        virtual ~Casa();
        float* getCentro();
        float getRadio();
        //void setCentro(float p1[],float p2[],float x,float y,float z);
        void Rotate(float,float ,float ,float );
        void Translate(float,float,float);
        void Scale(float s);
        bool Choque(float,float,float);
        void draw();
};

#endif // CASA_H
