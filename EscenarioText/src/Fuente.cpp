#include "Fuente.h"

Fuente::Fuente()
{
    //CAra de enfrente
    base[0][0]=0; base[0][1]=0; base[0][2]=0;
    base[1][0]=5; base[1][1]=0; base[1][2]=0;
    base[2][0]=5; base[2][1]=1; base[2][2]=0;
    base[3][0]=0; base[3][1]=1; base[3][2]=0;

    //Cara de atras
    base[4][0]=0; base[4][1]=0; base[4][2]=-5;
    base[5][0]=5; base[5][1]=0; base[5][2]=-5;
    base[6][0]=5; base[6][1]=1; base[6][2]=-5;
    base[7][0]=0; base[7][1]=1; base[7][2]=-5;

    //Cara izquierda
    base[8][0]=0; base[8][1]=1; base[8][2]=0;
    base[9][0]=0; base[9][1]=1; base[9][2]=-5;
    base[10][0]=0; base[10][1]=0; base[10][2]=-5;
    base[11][0]=0; base[11][1]=0; base[11][2]=0;

    //Cara derecha
    base[12][0]=5; base[12][1]=1; base[12][2]=0;
    base[13][0]=5; base[13][1]=1; base[13][2]=-5;
    base[14][0]=5; base[14][1]=0; base[14][2]=-5;
    base[15][0]=5; base[15][1]=0; base[15][2]=0;

    //Cara de arriba
    base[16][0]=0; base[16][1]=1; base[16][2]=0;
    base[17][0]=5; base[17][1]=1; base[17][2]=0;
    base[18][0]=5; base[18][1]=1; base[18][2]=-5;
    base[19][0]=0; base[19][1]=1; base[19][2]=-5;
    //Cara de abajo
   base[20][0]=0; base[20][1]=0; base[20][2]=0;
    base[21][0]=5; base[21][1]=0; base[21][2]=0;
    base[22][0]=5; base[22][1]=0; base[22][2]=-5;
    base[23][0]=0; base[23][1]=0; base[23][2]=-5;


    //CAra de enfrente
    columna[0][0]=0; columna[0][1]=0; columna[0][2]=0;
    columna[1][0]=0.2; columna[1][1]=0; columna[1][2]=0;
    columna[2][0]=0.2; columna[2][1]=5; columna[2][2]=0;
    columna[3][0]=0; columna[3][1]=5; columna[3][2]=0;

    //Cara de atras
    columna[4][0]=0; columna[4][1]=0; columna[4][2]=-0.2;
    columna[5][0]=0.2; columna[5][1]=0; columna[5][2]=-0.2;
    columna[6][0]=0.2; columna[6][1]=5; columna[6][2]=-0.2;
    columna[7][0]=0; columna[7][1]=5; columna[7][2]=-0.2;

    //Cara izquierda
    columna[8][0]=0; columna[8][1]=0; columna[8][2]=0;
    columna[9][0]=0; columna[9][1]=5; columna[9][2]=0;
    columna[10][0]=0; columna[10][1]=5; columna[10][2]=-0.2;
    columna[11][0]=0; columna[11][1]=0; columna[11][2]=-0.2;

    //Cara derecha
    columna[12][0]=0.2; columna[12][1]=0; columna[12][2]=0;
    columna[13][0]=0.2; columna[13][1]=5; columna[13][2]=0;
    columna[14][0]=0.2; columna[14][1]=5; columna[14][2]=-0.2;
    columna[15][0]=0.2; columna[15][1]=0; columna[15][2]=-0.2;

    //Cara de arriba
    columna[16][0]=0; columna[18][1]=5; columna[16][2]=0;
    columna[17][0]=0.2; columna[17][1]=5; columna[17][2]=0;
    columna[18][0]=0.2; columna[18][1]=5; columna[18][2]=-0.2;
    columna[19][0]=0; columna[19][1]=5; columna[19][2]=-0.2;

    //Cara de abajo
    columna[20][0]=0; columna[20][1]=5; columna[20][2]=0;
    columna[21][0]=0.2; columna[21][1]=5; columna[21][2]=0;
    columna[22][0]=0.2; columna[22][1]=5; columna[22][2]=-0.2;
    columna[23][0]=0; columna[23][1]=5; columna[23][2]=-0.2;

    filename[0]="piedra.bmp";
    filename[1]="fuente.bmp";
    filename[2]="fuente_borde.bmp";
    filename[3]="madera.bmp";
}

Fuente::~Fuente()
{
    //dtor
}
void Fuente::draw()
{/*

    int i;
    glColor3f(1.0f, 1.0f, 1.0f);
     i=0;
    while(i<24)
    {

        switch(i)
        {
            case 0: t.texturiza(filename[2],2,base,i);
                    break;
            case 4: t.texturiza(filename[2],2,base,i);
                    break;
            case 8: t.texturiza(filename[2],2,base,i);
                    break;
            case 12: t.texturiza(filename[2],2,base,i);
                    break;
            case 16: t.texturiza(filename[0],0,base,i);
                     break;
             case 20: t.texturiza(filename[0],0,base,i);
                     break;
        }
        i+=4;

    }



    glPushMatrix();
    glTranslated(0.5,1,-0.5);

    glScaled(0.8,1,0.8);
    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(filename[2],2,base,i);
                    break;
            case 4: t.texturiza(filename[2],2,base,i);
                    break;
            case 8: t.texturiza(filename[2],2,base,i);
                    break;
            case 12: t.texturiza(filename[2],2,base,i);
                    break;
            case 16: t.texturiza(filename[1],1,base,i);
                     break;
             case 20: t.texturiza(filename[0],0,base,i);
                     break;
        }
        i+=4;

    }
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.5,7,-0.5);
    glScaled(0.8,1,0.8);

    i=0;
    while(i<24)
    {
       switch(i)
        {
            case 0: t.texturiza(filename[2],2,base,i);
                    break;
            case 4: t.texturiza(filename[2],2,base,i);
                    break;
            case 8: t.texturiza(filename[2],2,base,i);
                    break;
            case 12: t.texturiza(filename[2],2,base,i);
                    break;
            case 16: t.texturiza(filename[0],0,base,i);
                     break;
             case 20: t.texturiza(filename[0],0,base,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();


    glPushMatrix();
    glTranslated(0.5,2,-0.5);

    i=0;
    while(i<24)
    {
        t.texturiza(filename[3],3,columna,i);
        i+=4;
    }
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.5,2.0,-4.25);
    i  =0;
    while(i<24)
    {
        t.texturiza(filename[3],3,columna,i);
        i+=4;
    }
    glPopMatrix();

    glPushMatrix();

    glTranslatef(4.25,2.0,-0.5);

    i=0;
    while(i<24)
    {
        t.texturiza(filename[3],3,columna,i);
        i+=4;
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4.25,2.0,-4.25);

   i=0;
    while(i<24)
    {
        t.texturiza(filename[3],3,columna,i);
        i+=4;
    }
    glPopMatrix();

*/
}
