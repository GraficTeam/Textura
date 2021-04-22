#include "Escenario.h"

Escenario::Escenario()
{
    pasto[0][0]=-600; pasto[0][1]=0; pasto[0][2]=600;
    pasto[1][0]=600; pasto[1][1]=0; pasto[1][2]=600;
    pasto[2][0]=600; pasto[2][1]=0; pasto[2][2]=-600;
    pasto[3][0]=-600; pasto[3][1]=0; pasto[3][2]=-600;
}

Escenario::~Escenario()
{
    //dtor
}

void Escenario::drawAxis()
{
     //X axis in red
     glBegin(GL_LINES);
       glColor3f(1.0f,0.0f,0.0f);
       glVertex3f(-600,0.0,0.0);
       glColor3f(1.0f,0.0f,0.0f);
       glVertex3f(600,0.0,0.0);
     glEnd();
     //Y axis in green
     glBegin(GL_LINES);
       glColor3f(0.0f,1.0f,0.0f);
       glVertex3f(0.0,-325,0.0);
       glColor3f(0.0f,1.0f,0.0f);
       glVertex3f(0.0,325,0.0);
     glEnd();
     //Z axis in blue
     glBegin(GL_LINES);
       glColor3f(0.0f,0.0f,1.0f);
       glVertex3f(0.0,0.0,-900);
       glColor3f(0.0f,0.0f,1.0f);
       glVertex3f(0.0,0.0,900);
     glEnd();
 }

void Escenario::draw()
{
    //Dibuja pasto
    //t.texturiza(filename,0,pasto,0);
    //Dibuja los ejes
    drawAxis();
    glPushMatrix();
    glScalef(4,4,4);
    glRotatef(180,0,1,0);
    arb.draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-10,0,0);
    personaje.draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(12,0,8);
    glScaled(2,2,2);
    fuente.draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,5);
    cerd.draw();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(5,0,0);
    zombie.draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(8,8,8);
    glTranslated(3,1,-3);
    casa.draw();
    glPopMatrix();

    //fuente.draw();
    //cerd.draw();
}

void Escenario::update()
{

}
