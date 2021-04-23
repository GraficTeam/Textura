#ifndef CASA_H
#define CASA_H

#include <GL/glut.h>
#include <stdlib.h>
#include "Textur.h"

class Casa
{
    private:
        float base[24][3];
        float techo[24][3];
        float puntosFachaV1[4][3];
        float puntosFachaV2[4][3];
        float puntosFachaFr[4][3];
        char* filename[24];
        int band=0;
        Textur t;
    public:
        Casa();
        virtual ~Casa();
        void draw();
};

#endif // CASA_H
