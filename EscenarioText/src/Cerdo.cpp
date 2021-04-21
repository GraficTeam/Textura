#include "Cerdo.h"

Cerdo::Cerdo()
{
    //C1ra de enfrente
    pata[0][0]=0; pata[0][1]=0; pata[0][2]=0;
    pata[1][0]=1; pata[1][1]=0; pata[1][2]=0;
    pata[2][0]=1; pata[2][1]=1; pata[2][2]=0;
    pata[3][0]=0; pata[3][1]=1; pata[3][2]=0;

    //Cara de atras
    pata[4][0]=0; pata[4][1]=0; pata[4][2]=-1;
    pata[5][0]=1; pata[5][1]=0; pata[5][2]=-1;
    pata[6][0]=1; pata[6][1]=1; pata[6][2]=-1;
    pata[7][0]=0; pata[7][1]=1; pata[7][2]=-1;


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

     //C1ra de enfrente
    cabeza[0][0]=3; cabeza[0][1]=3.5; cabeza[0][2]=-0.5;
    cabeza[1][0]=5.5; cabeza[1][1]=3.5; cabeza[1][2]=-0.5;
    cabeza[2][0]=5.5; cabeza[2][1]=6.5; cabeza[2][2]=-0.5;
    cabeza[3][0]=3; cabeza[3][1]=6.5; cabeza[3][2]=-0.5;


    //Cara de atras
    cabeza[4][0]=3; cabeza[4][1]=3.5; cabeza[4][2]=-3.5;
    cabeza[5][0]=5.5; cabeza[5][1]=3.5; cabeza[5][2]=-3.5;
    cabeza[6][0]=5.5; cabeza[6][1]=6.5; cabeza[6][2]=-3.5;
    cabeza[7][0]=3; cabeza[7][1]=6.5; cabeza[7][2]=-3.5;

    //Cara izquierda
    cabeza[8][0]=3; cabeza[8][1]=3.5; cabeza[8][2]=-0.5;
    cabeza[9][0]=3; cabeza[9][1]=6.5; cabeza[9][2]=-0.5;
    cabeza[10][0]=3; cabeza[10][1]=6.5; cabeza[10][2]=-3.5;
    cabeza[11][0]=3; cabeza[11][1]=3.5; cabeza[11][2]=-3.5;

    //Cara derecha
    cabeza[12][0]=5.5; cabeza[12][1]=3.5; cabeza[12][2]=-0.5;
    cabeza[13][0]=5.5; cabeza[13][1]=6.5; cabeza[13][2]=-0.5;
    cabeza[14][0]=5.5; cabeza[14][1]=6.5; cabeza[14][2]=-3.5;
    cabeza[15][0]=5.5; cabeza[15][1]=3.5; cabeza[15][2]=-3.5;

    //Cara de arriba
    cabeza[16][0]=3; cabeza[16][1]=6.5; cabeza[16][2]=-0.5;
    cabeza[17][0]=5.5; cabeza[17][1]=6.5; cabeza[17][2]=-0.5;
    cabeza[18][0]=5.5; cabeza[18][1]=6.5; cabeza[18][2]=-3.5;
    cabeza[19][0]=3; cabeza[19][1]=6.5; cabeza[19][2]=-3.5;


    //Cara de abajo
    cabeza[20][0]=3; cabeza[20][1]=3.5; cabeza[20][2]=-0.5;
    cabeza[21][0]=5.5; cabeza[21][1]=3.5; cabeza[21][2]=-0.5;
    cabeza[22][0]=5.5; cabeza[22][1]=3.5; cabeza[22][2]=-3.5;
    cabeza[23][0]=3; cabeza[23][1]=3.5; cabeza[23][2]=-3.5;



}

Cerdo::~Cerdo()
{
    //dtor
}

void Cerdo::draw()
{



    int i;
  glColor3f(2.0f, 0.8f, 1.0f);//Lilac
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(cabeza[i]);
            glVertex3fv(cabeza[i+1]);
            glVertex3fv(cabeza[i+2]);
            glVertex3fv(cabeza[i+3]);
        glEnd();
        i+=4;
    }

  glColor3f(2.0f, 0.3f, 1.0f);//Lilac
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(torso[i]);
            glVertex3fv(torso[i+1]);
            glVertex3fv(torso[i+2]);
            glVertex3fv(torso[i+3]);
        glEnd();
        i+=4;
    }

    glPushMatrix();
    glColor3f(2.0f, 0.5f, 1.0f);//Lilac
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(pata[i]);
            glVertex3fv(pata[i+1]);
            glVertex3fv(pata[i+2]);
            glVertex3fv(pata[i+3]);
        glEnd();
        i+=4;
    }
    glPopMatrix();


    glPushMatrix();
    glTranslated(3,0,0);
    glColor3f(2.0f, 0.5f, 1.0f);//Lilac
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(pata[i]);
            glVertex3fv(pata[i+1]);
            glVertex3fv(pata[i+2]);
            glVertex3fv(pata[i+3]);
        glEnd();
        i+=4;
    }
    glPopMatrix();

    glPushMatrix();
    glTranslated(3,0,-3);
    glColor3f(2.0f, 0.5f, 1.0f);//Lilac
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(pata[i]);
            glVertex3fv(pata[i+1]);
            glVertex3fv(pata[i+2]);
            glVertex3fv(pata[i+3]);
        glEnd();
        i+=4;
    }
    glPopMatrix();


}
