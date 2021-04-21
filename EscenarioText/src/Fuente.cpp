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
    base[8][0]=0; base[8][1]=0; base[8][2]=0;
    base[9][0]=0; base[9][1]=1; base[9][2]=0;
    base[10][0]=0; base[10][1]=1; base[10][2]=-5;
    base[11][0]=0; base[11][1]=0; base[11][2]=-5;

    //Cara derecha
    base[12][0]=5; base[12][1]=0; base[12][2]=0;
    base[13][0]=5; base[13][1]=1; base[13][2]=0;
    base[14][0]=5; base[14][1]=1; base[14][2]=-5;
    base[15][0]=5; base[15][1]=0; base[15][2]=-5;

    //Cara de arriba
    base[16][0]=0; base[16][1]=1; base[16][2]=0;
    base[17][0]=5; base[17][1]=1; base[17][2]=0;
    base[18][0]=5; base[18][1]=1; base[18][2]=-5;
    base[19][0]=0; base[19][1]=1; base[19][2]=-5;
    //Cara de abajo
    base[20][0]=0; base[20][1]=0; base[20][2]=0;
    base[21][0]=5; base[21][1]=0; base[21][2]=0;
    base[22][0]=5; base[22][1]=0; base[21][2]=-5;
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


}

Fuente::~Fuente()
{
    //dtor
}
void Fuente::draw()
{

    int i;
    glColor3f(1.0f, 1.0f, 1.0f);
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(base[i]);
            glVertex3fv(base[i+1]);
            glVertex3fv(base[i+2]);
            glVertex3fv(base[i+3]);
        glEnd();
        i+=4;
    }

     glPushMatrix();

    glTranslated(1,1,0);
    glScaled(0.8,1,0.8);
    glColor3f(0.0f, 0.0f, 1.0f);
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(base[i]);
            glVertex3fv(base[i+1]);
            glVertex3fv(base[i+2]);
            glVertex3fv(base[i+3]);
        glEnd();
        i+=4;
    }
    glPopMatrix();


    glPushMatrix();
    //glScaled(1,1,1);
    glTranslated(0,7,0);
    glColor3f(1.0f, 1.0f, 1.0f);
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(base[i]);
            glVertex3fv(base[i+1]);
            glVertex3fv(base[i+2]);
            glVertex3fv(base[i+3]);
        glEnd();
        i+=4;
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.2,2.0,0);
    glColor3f(1.2f, 0.0f, 0.0f);
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(columna[i]);
            glVertex3fv(columna[i+1]);
            glVertex3fv(columna[i+2]);
            glVertex3fv(columna[i+3]);
        glEnd();
        i+=4;
    }
    glPopMatrix();


    glPushMatrix();
    glTranslatef(1.2,2.0,-3.5);
    glColor3f(1.2f, 0.0f, 0.0f);
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(columna[i]);
            glVertex3fv(columna[i+1]);
            glVertex3fv(columna[i+2]);
            glVertex3fv(columna[i+3]);
        glEnd();
        i+=4;
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4.8,2.0,0);
    glColor3f(1.2f, 0.0f, 0.0f);
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(columna[i]);
            glVertex3fv(columna[i+1]);
            glVertex3fv(columna[i+2]);
            glVertex3fv(columna[i+3]);
        glEnd();
        i+=4;
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4.8,2.0,-3.5);
    glColor3f(1.2f, 0.0f, 0.0f);
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(columna[i]);
            glVertex3fv(columna[i+1]);
            glVertex3fv(columna[i+2]);
            glVertex3fv(columna[i+3]);
        glEnd();
        i+=4;
    }
    glPopMatrix();

    /*
    glPushMatrix();
    glScaled(5,1,5);
    glColor3f(1.0,0.0,1.0);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,1,0);
    glScaled(4,1,4);
    glColor3f(1.0,0.0,0.0);
    glutSolidCube(1);
    glPopMatrix();


    glPushMatrix();
    glTranslated(0,7,0);
    glScaled(4,1,4);
    glColor3f(1.0,0.0,0.0);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.7,3,1.7);
    glScaled(0.1,7,0.1);
    glColor3f(1.0,0.0,0.0);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-1.7,3,-1.7);
    glScaled(0.1,7,0.1);
    glColor3f(1.0,0.0,0.0);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.7,3,-1.7);
    glScaled(0.1,7,0.1);
    glColor3f(1.0,0.0,0.0);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-1.7,3,1.7);
    glScaled(0.1,7,0.1);
    glColor3f(1.0,0.0,0.0);
    glutSolidCube(1);
    glPopMatrix();*/
}
