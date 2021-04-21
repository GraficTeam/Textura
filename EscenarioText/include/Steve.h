#ifndef STEVE_H
#define STEVE_H

#include <GL/glut.h>
#include <stdlib.h>
#include "RgbImage.h"

class Steve
{
    private:
        float pierna[24][3];
        float torso[24][3];
        float cabeza[24][3];
        float auxT[12][3];
        GLuint	texture[4];
        char* filename = "steve.bmp";
        char* filename2 = "pelo.bmp";
    public:
        Steve();
        virtual ~Steve();
        void draw();
        void loadTextureFromFile(char*,int);
        void texturiza(char *,int ,float (*)[3] ,int ,int);
};

#endif // STEVE_H
