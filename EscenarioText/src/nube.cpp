#include "nube.h"

nube::nube()
{
    //ctor
}

nube::~nube()
{
    //dtor
}
void nube::draw(int i)
{

    switch (i)
    {
        case 1: glPushMatrix();
                glTranslated(0,0,0);
                glScaled(16,1,12);
                glColor3f(1,1,1);
                glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                glTranslated(6,0,-10);
                glScaled(12,1,10);
                glColor3f(1,1,1);
                glutSolidCube(1);
                glPopMatrix();
        break;


        case 2: glPushMatrix();
                glTranslated(0,0,0);
                glScaled(20,1,14);
                glColor3f(1,1,1);
                glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                glTranslated(-9,0,-10);
                glScaled(12,1,10);
                glColor3f(1,1,1);
                glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                glTranslated(6,0,12);
                glScaled(12,1,10);
                glColor3f(1,1,1);
                glutSolidCube(1);
                glPopMatrix();
        break;
        case 3: glPushMatrix();
                glTranslated(0,0,0);
                glScaled(14,1,14);
                glColor3f(1,1,1);
                glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                glTranslated(0,0,-11);
                glScaled(8,1,8);
                glColor3f(1,1,1);
                glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                glTranslated(0,0,11);
                glScaled(8,1,8);
                glColor3f(1,1,1);
                glutSolidCube(1);
                glPopMatrix();
        break;

        case 4: glPushMatrix();
                glTranslated(0,0,0);
                glScaled(18,1,12);
                glColor3f(1,1,1);
                glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                glTranslated(6,0,-10);
                glScaled(12,1,10);
                glColor3f(1,1,1);
                glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                glTranslated(6,0,10);
                glScaled(12,1,10);
                glColor3f(1,1,1);
                glutSolidCube(1);
                glPopMatrix();
        break;

    }

}
