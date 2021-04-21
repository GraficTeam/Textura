#include "Textur.h"

Textur::Textur()
{
    auxT[0][0]=0; auxT[0][1]=1; auxT[0][2]=0;
    auxT[1][0]=1; auxT[1][1]=1; auxT[1][2]=0;
    auxT[2][0]=1; auxT[2][1]=0; auxT[2][2]=0;
    auxT[3][0]=0; auxT[3][1]=0; auxT[3][2]=0;

    auxT[4][0]=0; auxT[4][1]=0; auxT[4][2]=-1;
    auxT[5][0]=1; auxT[5][1]=0; auxT[5][2]=-1;
    auxT[6][0]=1; auxT[6][1]=0; auxT[6][2]=0;
    auxT[7][0]=0; auxT[7][1]=0; auxT[7][2]=0;

    auxT[8][0]=1; auxT[8][1]=1; auxT[8][2]=0;
    auxT[9][0]=1; auxT[9][1]=1; auxT[9][2]=-1;
    auxT[10][0]=1; auxT[10][1]=0; auxT[10][2]=-1;
    auxT[11][0]=1; auxT[11][1]=0; auxT[11][2]=0;
}

Textur::~Textur()
{
    //dtor
}

void Textur::loadTextureFromFile(char *filename,int i)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
	glEnable(GL_DEPTH_TEST);

	RgbImage theTexMap( filename );

    //generate an OpenGL texture ID for this texture
    glGenTextures(1, &texture[i]);
    //bind to the new texture ID
    glBindTexture(GL_TEXTURE_2D, texture[i]);


    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexImage2D(GL_TEXTURE_2D, 0, 3, theTexMap.GetNumCols(), theTexMap.GetNumRows(), 0,
                     GL_RGB, GL_UNSIGNED_BYTE, theTexMap.ImageData());
    theTexMap.Reset();
}

void Textur::texturiza(char *filename,int nText,float aux[][3],int i,int nCara)
{
    if(nCara==1)
        nCara--;
    else
    {
        if(nCara==2)
            nCara=4;
        else
            nCara=8;
    }
    loadTextureFromFile(filename,nText);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture[nText]);
    glBegin(GL_QUADS);
        glTexCoord3fv(auxT[nCara]);
        glVertex3fv(aux[i]);
        glTexCoord3fv(auxT[nCara+1]);
        glVertex3fv(aux[i+1]);
        glTexCoord3fv(auxT[nCara+2]);
        glVertex3fv(aux[i+2]);
        glTexCoord3fv(auxT[nCara+3]);
        glVertex3fv(aux[i+3]);
    glEnd();
    glDisable(GL_TEXTURE_2D);
}
