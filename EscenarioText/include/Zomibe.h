#ifndef ZOMIBE_H
#define ZOMIBE_H

#include <GL/glut.h>
#include <stdlib.h>
#include "RgbImage.h"
#define NTextures 2

class Zomibe
{
    private:
        float pierna[24][3];
        float torso[24][3];
        float cabeza[24][3];
        GLuint	texture[NTextures];
        char* filename = "steve.bmp";

    public:
        Zomibe();
        virtual ~Zomibe();
        void draw();
        void loadTextureFromFile(char*);


    protected:


};

#endif // ZOMIBE_H
