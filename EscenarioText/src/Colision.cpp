#include "Colision.h"

Colision::Colision()
{
    //ctor
}

Colision::~Colision()
{
    //dtor
}

bool Colision::Choque(float* centro,float radio,float x,float z)
{
    float R;
    cX=*(centro);
    cZ=*(centro+2);
    R=sqrt((cX-x)*(cX-x)+(cZ-z)*(cZ-z));
    if(R<=radio)
        return true;
    else
        return false;
}
