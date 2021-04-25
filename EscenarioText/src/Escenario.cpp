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
    int i;
    //Dibuja pasto
    if(bond==false)
    {
        t.loadTextureFromFile(filename,0);
        bond=true;
    }
    t.texturizaM(0,pasto,0);
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
    for(i=0;i<8;i++)
    {
        glPushMatrix();
        glTranslated(Tarb[i][0],Tarb[i][1],Tarb[i][2]);
        arb[i].draw();
        glPopMatrix();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(25-velocidad1,0,-1.5);
    glRotated(270,0,1,0);
    cerd.draw();
    glPopMatrix();

    glPushMatrix();
    personaje.Rotate(180,0,1,0);
    personaje.Translate(5,0,-2);
    personaje.draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(40-velocidad1,0,6);
    glRotated(270,0,1,0);
    zombie.draw();
    glPopMatrix();


    //Nubes
    glPushMatrix();
    glTranslatef(15,40,0);
    nub.draw(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-30,40,2);
    nub.draw(2);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10,40,-35);
    nub.draw(3);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(50,40,-35);
    nub.draw(1);
    glPopMatrix();



}

bool Escenario::Choque(float x,float z)
{
    return personaje.Choque(x,z,1.0);
}
void Escenario::update()
{
    if(velocidad1<30)
    {
        velocidad1=velocidad1+0.1;
        cerd.update(0);
        zombie.update(0);
    }
    else
    {
        cerd.update(1);
        zombie.update(1);
    }
}
