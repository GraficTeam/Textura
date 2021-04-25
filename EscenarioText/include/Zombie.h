#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <GL/glut.h>
#include <stdlib.h>
#include "Textur.h"
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

    public:
        Zombie();
        virtual ~Zombie();
        void draw();
        void update(int bandera);


};

#endif // ZOMBIE_H
