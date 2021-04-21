#include "Zombie.h"

Zombie::Zombie()
{

    pierna[0][0]=0; pierna[0][1]=3; pierna[0][2]=0;
    pierna[1][0]=1; pierna[1][1]=3; pierna[1][2]=0;
    pierna[2][0]=1; pierna[2][1]=0; pierna[2][2]=0;
    pierna[3][0]=0; pierna[3][1]=0; pierna[3][2]=0;

    pierna[4][0]=0; pierna[4][1]=3; pierna[4][2]=-1;
    pierna[5][0]=1; pierna[5][1]=3; pierna[5][2]=-1;
    pierna[6][0]=1; pierna[6][1]=0; pierna[6][2]=-1;
    pierna[7][0]=0; pierna[7][1]=0; pierna[7][2]=-1;

    pierna[8][0]=0; pierna[8][1]=3; pierna[8][2]=0;
    pierna[9][0]=1; pierna[9][1]=3; pierna[9][2]=0;
    pierna[10][0]=1; pierna[10][1]=3; pierna[10][2]=-1;
    pierna[11][0]=0; pierna[11][1]=3; pierna[11][2]=-1;

    pierna[12][0]=0; pierna[12][1]=0; pierna[12][2]=0;
    pierna[13][0]=1; pierna[13][1]=0; pierna[13][2]=0;
    pierna[14][0]=1; pierna[14][1]=0; pierna[14][2]=-1;
    pierna[15][0]=0; pierna[15][1]=0; pierna[15][2]=-1;

    pierna[16][0]=1; pierna[16][1]=3; pierna[16][2]=0;
    pierna[17][0]=1; pierna[17][1]=3; pierna[17][2]=-1;
    pierna[18][0]=1; pierna[18][1]=0; pierna[18][2]=-1;
    pierna[19][0]=1; pierna[19][1]=0; pierna[19][2]=0;

    pierna[20][0]=0; pierna[20][1]=3; pierna[20][2]=0;
    pierna[21][0]=0; pierna[21][1]=3; pierna[21][2]=-1;
    pierna[22][0]=0; pierna[22][1]=0; pierna[22][2]=-1;
    pierna[23][0]=0; pierna[23][1]=0; pierna[23][2]=0;

    torso[0][0]=0; torso[0][1]=6; torso[0][2]=0;
    torso[1][0]=2; torso[1][1]=6; torso[1][2]=0;
    torso[2][0]=2; torso[2][1]=3; torso[2][2]=0;
    torso[3][0]=0; torso[3][1]=3; torso[3][2]=0;

    torso[4][0]=0; torso[4][1]=6; torso[4][2]=-1;
    torso[5][0]=2; torso[5][1]=6; torso[5][2]=-1;
    torso[6][0]=2; torso[6][1]=3; torso[6][2]=-1;
    torso[7][0]=0; torso[7][1]=3; torso[7][2]=-1;


    torso[8][0]=0; torso[8][1]=3; torso[8][2]=0;
    torso[9][0]=2; torso[9][1]=3; torso[9][2]=0;
    torso[10][0]=2; torso[10][1]=3; torso[10][2]=-1;
    torso[11][0]=0; torso[11][1]=3; torso[11][2]=-1;

    torso[12][0]=0; torso[12][1]=6; torso[12][2]=0;
    torso[13][0]=2; torso[13][1]=6; torso[13][2]=0;
    torso[14][0]=2; torso[14][1]=6; torso[14][2]=-1;
    torso[15][0]=0; torso[15][1]=6; torso[15][2]=-1;


    torso[16][0]=2; torso[16][1]=6; torso[16][2]=0;
    torso[17][0]=2; torso[17][1]=6; torso[17][2]=-1;
    torso[18][0]=2; torso[18][1]=3; torso[18][2]=-1;
    torso[19][0]=2; torso[19][1]=3; torso[19][2]=0;

    torso[20][0]=0; torso[20][1]=6; torso[20][2]=0;
    torso[21][0]=0; torso[21][1]=6; torso[21][2]=-1;
    torso[22][0]=0; torso[22][1]=3; torso[22][2]=-1;
    torso[23][0]=0; torso[23][1]=3; torso[23][2]=0;

    cabeza[0][0]=0; cabeza[0][1]=8; cabeza[0][2]=0;
    cabeza[1][0]=2; cabeza[1][1]=8; cabeza[1][2]=0;
    cabeza[2][0]=2; cabeza[2][1]=6; cabeza[2][2]=0;
    cabeza[3][0]=0; cabeza[3][1]=6; cabeza[3][2]=0;
    cabeza[4][0]=0; cabeza[4][1]=8; cabeza[4][2]=-1;
    cabeza[5][0]=2; cabeza[5][1]=8; cabeza[5][2]=-1;
    cabeza[6][0]=2; cabeza[6][1]=6; cabeza[6][2]=-1;
    cabeza[7][0]=0; cabeza[7][1]=6; cabeza[7][2]=-1;

    cabeza[8][0]=0; cabeza[8][1]=6; cabeza[8][2]=0;
    cabeza[9][0]=2; cabeza[9][1]=6; cabeza[9][2]=0;
    cabeza[10][0]=2; cabeza[10][1]=6; cabeza[10][2]=-1;
    cabeza[11][0]=0; cabeza[11][1]=6; cabeza[11][2]=-1;
    cabeza[12][0]=0; cabeza[12][1]=8; cabeza[12][2]=0;
    cabeza[13][0]=2; cabeza[13][1]=8; cabeza[13][2]=0;
    cabeza[14][0]=2; cabeza[14][1]=8; cabeza[14][2]=-1;
    cabeza[15][0]=0; cabeza[15][1]=8; cabeza[15][2]=-1;

    cabeza[16][0]=2; cabeza[16][1]=8; cabeza[16][2]=0;
    cabeza[17][0]=2; cabeza[17][1]=8; cabeza[17][2]=-1;
    cabeza[18][0]=2; cabeza[18][1]=6; cabeza[18][2]=-1;
    cabeza[19][0]=2; cabeza[19][1]=6; cabeza[19][2]=0;
    cabeza[20][0]=0; cabeza[20][1]=8; cabeza[20][2]=0;
    cabeza[21][0]=0; cabeza[21][1]=8; cabeza[21][2]=-1;
    cabeza[22][0]=0; cabeza[22][1]=6; cabeza[22][2]=-1;
    cabeza[23][0]=0; cabeza[23][1]=6; cabeza[23][2]=0;
}

Zombie::~Zombie()
{
    //dtor
}
void Zombie::loadTextureFromFile(char *filename)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
	glEnable(GL_DEPTH_TEST);

	RgbImage theTexMap( filename );

    //generate an OpenGL texture ID for this texture
    glGenTextures(1, &texture[0]);
    //bind to the new texture ID
    glBindTexture(GL_TEXTURE_2D, texture[0]);


    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexImage2D(GL_TEXTURE_2D, 0, 3, theTexMap.GetNumCols(), theTexMap.GetNumRows(), 0,
                     GL_RGB, GL_UNSIGNED_BYTE, theTexMap.ImageData());
    theTexMap.Reset();
}

void Zombie::draw()
{
    int i;
    glColor3f(1.0f, 1.0f, 1.0f);
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(pierna[i]);
            glVertex3fv(pierna[i+1]);
            glVertex3fv(pierna[i+2]);
            glVertex3fv(pierna[i+3]);
        glEnd();
        i+=4;
    }

    glPushMatrix();
    glTranslatef(1,0,0);
    glColor3f(1.0f, 0.0f, 0.0f);
    i=0;
    while(i<4)
    {
        glBegin(GL_QUADS);
            glVertex3fv(pierna[i]);
            glVertex3fv(pierna[i+1]);
            glVertex3fv(pierna[i+2]);
            glVertex3fv(pierna[i+3]);
        glEnd();
        i+=4;
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1,4.5,-1);
    glScaled(1,1.5,1);
    glRotated(90,1,0,0);
    glColor3f(0.0f, 1.0f, 0.0f);
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(pierna[i]);
            glVertex3fv(pierna[i+1]);
            glVertex3fv(pierna[i+2]);
            glVertex3fv(pierna[i+3]);
        glEnd();
        i+=4;
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2,4.5,-1);
    glScaled(1,1.5,1);
    glRotated(90,1,0,0);

    glColor3f(0.0f, 0.0f, 1.0f);
    i=0;
    while(i<24)
    {
        glBegin(GL_QUADS);
            glVertex3fv(pierna[i]);
            glVertex3fv(pierna[i+1]);
            glVertex3fv(pierna[i+2]);
            glVertex3fv(pierna[i+3]);
        glEnd();
        i+=4;
    }
    glPopMatrix();
    glColor3f(1.0f, 1.0f, 0.0f);
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
    glColor3f(0.0f, 1.0f, 1.0f);
    i=0;
    while(i<24)
    {
        if(i==0)
        {
            loadTextureFromFile(filename);
            glEnable(GL_TEXTURE_2D);
            glBindTexture(GL_TEXTURE_2D, texture[0]);
            glBegin(GL_QUADS);
                glTexCoord2f(cabeza[i][0], cabeza[i][1]);
                glVertex3fv(cabeza[i]);
                glTexCoord2f(cabeza[i+1][0], cabeza[i+1][1]);
                glVertex3fv(cabeza[i+1]);
                glTexCoord2f(cabeza[i+2][0], cabeza[i+2][1]);
                glVertex3fv(cabeza[i+2]);
                glTexCoord2f(cabeza[i+3][0], cabeza[i+3][1]);
                glVertex3fv(cabeza[i+3]);
            glEnd();
        }
        else
        {
            glBegin(GL_QUADS);
                glVertex3fv(cabeza[i]);
                glVertex3fv(cabeza[i+1]);
                glVertex3fv(cabeza[i+2]);
                glVertex3fv(cabeza[i+3]);
            glEnd();
        }
        i+=4;
    }
}
