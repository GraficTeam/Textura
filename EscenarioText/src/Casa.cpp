#include "Casa.h"


Casa::Casa()
{
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
    puntosFachaV2[0][0]=1.0f; puntosFachaV2[0][1]=-1.0f; puntosFachaV2[0][2]=-0.6f;
    puntosFachaV2[1][0]=1.0f; puntosFachaV2[1][1]=-1.0f; puntosFachaV2[1][2]=0.6f;
    puntosFachaV2[2][0]=1.0f; puntosFachaV2[2][1]=-0.1f; puntosFachaV2[2][2]=0.6f;
    puntosFachaV2[3][0]=1.0f; puntosFachaV2[3][1]=-0.1f; puntosFachaV2[3][2]=-0.6f;

}

Casa::~Casa()
{
    //dtor
}

void Casa::draw()
{
    //BASE
    glPushMatrix();
    glTranslated(0,0,0);
    glScaled(2,2,2);
    glColor3f(0.3,0.23,0.29);
    glutSolidCube(1);
    glPopMatrix();

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
    glEnd();

    //TECHO
    glPushMatrix();
    glTranslated(0,1.10,0);
    glScaled(2.75,0.20,2.5);
    glColor3f(0.65,0.48,0.35);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,1.30,0);
    glScaled(2.5,0.20,2.25);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,1.50,0);
    glScaled(2.25,0.20,2.0);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,1.70,0);
    glScaled(2.0,0.20,1.75);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,1.90,0);
    glScaled(1.75,0.20,1.5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,2.10,0);
    glScaled(1.5,0.20,1.25);
    glutSolidCube(1);
    glPopMatrix();

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

    //Escaleritas
    glPushMatrix();
    glColor3f(0.65,0.48,0.35);
    glTranslated(0,-0.9,1.25);
    glScaled(0.7,0.2,0.5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.65,0.48,0.35);
    glTranslated(0,-0.70,1.15);
    glScaled(0.4,0.2,0.3);
    glutSolidCube(1);
    glPopMatrix();
}
