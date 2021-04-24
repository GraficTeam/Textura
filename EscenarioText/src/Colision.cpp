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
    //if(band2==false){
        cX=*(centro);
        cZ=*(centro+2);
       // band2=true;
    //}
    printf("%f\n",cX);
    printf("%f\n",cZ);
    R=sqrt((cX-x)*(cX-x)+(cZ-z)*(cZ-z));
    printf("Radio: %f\n",radio);
    printf("Radio obs: %f\n",R);
    if(R<=radio)
        return true;
    else
        return false;
}
