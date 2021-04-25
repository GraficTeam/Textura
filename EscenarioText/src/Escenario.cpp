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
    casa[0].Scale(9);
    casa[0].Translate(1.5,0,-2);
    //glScalef(9,9,9);
    //glTranslated(1.5,0,-2.0);
    casa[0].draw();
    glPopMatrix();

    glPushMatrix();
    casa[1].Scale(9);
    casa[1].Translate(-3.5,0,-2);
    //glScalef(9,9,9);
    //glTranslated(-3.5,0,-2.0);
    casa[1].draw();
    glPopMatrix();

    glPushMatrix();
    casa[2].Scale(9);
    casa[2].Translate(3.5,0,2);
    casa[2].Rotate(180,0,1,0);
    //glScalef(9,9,9);
    //glTranslated(3.5,0,2);
    //glRotated(180,0,1,0);
    casa[2].draw();
    glPopMatrix();

    glPushMatrix();
    casa[3].Scale(9);
    casa[3].Translate(-1.5,0,2);
    casa[3].Rotate(180,0,1,0);
    //glScalef(9,9,9);
    //glTranslated(-1.5,0,2);
    //glRotated(180,0,1,0);
    casa[3].draw();
    glPopMatrix();

    glPushMatrix();
    casa[4].Scale(9);
    casa[4].Rotate(270,0,1,0);
    casa[4].Translate(-10,0,-1.5);
    //glScalef(9,9,9);
    //glRotated(270,0,1,0);
    //glTranslated(-10,0,-1.5);
    casa[4].draw();
    glPopMatrix();

    glPushMatrix();
    casa[5].Scale(9);
    casa[5].Translate(-1.5,0,-7);
    casa[5].Rotate(90,0,1,0);
    //glScalef(9,9,9);
    //glTranslated(-1.5,0,-7);
    //glRotated(90,0,1,0);
    casa[5].draw();
    glPopMatrix();

    glPushMatrix();
    casa[6].Scale(9);
    casa[6].Rotate(270,0,1,0);
    casa[6].Translate(7,0,-1.5);
    //glScalef(9,9,9);
    //glRotated(270,0,1,0);
    //glTranslated(7,0,-1.5);
    casa[6].draw();
    glPopMatrix();

    glPushMatrix();
    casa[7].Scale(9);
    casa[7].Rotate(90,0,1,0);
    casa[7].Translate(-9,0,-1.5);
    //glScalef(9,9,9);
    //glRotated(90,0,1,0);
    //glTranslated(-9,0,-1.5);
    casa[7].draw();
    glPopMatrix();

    glPushMatrix();
    casa[8].Scale(9);
    casa[8].Translate(-6.5,0,2);
    casa[8].Rotate(180,0,1,0);
    //glScalef(9,9,9);
    //glTranslated(-6.5,0,2);
    //glRotated(180,0,1,0);
    casa[8].draw();
    glPopMatrix();

    glPushMatrix();
    casa[9].Scale(9);
    casa[9].Translate(-8.5,0,-2);
    //glScalef(9,9,9);
    //glTranslated(-8.5,0,-2.0);
    casa[9].draw();
    glPopMatrix();

    glPushMatrix();
    casa[10].Scale(9);
    casa[10].Translate(9,0,1.5);
    casa[10].Rotate(255,0,1,0);
    //glScalef(9,9,9);
    //glTranslated(9,0,1.5);
    //glRotated(225,0,1,0);
    casa[10].draw();
    glPopMatrix();

    glPushMatrix();
    casa[11].Scale(9);
    casa[11].Translate(7.5,0,-3);
    casa[11].Rotate(315,0,1,0);
    //glScalef(9,9,9);
    //glTranslated(7.5,0,-3);
    //glRotated(315,0,1,0);
    casa[11].draw();
    glPopMatrix();

    glPushMatrix();
    fuente.Scale(2);
    fuente.Translate(23,0,2.5);
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
    cerd.Translate(25-velocidad1,0,-1.5);
    cerd.Rotate(270,0,1,0);
    cerd.draw();
    glPopMatrix();

    glPushMatrix();
    personaje.Rotate(180,0,1,0);
    personaje.Translate(5,0,-2);
    personaje.draw();
    glPopMatrix();

    glPushMatrix();
    zombie.Translate(40-velocidad1,0,6);
    zombie.Rotate(270,0,1,0);

    zombie.draw();
    glPopMatrix();


    //Nubes

        //Nubes
    glPushMatrix();
    for (i=0; i<7;i++)
    {
        glPushMatrix();
        glTranslated(Tnub1[i][0],Tnub1[i][1],Tnub1[i][2]);
        glScaled(1,2,1);
        nub.draw(1);
        glPopMatrix();
    }
    glPopMatrix();

    glPushMatrix();
    for (i=0; i<6;i++)
    {
        glPushMatrix();
        glTranslated(Tnub2[i][0],Tnub2[i][1],Tnub2[i][2]);
        glScaled(1,2,1);
        nub.draw(2);
        glPopMatrix();
    }
    glPopMatrix();

    glPushMatrix();
    for (i=0; i<6;i++)
    {
        glPushMatrix();
        glTranslated(Tnub3[i][0],Tnub3[i][1],Tnub3[i][2]);
        glScaled(1,2,1);
        nub.draw(3);
        glPopMatrix();
    }
    glPopMatrix();

    glPushMatrix();
    for (i=0; i<5;i++)
    {
        glPushMatrix();
        glTranslated(Tnub4[i][0],Tnub4[i][1],Tnub4[i][2]);
        glScaled(1,2,1);
        nub.draw(3);
        glPopMatrix();
    }
    glPopMatrix();

}

bool Escenario::Choque(float x,float z)
{
    int i=0;
    int bandera=0;
    if(personaje.Choque(x,z,1.0)==true)
         return personaje.Choque(x,z,1.0);
    else
    {
        if(zombie.Choque(x,z,1.0)==true)
            return zombie.Choque(x,z,1.0);
        else
            if(fuente.Choque(x,z,1.0)==true)
            return fuente.Choque(x,z,1.0);

            else
                if(cerd.Choque(x,z,1.0)==true)
                    return cerd.Choque(x,z,1.0);
                else{
                   while(i<12&&bandera!=1)
                   {
                       if(casa[i].Choque(x,z,1.0)==true)
                       {
                           bandera=1;
                           return true;
                       }

                       i++;

                   }
                }
    }



       /* ;*/



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
