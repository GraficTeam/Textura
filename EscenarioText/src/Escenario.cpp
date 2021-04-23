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
    glScalef(9,9,9);
    glTranslated(1.5,0,-2.0);
    casa[0].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(9,9,9);
    glTranslated(-3.5,0,-2.0);
    casa[1].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(9,9,9);
    glTranslated(3.5,0,2);
    glRotated(180,0,1,0);
    casa[2].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(9,9,9);
    glTranslated(-1.5,0,2);
    glRotated(180,0,1,0);
    casa[3].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(9,9,9);
    glRotated(270,0,1,0);
    glTranslated(-10,0,-1.5);
    casa[4].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(9,9,9);
    glTranslated(-1.5,0,-7);
    glRotated(90,0,1,0);
    casa[5].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(9,9,9);
    glRotated(270,0,1,0);
    glTranslated(7,0,-1.5);
    casa[6].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(9,9,9);
    glRotated(90,0,1,0);
    glTranslated(-9,0,-1.5);
    casa[7].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(9,9,9);
    glTranslated(-6.5,0,2);
    glRotated(180,0,1,0);
    casa[8].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(9,9,9);
    glTranslated(-8.5,0,-2.0);
    casa[9].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(9,9,9);
    glTranslated(9,0,1.5);
    glRotated(225,0,1,0);
    casa[10].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(9,9,9);
    glTranslated(7.5,0,-3);
    glRotated(315,0,1,0);
    casa[11].draw();
    glPopMatrix();

    glPushMatrix();
    glScaled(2,2,2);
    glTranslated(23,0,2.5);
    fuente.draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(4,4,4);
    glRotatef(180,0,1,0);
    glTranslated(-13,0,-7);
    arb[0].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(4,4,4);
    glRotatef(180,0,1,0);
    glTranslated(-13,0,8);
    arb[1].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(4,4,4);
    glRotatef(180,0,1,0);
    glTranslated(10.5,0,-6);
    arb[2].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(4,4,4);
    glRotatef(180,0,1,0);
    glTranslated(10.5,0,6.5);
    arb[3].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(4,4,4);
    glRotatef(180,0,1,0);
    glTranslated(-7,0,14);
    arb[4].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(4,4,4);
    glRotatef(180,0,1,0);
    glTranslated(6,0,13);
    arb[5].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(4,4,4);
    glRotatef(180,0,1,0);
    glTranslated(-6,0,-12);
    arb[6].draw();
    glPopMatrix();

    glPushMatrix();
    glScalef(4,4,4);
    glRotatef(180,0,1,0);
    glTranslated(6,0,-12);
    arb[7].draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(25,0,-1.5);
    glRotated(270,0,1,0);
    cerd.draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(40,0,-8);
    glRotated(270,0,1,0);
    personaje.draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(40,0,6);
    glRotated(270,0,1,0);
    zombie.draw();
    glPopMatrix();
}

void Escenario::update()
{

}
