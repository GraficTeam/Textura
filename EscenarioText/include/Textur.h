#ifndef TEXTUR_H
#define TEXTUR_H

#include <GL/glut.h>
#include <stdlib.h>
#include "RgbImage.h"
class Textur
{
    private:
        float auxT[12][3];
        GLuint texture[24];
    public:
        Textur();
        virtual ~Textur();
        void loadTextureFromFile(char*,int);
        void texturiza(char *,int ,float (*)[3] ,int ,int);
         void texturiza(char *,int ,float (*)[3] ,int);
};

#endif // TEXTUR_H
