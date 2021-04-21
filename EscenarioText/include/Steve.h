#ifndef STEVE_H
#define STEVE_H

#include <GL/glut.h>
#include <stdlib.h>
#include "RgbImage.h"
#define NTextures 2

class Steve
{
    private:
        float pierna[24][3];
        float torso[24][3];
        float cabeza[24][3];
        GLuint	texture[NTextures];
        char* filename = "textura3.bmp";
    public:
        Steve();
        virtual ~Steve();
        void draw();
        void loadTextureFromFile(char*);
};

#endif // STEVE_H
