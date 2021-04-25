#include "Colision.h"

Colision::Colision()
{
    //ctor
}

Colision::~Colision()
{
    //dtor
}
void Colision::Rotate(float ang,float x,float y,float z)
{
    float rad=ang*0.0174533;//Convierte los grados a radianes
    float aux[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int i,j,k;
    //Se multiplica la matriz global por la matriz de rotacion Y, se guarda el resultado en la matriz auxiliar
    float rotate_y[4][4]={{cos(rad),0,sin(rad),0},{0,1,0,0},{-1*sin(rad),0,cos(rad),0},{0,0,0,1}}; //Se inicializa la matriz de rotacion Y
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+rotate_y[k][j]*A[i][k];
    for (i=0;i<4;i++)
            for (j=0;j<4;j++)
                A[i][j]=aux[i][j];
    glRotatef(ang,x,y,z);
}

void Colision::Translate(float tx,float ty,float tz)
{
    float trans[4][4]={{1,0,0,tx},{0,1,0,ty},{0,0,1,tz},{0,0,0,1}};//Se inicializa la matriz de translacion
    float aux[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}; //matriz auxiliar
    int i,j,k;
    //Se multiplica la matriz global por la matriz de translacion, se guarda el resultado en la matriz auxiliar
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+trans[k][j]*A[i][k];
    //Actualizacion de la matriz global
    for (i=0;i<4;i++)
            for (j=0;j<4;j++)
                A[i][j]=aux[i][j];
    glTranslatef(tx,ty,tz);
}

void Colision::Scale(float s)
{
    float scale[4][4]={{s,0,0,0},{0,s,0,0},{0,0,s,0},{0,0,0,1}};//Se inicializa la matriz de escalamiento
    float aux[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int i,j,k;
    //Se multiplica la matriz global por la matriz de tescalamiento, se guarda el resultado en la matriz auxiliar
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            for (k=0;k<4;k++)
                aux[i][j]=aux[i][j]+scale[k][j]*A[i][k];
    //Actualizacion de la matriz global
    for (i=0;i<4;i++)
            for (j=0;j<4;j++)
                A[i][j]=aux[i][j];
    glScalef(s,s,s);
}

void Colision::multiplicar(float aux[])
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

void Colision::setCentro(float p1[],float p2[],float piv[],float centro[],float* radio)
{
    int i,j;
    float pivote[3],auxp1[3],auxp2[3];
    for(i=0;i<3;i++)
    {
        pivote[i]=piv[i];
        auxp1[i]=p1[i];
        auxp2[i]=p2[i];
    }
    multiplicar(pivote);
    multiplicar(auxp1);
    multiplicar(auxp2);
    centro[0]=(auxp2[0]+auxp1[0])/2;
    centro[2]=(auxp2[2]+auxp1[2])/2;
    *(radio)=sqrt((centro[0]-pivote[0])*(centro[0]-pivote[0])+(centro[2]-pivote[2])*(centro[2]-pivote[2]));
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
                A[i][j]=1;
            else
                A[i][j]=0;
        }
    }
}

bool Colision::Choque(float* centro,float radio,float x,float z,float rad)
{
    float R;
    cX=*(centro);
    cZ=*(centro+2);
    R=sqrt((cX-x)*(cX-x)+(cZ-z)*(cZ-z))-rad;
    if(R<=radio)
        return true;
    else
        return false;
}
