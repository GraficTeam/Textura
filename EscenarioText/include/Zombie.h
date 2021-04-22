#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <GL/glut.h>
#include <stdlib.h>
#include "Textur.h"

class Zombie
{
     private:
        float pierna[24][3];
        float torso[24][3];
        float cabeza[24][3];
        char* filename[24];
        Textur t;

    public:
        Zombie();
        virtual ~Zombie();
        void draw();


};

#endif // ZOMBIE_H
