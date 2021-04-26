#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <GL/glut.h>
#include <stdlib.h>
#include "Textur.h"
#include "Colision.h"
#define n 24

class Zombie
{
     private:
        GLuint texture[n];
        float pierna[24][3];
        float torso[24][3];
        float cabeza[24][3];
        char* filename[24];
        int band=0;
        int band2=0;
        Textur t;
        float grado=0;
        float mov=0;

        float centro[3]={0,0,0};
        float radio;
        Colision col;

    public:
        Zombie();
        virtual ~Zombie();
        //Metodos para colision
        float* getCentro();
        float getX();
        float getZ();
        float getRadio();
        void Rotate(float,float ,float ,float );
        void Translate(float,float,float);
        void Scale(float s);
        bool Choque(float,float,float);

        //metodos de dibujado
        void draw();
        void update(int bandera);


};

#endif // ZOMBIE_H
