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
        Textur t;

    public:
        Zombie();
        virtual ~Zombie();
        void draw();


};

#endif // ZOMBIE_H
