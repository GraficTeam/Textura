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
    arb.draw();
    //personaje.draw();
    //zombie.draw();
}

void Escenario::update()
{

}
