#include "Textur.h"

Textur::Textur()
{

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

void Textur::texturiza(int nText,float aux[][3],int i)
{
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture[nText]);
    glBegin(GL_QUADS);
        glTexCoord3f(0,1,0);
        glVertex3fv(aux[i]);
        glTexCoord3f(1,1,0);
        glVertex3fv(aux[i+1]);
        glTexCoord3f(1,0,0);
        glVertex3fv(aux[i+2]);
        glTexCoord3f(0,0,0);
        glVertex3fv(aux[i+3]);
    glEnd();
    glDisable(GL_TEXTURE_2D);
}

