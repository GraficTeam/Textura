#include "Cerdo.h"

Cerdo::Cerdo()
{
    //C1ra de enfrente
    pata[0][0]=0; pata[0][1]=1; pata[0][2]=0;
    pata[1][0]=1; pata[1][1]=1; pata[1][2]=0;
    pata[2][0]=1; pata[2][1]=0; pata[2][2]=0;
    pata[3][0]=0; pata[3][1]=0; pata[3][2]=0;

    //Cara de atras
    pata[4][0]=0; pata[4][1]=1; pata[4][2]=-1;
    pata[5][0]=1; pata[5][1]=1; pata[5][2]=-1;
    pata[6][0]=1; pata[6][1]=0; pata[6][2]=-1;
    pata[7][0]=0; pata[7][1]=0; pata[7][2]=-1;


    //Cara izquierda

    pata[8][0]=0; pata[8][1]=0; pata[8][2]=0;
    pata[9][0]=0; pata[9][1]=1; pata[9][2]=0;
    pata[10][0]=0; pata[10][1]=1; pata[10][2]=-1;
    pata[11][0]=0; pata[11][1]=0; pata[11][2]=-1;

    //Cara derecha
    pata[12][0]=1; pata[12][1]=0; pata[12][2]=0;
    pata[13][0]=1; pata[13][1]=1; pata[13][2]=0;
    pata[14][0]=1; pata[14][1]=1; pata[14][2]=-1;
    pata[15][0]=1; pata[15][1]=0; pata[15][2]=-1;

    //Cara de arriba
    pata[16][0]=0; pata[16][1]=1; pata[16][2]=0;
    pata[17][0]=1; pata[17][1]=1; pata[17][2]=0;
    pata[18][0]=1; pata[18][1]=1; pata[18][2]=-1;
    pata[19][0]=0; pata[19][1]=1; pata[19][2]=-1;

    //Cara de abajo
    pata[20][0]=0; pata[20][1]=0; pata[20][2]=0;
    pata[21][0]=1; pata[21][1]=0; pata[21][2]=0;
    pata[22][0]=1; pata[22][1]=0; pata[22][2]=-1;
    pata[23][0]=0; pata[23][1]=0; pata[23][2]=-1;


    //C1ra de enfrente
    torso[0][0]=0; torso[0][1]=1; torso[0][2]=0;
    torso[1][0]=4; torso[1][1]=1; torso[1][2]=0;
    torso[2][0]=4; torso[2][1]=4; torso[2][2]=0;
    torso[3][0]=0; torso[3][1]=4; torso[3][2]=0;

    //Cara de atras
    torso[4][0]=0; torso[4][1]=1; torso[4][2]=-4;
    torso[5][0]=4; torso[5][1]=1; torso[5][2]=-4;
    torso[6][0]=4; torso[6][1]=4; torso[6][2]=-4;
    torso[7][0]=0; torso[7][1]=4; torso[7][2]=-4;

    //Cara izquierda
    torso[8][0]=0; torso[8][1]=1; torso[8][2]=0;
    torso[9][0]=0; torso[9][1]=4; torso[9][2]=0;
    torso[10][0]=0; torso[10][1]=4; torso[10][2]=-4;
    torso[11][0]=0; torso[11][1]=1; torso[11][2]=-4;

    //Cara derecha
    torso[12][0]=4; torso[12][1]=1; torso[12][2]=0;
    torso[13][0]=4; torso[13][1]=4; torso[13][2]=0;
    torso[14][0]=4; torso[14][1]=4; torso[14][2]=-4;
    torso[15][0]=4; torso[15][1]=1; torso[15][2]=-4;

    //Cara de arriba
    torso[16][0]=0; torso[16][1]=4; torso[16][2]=0;
    torso[17][0]=4; torso[17][1]=4; torso[17][2]=0;
    torso[18][0]=4; torso[18][1]=4; torso[18][2]=-4;
    torso[19][0]=0; torso[19][1]=4; torso[19][2]=-4;

    //Cara de abajo
    torso[20][0]=0; torso[20][1]=1; torso[20][2]=0;
    torso[21][0]=4; torso[21][1]=1; torso[21][2]=0;
    torso[22][0]=4; torso[22][1]=1; torso[22][2]=-4;
    torso[23][0]=0; torso[23][1]=1; torso[23][2]=-4;

     //Cara de enfrente
    cabeza[0][0]=0.5; cabeza[0][1]=6.5; cabeza[0][2]=1.5;
    cabeza[1][0]=3.5; cabeza[1][1]=6.5; cabeza[1][2]=1.5;
    cabeza[2][0]=3.5; cabeza[2][1]=3.5; cabeza[2][2]=1.5;
    cabeza[3][0]=0.5; cabeza[3][1]=3.5; cabeza[3][2]=1.5;


    //Cara de atras
    cabeza[4][0]=0.5; cabeza[4][1]=6.5; cabeza[4][2]=-2;
    cabeza[5][0]=3.5; cabeza[5][1]=6.5; cabeza[5][2]=-2;
    cabeza[6][0]=3.5; cabeza[6][1]=3.5; cabeza[6][2]=-2;
    cabeza[7][0]=0.5; cabeza[7][1]=3.5; cabeza[7][2]=-2;

    //Cara izquierda
    cabeza[8][0]=0.5; cabeza[8][1]=6.5; cabeza[8][2]=1.5;
    cabeza[9][0]=0.5; cabeza[9][1]=6.5; cabeza[9][2]=-2;
    cabeza[10][0]=0.5; cabeza[10][1]=3.5; cabeza[10][2]=-2;
    cabeza[11][0]=0.5; cabeza[11][1]=3.5; cabeza[11][2]=1.5;

    //Cara derecha
    cabeza[12][0]=3.5; cabeza[12][1]=6.5; cabeza[12][2]=1.5;
    cabeza[13][0]=3.5; cabeza[13][1]=6.5; cabeza[13][2]=-2;
    cabeza[14][0]=3.5; cabeza[14][1]=3.5; cabeza[14][2]=-2;
    cabeza[15][0]=3.5; cabeza[15][1]=3.5; cabeza[15][2]=1.5;

    //Cara de arriba
    cabeza[16][0]=0.5; cabeza[16][1]=6.5; cabeza[16][2]=1.5;
    cabeza[17][0]=3.5; cabeza[17][1]=6.5; cabeza[17][2]=1.5;
    cabeza[18][0]=3.5; cabeza[18][1]=6.5; cabeza[18][2]=-2;
    cabeza[19][0]=0.5; cabeza[19][1]=6.5; cabeza[19][2]=-2;


    //Cara de abajo
    cabeza[20][0]=0.5; cabeza[20][1]=3.5; cabeza[20][2]=1.5;
    cabeza[21][0]=3.5; cabeza[21][1]=3.5; cabeza[21][2]=1.5;
    cabeza[22][0]=3.5; cabeza[22][1]=3.5; cabeza[22][2]=-2;
    cabeza[23][0]=0.5; cabeza[23][1]=3.5; cabeza[23][2]=-2;


    filename[0]="cerdo_cara.bmp";
    filename[1]="cerdo_cara_lado.bmp";
    filename[2]="cerdo_cara_izq.bmp";
    filename[3]="cerdo_cara_der.bmp";
    filename[4]="cerdo_cara_lado.bmp";
    filename[5]="cerdo_cara_lado.bmp";

    filename[6]="cerdo_torso_enfrente.bmp";
    filename[7]="cerdo_torso_atras.bmp";
    filename[8]="cerdo_torso.bmp";
    filename[9]="cerdo_torso.bmp";
    filename[10]="cerdo_torso.bmp";
    filename[11]="cerdo_torso_abajo.bmp";

    filename[12]="cerdo_patader_enfrente.bmp";
    filename[13]="cerdo_pataizq_enfrente.bmp";
    filename[14]="cerdo_pata_lado.bmp";
    filename[15]="cerdo_pata_lado.bmp";
    filename[16]="cerdo_pata_lado.bmp";
    filename[17]="cerdo_pata_lado.bmp";

}

Cerdo::~Cerdo()
{
    //dtor
}


float* Cerdo::getCentro()
{
    return centro;
}
float Cerdo::getX()
{
    return centro[0];
}
float Cerdo::getZ()
{
    return centro[2];
}
float Cerdo::getRadio()
{
    return radio;
}

void Cerdo::Rotate(float ang,float x,float y,float z)
{
    col.Rotate(ang,x,y,z);
}

void Cerdo::Translate(float x,float y,float z)
{
    col.Translate(x,y,z);
}

void Cerdo::Scale(float s)
{
    col.Scale(s);
}

bool Cerdo::Choque(float x,float z,float rad)
{
    return col.Choque(centro,radio,x,z,rad);
}


void Cerdo::draw()
{
    float p1[3]={0,0,0};
    float p2[3]={4,0,-4};
    float pivote[3]={4,0,0};
    col.setCentro(p1,p2,pivote,centro,&radio);
    int i;
    if(band==0)
    {
        for(i=0;i<18;i++)
            t.loadTextureFromFile(filename[i],i);
        band=1;
    }
    glPushMatrix();
    //glRotatef(180,0,1,0);
    glScalef(0.8,0.8,0.8);

    //Cabeza

    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(0,cabeza,i);
                    break;
            case 4: t.texturiza(1,cabeza,i);
                    break;
            case 8: t.texturiza(2,cabeza,i);
                    break;
            case 12: t.texturiza(3,cabeza,i);
                     break;
            case 16: t.texturiza(4,cabeza,i);
                     break;
            case 20: t.texturiza(5,cabeza,i);
                     break;
        }
        i+=4;
    }

    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(6,torso,i);
                    break;
            case 4: t.texturiza(7,torso,i);
                    break;
            case 8: t.texturiza(8,torso,i);
                    break;
            case 12: t.texturiza(9,torso,i);
                     break;
            case 16: t.texturiza(10,torso,i);
                     break;
            case 20: t.texturiza(11,torso,i);
                     break;
        }
        i+=4;
    }

    //Pata izquierda enfrente

    glPushMatrix();
    glTranslatef(0,0.3,-mov);
    glRotated(grado,1,0,0);
    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(12,pata,i);
                    break;
            case 4: t.texturiza(13,pata,i);
                    break;
            case 8: t.texturiza(14,pata,i);
                    break;
            case 12: t.texturiza(15,pata,i);
                     break;
            case 16: t.texturiza(16,pata,i);
                     break;
            case 20: t.texturiza(17,pata,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();
//pata izquierda atras

    glPushMatrix();
    glTranslatef(0,0,-3);
     glPushMatrix();
    glTranslatef(0,0.3,mov);
    glRotated(grado,1,0,0);
     i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(13,pata,i);
                    break;
            case 4: t.texturiza(12,pata,i);
                    break;
            case 8: t.texturiza(14,pata,i);
                    break;
            case 12: t.texturiza(15,pata,i);
                     break;
            case 16: t.texturiza(16,pata,i);
                     break;
            case 20: t.texturiza(17,pata,i);
                     break;
        }
        i+=4;
    }
     glPopMatrix();
    glPopMatrix();


//Pata derecha enfrente
    glPushMatrix();
    glTranslated(3,0,0);
    glPushMatrix();
    glTranslatef(0,0.3,-mov);
    glRotated(grado,-1,0,0);
     i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(13,pata,i);
                    break;
            case 4: t.texturiza(12,pata,i);
                    break;
            case 8: t.texturiza(14,pata,i);
                    break;
            case 12: t.texturiza(15,pata,i);
                     break;
            case 16: t.texturiza(16,pata,i);
                     break;
            case 20: t.texturiza(17,pata,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();
     glPopMatrix();

    //Pata derecha atras
    glPushMatrix();
    glTranslated(3,0,-3);
    glPushMatrix();
    glTranslatef(0,0.3,-mov);
    glRotated(grado,-1,0,0);
    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(12,pata,i);
                    break;
            case 4: t.texturiza(13,pata,i);
                    break;
            case 8: t.texturiza(14,pata,i);
                    break;
            case 12: t.texturiza(15,pata,i);
                     break;
            case 16: t.texturiza(16,pata,i);
                     break;
            case 20: t.texturiza(17,pata,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

}
void Cerdo::update(int bandera)
{
  if(bandera==0)
    {
           if(grado<=30 and band2==0)
        {
            if(grado==30)
                band2=1;
            grado+=1;
            mov+=0.05;
        }
        else
        {
            if(grado>=-30)
        {
                if(grado==-30)
                    band2=0;
            grado=grado-1;
            mov=mov-0.05;
        }
        }
    }
    else
    {
        mov=0;
        grado=0;
    }

}

