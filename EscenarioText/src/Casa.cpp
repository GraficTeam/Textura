#include "Casa.h"


Casa::Casa()


{
    /*
    //Frente
    base[0][0]=0; base[0][1]=10; base[0][2]=0;
    base[1][0]=10; base[1][1]=10; base[1][2]=0;
    base[2][0]=10; base[2][1]=0; base[2][2]=0;
    base[3][0]=0; base[2][1]=0; base[3][2]=0;

    //Atras
    base[4][0]=0; base[4][1]=10; base[4][2]=-10;
    base[5][0]=10; base[5][1]=10; base[5][2]=-10;
    base[6][0]=10; base[6][1]=0; base[6][2]=-10;
    base[7][0]=0; base[7][1]=0; base[7][2]=-10;

    //Izquierda
    base[8][0]=0; base[8][1]=10; base[8][2]=-10;
    base[9][0]=0; base[9][1]=10; base[9][2]=0;
    base[10][0]=0; base[10][1]=0; base[10][2]=0;
    base[11][0]=0; base[11][1]=0; base[11][2]=-10;

    //Derecha
    base[8][0]=0; base[8][1]=10; base[8][2]=0;
    base[9][0]=0; base[9][1]=10; base[9][2]=-10;
    base[10][0]=0; base[10][1]=0; base[10][2]=-10;
    base[11][0]=0; base[11][1]=0; base[11][2]=0;*/

     //Frente
    base[0][0]=0; base[0][1]=2; base[0][2]=0;
    base[1][0]=2; base[1][1]=2; base[1][2]=0;
    base[2][0]=2; base[2][1]=0; base[2][2]=0;
    base[3][0]=0; base[2][1]=0; base[3][2]=0;

    //Atras
    base[4][0]=0; base[4][1]=2; base[4][2]=-2;
    base[5][0]=2; base[5][1]=2; base[5][2]=-2;
    base[6][0]=2; base[6][1]=0; base[6][2]=-2;
    base[7][0]=0; base[7][1]=0; base[7][2]=-2;

    //Izquierda
    base[8][0]=0; base[8][1]=2; base[8][2]=-2;
    base[9][0]=0; base[9][1]=2; base[9][2]=0;
    base[10][0]=0; base[10][1]=0; base[10][2]=0;
    base[11][0]=0; base[11][1]=0; base[11][2]=-2;

    //Derecha
    base[12][0]=2; base[12][1]=2; base[12][2]=0;
    base[13][0]=2; base[13][1]=2; base[13][2]=-2;
    base[14][0]=2; base[14][1]=0; base[14][2]=-2;
    base[15][0]=2; base[15][1]=0; base[15][2]=0;


    //Frente
    techo[0][0]=-0.4; techo[0][1]=2.2; techo[0][2]=0.4;
    techo[1][0]=2.4; techo[1][1]=2.2; techo[1][2]=0.4;
    techo[2][0]=2.4; techo[2][1]=2; techo[2][2]=0.4;
    techo[3][0]=-0.4; techo[3][1]=2; techo[3][2]=0.4;

    //Atras
    techo[4][0]=-0.4; techo[4][1]=2.2; techo[4][2]=-2.4;
    techo[5][0]=2.4; techo[5][1]=2.2; techo[5][2]=-2.4;
    techo[6][0]=2.4; techo[6][1]=2; techo[6][2]=-2.4;
    techo[7][0]=-0.4; techo[7][1]=2; techo[7][2]=-2.4;

    //Izquierda
    techo[8][0]=-0.4; techo[8][1]=2.2; techo[8][2]=-2.4;
    techo[9][0]=-0.4; techo[9][1]=2.2; techo[9][2]=0.4;
    techo[10][0]=-0.4; techo[10][1]=2; techo[10][2]=0.4;
    techo[11][0]=-0.4; techo[11][1]=2; techo[11][2]=-2.4;

    //Derecha
    techo[12][0]=2.4; techo[12][1]=2.2; techo[12][2]=-2.4;
    techo[13][0]=2.4; techo[13][1]=2.2; techo[13][2]=0.4;
    techo[14][0]=2.4; techo[14][1]=2; techo[14][2]=0.4;
    techo[15][0]=2.4; techo[15][1]=2; techo[15][2]=-2.4;

    //Arriba
    techo[16][0]=-0.4; techo[16][1]=2.2; techo[16][2]=-2.4;
    techo[17][0]=2.4; techo[17][1]=2.2; techo[17][2]=-2.4;
    techo[18][0]=2.4; techo[18][1]=2.2; techo[18][2]=0.4;
    techo[19][0]=-0.4; techo[19][1]=2.2; techo[19][2]=0.4;

    //Abajo
    techo[20][0]=-0.4; techo[20][1]=2; techo[20][2]=-2.4;
    techo[21][0]=2.4; techo[21][1]=2; techo[21][2]=-2.4;
    techo[22][0]=2.4; techo[22][1]=2; techo[22][2]=0.4;
    techo[23][0]=-0.4; techo[23][1]=2; techo[23][2]=0.4;




    //FRENTE
    puntosFachaFr[0][0]=-0.65f; puntosFachaFr[0][1]=-1.0f; puntosFachaFr[0][2]=1.0f;
    puntosFachaFr[1][0]=0.65f; puntosFachaFr[1][1]=-1.0f; puntosFachaFr[1][2]=1.0f;
    puntosFachaFr[2][0]=0.65f; puntosFachaFr[2][1]=1.0f; puntosFachaFr[2][2]=1.0f;
    puntosFachaFr[3][0]=-0.65f; puntosFachaFr[3][1]=1.0f; puntosFachaFr[3][2]=1.0f;

    //IZQUIERDA
    puntosFachaV1[0][0]=-1.0f; puntosFachaV1[0][1]=-1.0f; puntosFachaV1[0][2]=-0.6f;
    puntosFachaV1[1][0]=-1.0f; puntosFachaV1[1][1]=-1.0f; puntosFachaV1[1][2]=0.6f;
    puntosFachaV1[2][0]=-1.0f; puntosFachaV1[2][1]=-0.1f; puntosFachaV1[2][2]=0.6f;
    puntosFachaV1[3][0]=-1.0f; puntosFachaV1[3][1]=-0.1f; puntosFachaV1[3][2]=-0.6f;

    //DERECHA
    puntosFachaV2[0][0]=1.5f; puntosFachaV2[0][1]=-1.0f; puntosFachaV2[0][2]=-0.6f;
    puntosFachaV2[1][0]=1.5f; puntosFachaV2[1][1]=-1.0f; puntosFachaV2[1][2]=0.6f;
    puntosFachaV2[2][0]=1.5f; puntosFachaV2[2][1]=-0.1f; puntosFachaV2[2][2]=0.6f;
    puntosFachaV2[3][0]=1.5f; puntosFachaV2[3][1]=-0.1f; puntosFachaV2[3][2]=-0.6f;

    filename[0]="casa_enfrente.bmp";
    filename[1]="casa_atras.bmp";
    filename[2]="madera.bmp";
    filename[3]="borde_madera.bmp";

}

Casa::~Casa()
{
    //dtor
}

void Casa::draw()
{
    /*
    //BASE
    glPushMatrix();
    glTranslated(0,0,0);
    glScaled(2,2,2);
    glColor3f(0.3,0.23,0.29);
    glutSolidCube(1);
    glPopMatrix();*/
    glColor3f(1,1,1);
    int i;
    if(band==0)
    {
        for(i=0;i<4;i++)
            t.loadTextureFromFile(filename[i],i);
        band=1;
    }

    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(0,base,i);
                    break;
            case 4: t.texturiza(1,base,i);
                    break;
            case 8: t.texturiza(1,base,i);
                    break;
            case 12: t.texturiza(1,base,i);
                     break;
            case 16: t.texturiza(1,base,i);
                     break;
            case 20: t.texturiza(1,base,i);
                     break;
        }
        i+=4;
    }
    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(3,techo,i);
                    break;
            case 4: t.texturiza(3,techo,i);
                    break;
            case 8: t.texturiza(3,techo,i);
                    break;
            case 12: t.texturiza(3,techo,i);
                     break;
            case 16: t.texturiza(2,techo,i);
                     break;
            case 20: t.texturiza(2,techo,i);
                     break;
        }
        i+=4;
    }

    glPushMatrix();
    glScaled(0.833,1,0.833);
    glTranslated(0.2,0.2,-0.2);

    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(3,techo,i);
                    break;
            case 4: t.texturiza(3,techo,i);
                    break;
            case 8: t.texturiza(3,techo,i);
                    break;
            case 12: t.texturiza(3,techo,i);
                     break;
            case 16: t.texturiza(2,techo,i);
                     break;
            case 20: t.texturiza(2,techo,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();

    glPushMatrix();
    glScaled(0.75,1,0.75);
    glTranslated(0.4,0.4,-0.4);

    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(3,techo,i);
                    break;
            case 4: t.texturiza(3,techo,i);
                    break;
            case 8: t.texturiza(3,techo,i);
                    break;
            case 12: t.texturiza(3,techo,i);
                     break;
            case 16: t.texturiza(2,techo,i);
                     break;
            case 20: t.texturiza(2,techo,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();

    glPushMatrix();
    glScaled(0.66,1,0.66);
    glTranslated(0.6,0.6,-0.6);

    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(3,techo,i);
                    break;
            case 4: t.texturiza(3,techo,i);
                    break;
            case 8: t.texturiza(3,techo,i);
                    break;
            case 12: t.texturiza(3,techo,i);
                     break;
            case 16: t.texturiza(2,techo,i);
                     break;
            case 20: t.texturiza(2,techo,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();

    glPushMatrix();
    glScaled(0.583,1,0.583);
    glTranslated(0.8,0.8,-0.8);

    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(3,techo,i);
                    break;
            case 4: t.texturiza(3,techo,i);
                    break;
            case 8: t.texturiza(3,techo,i);
                    break;
            case 12: t.texturiza(3,techo,i);
                     break;
            case 16: t.texturiza(2,techo,i);
                     break;
            case 20: t.texturiza(2,techo,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5,1,0.5);
    glTranslated(1,1,-1);

    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(3,techo,i);
                    break;
            case 4: t.texturiza(3,techo,i);
                    break;
            case 8: t.texturiza(3,techo,i);
                    break;
            case 12: t.texturiza(3,techo,i);
                     break;
            case 16: t.texturiza(2,techo,i);
                     break;
            case 20: t.texturiza(2,techo,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();


    glPushMatrix();

    glTranslatef(0.85,-2,0.38);
    glScaled(0.15,1,0.15);

    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(3,techo,i);
                    break;
            case 4: t.texturiza(3,techo,i);
                    break;
            case 8: t.texturiza(3,techo,i);
                    break;
            case 12: t.texturiza(3,techo,i);
                     break;
            case 16: t.texturiza(2,techo,i);
                     break;
            case 20: t.texturiza(2,techo,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();

    glPushMatrix();

    glTranslatef(0.85,-1.8,0.2);
    glScaled(0.15,1,0.075);

    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(3,techo,i);
                    break;
            case 4: t.texturiza(3,techo,i);
                    break;
            case 8: t.texturiza(3,techo,i);
                    break;
            case 12: t.texturiza(3,techo,i);
                     break;
            case 16: t.texturiza(2,techo,i);
                     break;
            case 20: t.texturiza(2,techo,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();

    /*

    //ACABADO GRIS
    glColor3f(0.43f, 0.43f, 0.43f);
    glBegin(GL_QUADS);  //cara frontal
    glVertex3f(puntosFachaFr[0][0], puntosFachaFr[0][1],  puntosFachaFr[0][2]);
    glVertex3f(puntosFachaFr[1][0], puntosFachaFr[1][1],  puntosFachaFr[1][2]);
    glVertex3f(puntosFachaFr[2][0], puntosFachaFr[2][1],  puntosFachaFr[2][2]);
    glVertex3f(puntosFachaFr[3][0], puntosFachaFr[3][1],  puntosFachaFr[3][2]);
    glEnd();

    //Cara izquierda
    glBegin(GL_QUADS);
    glVertex3f(puntosFachaV1[0][0], puntosFachaV1[0][1],  puntosFachaV1[0][2]);
    glVertex3f(puntosFachaV1[1][0], puntosFachaV1[1][1],  puntosFachaV1[1][2]);
    glVertex3f(puntosFachaV1[2][0], puntosFachaV1[2][1],  puntosFachaV1[2][2]);
    glVertex3f(puntosFachaV1[3][0], puntosFachaV1[3][1],  puntosFachaV1[3][2]);
    glEnd();

    //Cara derecha
    glBegin(GL_QUADS);
    glVertex3f(puntosFachaV2[0][0], puntosFachaV2[0][1],  puntosFachaV2[0][2]);
    glVertex3f(puntosFachaV2[1][0], puntosFachaV2[1][1],  puntosFachaV2[1][2]);
    glVertex3f(puntosFachaV2[2][0], puntosFachaV2[2][1],  puntosFachaV2[2][2]);
    glVertex3f(puntosFachaV2[3][0], puntosFachaV2[3][1],  puntosFachaV2[3][2]);
    glEnd();*/
/*
    //TECHO
    glPushMatrix();
    glTranslated(1,2.10,-1);
    glScaled(2.75,0.20,2.5);
    glColor3f(0.65,0.48,0.35);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1,2.30,-1);
    glScaled(2.5,0.20,2.25);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1,2.50,-1);
    glScaled(2.25,0.20,2.0);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1,2.70,-1);
    glScaled(2.0,0.20,1.75);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1,2.90,-1);
    glScaled(1.75,0.20,1.5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1,3.10,-1);
    glScaled(1.5,0.20,1.25);
    glutSolidCube(1);
    glPopMatrix();
    /*
    //PUERTA
    glColor3f(0.96f, 0.76f, 0.5f);
    glBegin(GL_QUADS);  //cara frontal
    glVertex3f(-0.25f, -0.6f,  1.0f);
    glVertex3f(0.25f, -0.6f,  1.0f);
    glVertex3f(0.25f, 0.5f,  1.0f);
    glVertex3f(-0.25f, 0.5f,  1.0f);
    glEnd();

    //VENTANAS
    glBegin(GL_QUADS);  //cara lateral izq
    glVertex3f(-1.0f, -0.1f,  -0.3f);
    glVertex3f(-1.0f, -0.1f,  0.30f);
    glVertex3f(-1.0f, 0.5f,  0.3f);
    glVertex3f(-1.0f, 0.5f,  -0.30f);
    glEnd();

    glBegin(GL_QUADS);  //cara lateral dcha
    glVertex3f(1.0f, -0.1f,  -0.3f);
    glVertex3f(1.0f, -0.1f,  0.30f);
    glVertex3f(1.0f, 0.5f,  0.3f);
    glVertex3f(1.0f, 0.5f,  -0.30f);
    glEnd();
    */
    /*
    //Escaleritas
    glPushMatrix();
    glColor3f(0.65,0.48,0.35);
    glTranslated(1,0,0.25);
    glScaled(0.7,0.3,0.5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.65,0.48,0.35);
    glTranslated(1,0.30,0.25);
    glScaled(0.4,0.3,0.3);
    glutSolidCube(1);
    glPopMatrix();*/
}
