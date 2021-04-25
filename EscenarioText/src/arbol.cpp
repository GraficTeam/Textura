#include "arbol.h"

arbol::arbol()
{
    cubo[0][0]=0; cubo[0][1]=1; cubo[0][2]=0;
    cubo[1][0]=1; cubo[1][1]=1; cubo[1][2]=0;
    cubo[2][0]=1; cubo[2][1]=0; cubo[2][2]=0;
    cubo[3][0]=0; cubo[3][1]=0; cubo[3][2]=0;

    cubo[4][0]=0; cubo[4][1]=1; cubo[4][2]=-1;
    cubo[5][0]=1; cubo[5][1]=1; cubo[5][2]=-1;
    cubo[6][0]=1; cubo[6][1]=0; cubo[6][2]=-1;
    cubo[7][0]=0; cubo[7][1]=0; cubo[7][2]=-1;

    cubo[8][0]=0; cubo[8][1]=0; cubo[8][2]=-1;
    cubo[9][0]=1; cubo[9][1]=0; cubo[9][2]=-1;
    cubo[10][0]=1; cubo[10][1]=0; cubo[10][2]=0;
    cubo[11][0]=0; cubo[11][1]=0; cubo[11][2]=0;

    cubo[12][0]=0; cubo[12][1]=1; cubo[12][2]=-1;
    cubo[13][0]=1; cubo[13][1]=1; cubo[13][2]=-1;
    cubo[14][0]=1; cubo[14][1]=1; cubo[14][2]=0;
    cubo[15][0]=0; cubo[15][1]=1; cubo[15][2]=0;

    cubo[16][0]=1; cubo[16][1]=1; cubo[16][2]=0;
    cubo[17][0]=1; cubo[17][1]=1; cubo[17][2]=-1;
    cubo[18][0]=1; cubo[18][1]=0; cubo[18][2]=-1;
    cubo[19][0]=1; cubo[19][1]=0; cubo[19][2]=0;

    cubo[20][0]=0; cubo[20][1]=1; cubo[20][2]=0;
    cubo[21][0]=0; cubo[21][1]=1; cubo[21][2]=-1;
    cubo[22][0]=0; cubo[22][1]=0; cubo[22][2]=-1;
    cubo[23][0]=0; cubo[23][1]=0; cubo[23][2]=0;

    filename[0]="tronco.bmp";
    filename[1]="hojas.bmp";
}

arbol::~arbol()
{
    //dtor
}
float* arbol::getCentro()
{
    return centro;
}

float arbol::getRadio()
{
    return radio;
}

void arbol::Rotate(float ang,float x,float y,float z)
{
    col.Rotate(ang,x,y,z);
}

void arbol::Translate(float x,float y,float z)
{
    col.Translate(x,y,z);
}

void arbol::Scale(float s)
{
    col.Scale(s);
}

bool arbol::Choque(float x,float z,float rad)
{
    return col.Choque(centro,radio,x,z,rad);
}



void arbol::tronco()
{

    int i;
    i=0;
    while(i<24)
    {
        t.texturiza(0,cubo,i);
        i+=4;
        if(i==8)
            i=16;
    }
}

void arbol::hoja()
{
    int i;
    i=0;
    while(i<24)
    {
        t.texturiza(1,cubo,i);
        i+=4;
    }
}

void arbol::draw()
{
    float p1[3]={0,0,0};
    float p2[3]={0,0,-1};
    float pivote[3]={1,0,0};
    col.setCentro(p1,p2,pivote,centro,&radio);
    int i;
    if(band==0)
    {

        for(i=0;i<2;i++)
            t.loadTextureFromFile(filename[i],i);
        band=1;
    }
    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glPushMatrix();
    tronco();
    glTranslated(0,1,0);
    tronco();
    glTranslated(0,1,0);
    tronco();

    glTranslated(-1,1,2);
    hoja();
    glTranslated(0,0,-1);
    hoja();
    glTranslated(1,0,1);
    hoja();
    glTranslated(1,0,0);
    hoja();
    glTranslated(1,0,0);
    hoja();
    glTranslated(0,0,-1);
    hoja();
    glTranslated(0,0,-1);
    hoja();
    glTranslated(0,0,-1);
    hoja();
    glTranslated(-1,0,-1);
    hoja();
    glTranslated(-1,0,0);
    hoja();
    glTranslated(-1,0,0);
    hoja();
    glTranslated(0,0,1);
    hoja();
    glTranslated(-1,0,-1);
    hoja();
    glTranslated(0,0,1);
    hoja();
    glTranslated(0,0,1);
    hoja();
    glTranslated(0,0,1);
    hoja();
    glTranslated(2,1,0);
    hoja();
    glTranslated(1,0,0);
    hoja();
    glTranslated(0,0,-1);
    hoja();
    glTranslated(0,0,-1);
    hoja();
    glTranslated(-1,0,0);
    hoja();
    glTranslated(-1,0,1);
    hoja();
    glTranslated(0,1,0);
    hoja();
    glTranslated(1,0,1);
    hoja();
    glTranslated(0,0,-1);
    hoja();
    glTranslated(0,0,-1);
    hoja();
    glTranslated(1,0,1);
    hoja();

    glPopMatrix();
    glPopMatrix();
}
