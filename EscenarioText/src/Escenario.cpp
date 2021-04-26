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

void Escenario::draw(float x,float y,float z)
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

    /*
    glPushMatrix();
    fuente.Scale(2);
    fuente.Translate(23,0,2.5);
    fuente.draw();
    glPopMatrix();
    */

    glPushMatrix();
    fuent.Scale(2);
    fuent.Translate(23,0,2.5);
    fuent.draw();
    glPopMatrix();

    glPushMatrix();
    //arb[i].Scale(4);
    //arb[i].Rotate(180,0,1,0);
    //glScalef(4,4,4);
    //glRotatef(180,0,1,0);
    for(i=0;i<8;i++)
    {
        glPushMatrix();
        arb[i].Scale(4);
        arb[i].Rotate(180,0,1,0);
        arb[i].Translate(Tarb[i][0],Tarb[i][1],Tarb[i][2]);
        //glTranslated(Tarb[i][0],Tarb[i][1],Tarb[i][2]);
        arb[i].draw();
        glPopMatrix();
    }
    glPopMatrix();

    glPushMatrix();
    cerd.Translate(moviC[1],0,moviC[2]);
    cerd.Rotate(moviC[0],0,1,0);
    cerd.draw();
    glPopMatrix();

    glPushMatrix();
    //personaje.Rotate(180,0,1,0);
    personaje.Translate(x-1,y-6.5,z+0.5);
    personaje.draw();
    glPopMatrix();

    glPushMatrix();
    zombie.Translate(40-velocidad1,0,6+velocidad2);
    zombie.Rotate(270,0,1,0);
    zombie.Rotate(grado_zom,0,1,0);
    zombie.draw();
    glPopMatrix();

    glPushMatrix();
    zombie2.Translate(moviZ[1],0,moviZ[2]);
    zombie2.Rotate(moviZ[0],0,1,0);
    zombie2.draw();
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

    //Steves
    glPushMatrix();
    for (i=0; i<3;i++)
    {
        glPushMatrix();
        steves[i].Rotate(270,0,1,0);
        glTranslated(Tsteve[i][0],Tsteve[i][1],Tsteve[i][2]);
        steves[i].draw();
        glPopMatrix();
    }
    glPopMatrix();

    glPushMatrix();
    for (i=3; i<6;i++)
    {
        glPushMatrix();
        steves[i].Rotate(90,0,1,0);
        glTranslated(Tsteve[i][0],Tsteve[i][1],Tsteve[i][2]);
        steves[i].draw();
        glPopMatrix();
    }
    glPopMatrix();
/*
    glPushMatrix();
    casita.Translate(0,0,10);
    casita.Scale(9);
    casita.draw();
    glPopMatrix();*/

}

bool Escenario::Choque(float x,float z)
{
    //return false;

    int i=0;
    int bandera=0;
    if(cerd.Choque(x,z,1.0))
        return cerd.Choque(x,z,1.0);
    else
        if(zombie.Choque(x,z,1.0)==true)
            return zombie.Choque(x,z,1.0);
        else
            if(fuent.Choque(x,z,1.0)==true)
            return fuent.Choque(x,z,1.0);

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

                   if(bandera==1)
                        return true;
                   else
                   {
                        i=0;
                       while(i<8&&bandera!=1)
                        {
                       if(arb[i].Choque(x,z,1.0)==true)
                       {
                           bandera=1;
                       }

                       i++;

                    }
                    if(bandera==1)
                        return true;
                    else
                        return false;
                        }
                   }


}
void Escenario::update()
{
    personaje.update(0);
     zombie2.update(0);
    zombie.update(0);
    cerd.update(0);
    int i=0;
    // band_z=1;
    int bandera=0;

    //while
    //colisiones Zombie

/*
    if(casita.Choque(zombie.getX(),zombie.getZ(),1)==false)
    {
        velocidad1=velocidad1+0.1;
        zombie.update(0);
    }
    else
    {
        zombie.update(0);
        grado_zom=90;
        zombie.update(1);
        if (grado_zom==90)
            velocidad2+=0.1;
    }*/
    if(zombie.getZ()<-50||zombie.getZ()>40||zombie.getX()<-40||zombie.getX()>70)
    {
        grado=rand() % 4;
            switch (grado)
            {
                case 0:grado_zom=0;

                    break;
                case 1:grado_zom=90;

                        break;
                case 2:grado_zom=180;

                    break;
                case 3:grado_zom=270;

                    break;

            }

    }
        if(band_z==1)
        {
            grado=rand() % 4;
            switch (grado)
            {
                case 0:grado_zom=0;

                    break;
                case 1:grado_zom=90;

                        break;
                case 2:grado_zom=180;

                    break;
                case 3:grado_zom=270;

                    break;

            }
              band_z=0;
        }
        switch (grado)
            {
                case 0:
                    velocidad1=velocidad1+0.1;
                    break;
                case 1:
                        velocidad2+=0.1;
                        break;
                case 2:
                    velocidad1=velocidad1-0.1;
                    break;
                case 3:
                    velocidad2-=0.1;
                    break;

            }
    if(personaje.Choque(zombie.getX(),zombie.getZ(),1)==true)
            band_z=1;
    else

        if(fuent.Choque(zombie.getX(),zombie.getZ(),1)==true)
        {
            printf("Choque");
            band_z=1;
        }

            else
                if(cerd.Choque(zombie.getX(),zombie.getZ(),1)==true)
                    band_z=1;
                else{
                   while(i<12&&bandera!=1)
                   {
                       if(casa[i].Choque(zombie.getX(),zombie.getZ(),1)==true)
                       {
                           bandera=1;
                           band_z=1;
                       }
                       i++;

                   }

                   if(bandera==1)
                        band_z=1;
                   else
                   {
                        i=0;
                       while(i<8&&bandera!=1)
                        {
                       if(arb[i].Choque(zombie.getX(),zombie.getZ(),1)==true)
                       {
                           bandera=1;
                           //return true;
                       }

                       i++;

                    }
                    if(bandera==1)
                        band_z=1;
                    else
                        band_z=0;
                    }
                }
    switch((int)moviZ[3])
    {
        case 0: if(moviZ[1]>0)
                    moviZ[1]-=0.1;
                else
                {
                    moviZ[0]=0;
                    moviZ[3]=1;
                }
                break;
        case 1: if(moviZ[2]<40)
                    moviZ[2]+=0.1;
                else
                {
                    moviZ[0]=270;
                    moviZ[3]=2;
                }
                break;
        case 2: if(moviZ[1]>-80)
                    moviZ[1]-=0.1;
                else
                {
                    moviZ[0]=180;
                    moviZ[3]=3;
                }
                break;
        case 3: if(moviZ[2]>-40)
                    moviZ[2]-=0.1;
                else
                {
                    moviZ[0]=90;
                    moviZ[3]=4;
                }
                break;
        case 4: if(moviZ[1]<0)
                    moviZ[1]+=0.1;
                else
                {
                    moviZ[0]=0;
                    moviZ[3]=5;
                }
                break;
        case 5: if(moviZ[2]<-5)
                    moviZ[2]+=0.1;
                else
                {
                    moviZ[0]=90;
                    moviZ[3]=6;
                }
                break;
        case 6: if(moviZ[1]<40)
                    moviZ[1]+=0.1;
                else
                {
                    moviZ[0]=180;
                    moviZ[3]=7;
                }
                break;
        case 7: if(moviZ[2]>-40)
                    moviZ[2]-=0.1;
                else
                {
                    moviZ[0]=90;
                    moviZ[3]=8;
                }
                break;
        case 8:if(moviZ[1]<58)
                    moviZ[1]+=0.1;
                else
                {
                    moviZ[0]=0;
                    moviZ[3]=9;
                }
                break;
        case 9: if(moviZ[2]<5)
                    moviZ[2]+=0.1;
                else
                {
                    moviZ[0]=270;
                    moviZ[3]=10;
                }
                break;
        case 10: if(moviZ[1]>40)
                    moviZ[1]-=0.1;
                else
                {
                    moviZ[0]=180;
                    moviZ[3]=11;
                }
                break;
        case 11: if(moviZ[2]>0)
                    moviZ[2]-=0.1;
                else
                {
                    moviZ[0]=270;
                    moviZ[3]=12;
                }
                break;
        case 12: if(moviZ[1]>0)
                    moviZ[1]-=0.1;
                else
                {
                    moviZ[0]=270;
                    moviZ[3]=0;
                }
                break;
    }

    switch((int)moviC[3])
    {
        case 0: if(moviC[2]<12)
                    moviC[2]+=0.1;
                else
                {
                    moviC[0]=90;
                    moviC[3]=1;
                }
                break;
        case 1: if(moviC[1]<-50)
                    moviC[1]+=0.1;
                else
                {
                    moviC[0]=0;
                    moviC[3]=2;
                }
                break;
        case 2: if(moviC[2]<22)
                    moviC[2]+=0.1;
                else
                {
                    moviC[0]=90;
                    moviC[3]=3;
                }
                break;
        case 3: if(moviC[1]<-35)
                    moviC[1]+=0.1;
                else
                {
                    moviC[0]=180;
                    moviC[3]=4;
                }
                break;
        case 4: if(moviC[2]>12)
                    moviC[2]-=0.1;
                else
                {
                    moviC[0]=90;
                    moviC[3]=5;
                }
                break;
        case 5: if(moviC[1]<-20)
                    moviC[1]+=0.1;
                else
                {
                    moviC[0]=180;
                    moviC[3]=6;
                }
                break;
        case 6: if(moviC[2]>8)
                    moviC[2]-=0.1;
                else
                {
                    moviC[0]=90;
                    moviC[3]=7;
                }
                break;
        case 7: if(moviC[1]<40)
                    moviC[1]+=0.1;
                else
                {
                    moviC[0]=180;
                    moviC[3]=8;
                }
                break;
        case 8:if(moviC[2]>-10)
                    moviC[2]-=0.1;
                else
                {
                    moviC[0]=270;
                    moviC[3]=9;
                }
                break;
        case 9: if(moviC[1]>-80)
                    moviC[1]-=0.1;
                else
                {
                    moviC[0]=0;
                    moviC[3]=0;
                }
                break;
    }


}
