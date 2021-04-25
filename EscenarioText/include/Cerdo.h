#ifndef CERDO_H
#define CERDO_H

#include <GL/glut.h>
#include <stdlib.h>
#include "Textur.h"
#include "Colision.h"

class Cerdo
{
    private:
        float pata[24][3];
        float torso[24][3];
        float cabeza[24][3];
        char* filename[18];
        int band=0;
        int band2=0;
        Textur t;
        float grado=0;
        float mov=0;

        float centro[3]={0,0,0};
        float radio;
        Colision col;


    public:
        Cerdo();
        virtual ~Cerdo();
        void draw();
        void update(int bandera);

        float* getCentro();
        float getRadio();
        //void setCentro(float p1[],float p2[],float x,float y,float z);
        void Rotate(float,float ,float ,float );
        void Translate(float,float,float);
        void Scale(float s);
        bool Choque(float,float,float);




};

#endif // CERDO_H
