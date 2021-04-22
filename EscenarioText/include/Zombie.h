#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <GL/glut.h>
#include <stdlib.h>
#include "RgbImage.h"
#define NTextures 2


class Zombie
{
    public:
        Zombie();
        virtual ~Zombie();
        void draw();
        void loadTextureFromFile(char*);

    protected:

    private:
        float pierna[24][3];
        float torso[24][3];
        float cabeza[24][3];
        GLuint	texture[NTextures];
        char* filename = "steve.bmp";
};

#endif // ZOMBIE_H
