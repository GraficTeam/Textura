#ifndef STEVE_H
#define STEVE_H

#include <GL/glut.h>
#include <stdlib.h>
#include "Textur.h"

class Steve
{
    private:
        float pierna[24][3];
        float torso[24][3];
        float cabeza[24][3];
        char* filename[24];
        int band=0;
        Textur t;

    public:
        Steve();
        virtual ~Steve();
        void draw();
};

#endif // STEVE_H
