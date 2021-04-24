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

void Textur::texturizaM(int nText,float aux[][3],int i)
{
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture[nText]);
    glBegin(GL_QUADS);
        glTexCoord3fv(aux[i]);
        glVertex3fv(aux[i]);
        glTexCoord3fv(aux[i+1]);
        glVertex3fv(aux[i+1]);
        glTexCoord3fv(aux[i+2]);
        glVertex3fv(aux[i+2]);
        glTexCoord3fv(aux[i+3]);
        glVertex3fv(aux[i+3]);
    glEnd();
    glDisable(GL_TEXTURE_2D);
}

void Textur::multiplicar(float A[][4],float aux[])
{
    int bond,i,j,k;//variable bandera
    float auxi[3];//Punto auxiliar
    float arreAux[4],suma;//Arreglo auxiliar para multiplicar y variable suma
    arreAux[3]=1;//El 1 nos ayuda a multiplicar porque necesitamos (x,y,z,1)
    //Se guarda el punto en el arreglo auxiliar
    arreAux[0]=aux[0];
    arreAux[1]=aux[1];
    arreAux[2]=aux[2];
    //Bond nos ayuda a asignar el nuevo objeto punto
    bond=0;
    //El ciclo se hace 3 veces k se mueve en las filas
    for (k=0;k<3;k++)
    {
        //Suma guarda la suma de fila por columna
        suma=0;
        //j apunta a las columnas de la matriz y a la coordenada
        for (j=0;j<4;j++)
        {
            suma=suma+A[k][j]*arreAux[j];
        }
        //Si bond=0 suma es la componete x
        if(bond==0)
        {
            auxi[0]=suma;
            bond=1;
        }
        //Sino, la suma es la componente y
        else
        {
            if(bond==1)
            {
                auxi[1]=suma;
                bond=2;
            }
            else
                auxi[2]=suma;
        }
    }
    //Se guarda el nuevo punto
    aux[0]=auxi[0];
    aux[1]=auxi[1];
    aux[2]=auxi[2];
}

