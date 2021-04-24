#ifndef TEXTUR_H
#define TEXTUR_H

#include <GL/glut.h>
#include <stdlib.h>
#include "RgbImage.h"
class Textur
{
    private:
        GLuint texture[24];
    public:
        Textur();
        virtual ~Textur();
        void loadTextureFromFile(char*,int);
        void texturiza(int,float (*)[3] ,int);
        void texturizaM(int,float (*)[3] ,int);
        void multiplicar(float (*)[4],float aux[]);
};

#endif // TEXTUR_H
