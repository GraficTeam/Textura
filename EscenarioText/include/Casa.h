#ifndef CASA_H
#define CASA_H

#include <GL/glut.h>
#include <stdlib.h>
#include "Textur.h"

class Casa
{
    private:
        float puntosFachaV1[4][3];
        float puntosFachaV2[4][3];
        float puntosFachaFr[4][3];
    public:
        Casa();
        virtual ~Casa();
        void draw();
};

#endif // CASA_H
