#ifndef STEVE_H
#define STEVE_H

#include <GL/glut.h>
#include <stdlib.h>

#include "Textur.h"
#include "Colision.h"

class Steve
{
    private:
        float pierna[24][3];
        float torso[24][3];
        float cabeza[24][3];
        char* filename[24];
        float centro[3]={0,0,0};
        float radio;
        int band=0;
        int band2=0;
        Textur t;
        Colision col;

        float grado=0;
        float mov=0;


    public:
        Steve();
        virtual ~Steve();
        float* getCentro();
        float getRadio();
        //void setCentro(float p1[],float p2[],float x,float y,float z);
        void Rotate(float,float ,float ,float );
        void Translate(float,float,float);
        void Scale(float s);
        bool Choque(float,float,float);
        void draw();
        void update(int bandera);
};

#endif // STEVE_H
