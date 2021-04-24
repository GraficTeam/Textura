#include "Steve.h"

Steve::Steve()
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

    cabeza[4][0]=0; cabeza[4][1]=8; cabeza[4][2]=-2;
    cabeza[5][0]=2; cabeza[5][1]=8; cabeza[5][2]=-2;
    cabeza[6][0]=2; cabeza[6][1]=6; cabeza[6][2]=-2;
    cabeza[7][0]=0; cabeza[7][1]=6; cabeza[7][2]=-2;

    //abajo
    cabeza[8][0]=0; cabeza[8][1]=6; cabeza[8][2]=0;
    cabeza[9][0]=2; cabeza[9][1]=6; cabeza[9][2]=0;
    cabeza[10][0]=2; cabeza[10][1]=6; cabeza[10][2]=-2;
    cabeza[11][0]=0; cabeza[11][1]=6; cabeza[11][2]=-2;
    //arriba
    cabeza[12][0]=0; cabeza[12][1]=8; cabeza[12][2]=0;
    cabeza[13][0]=2; cabeza[13][1]=8; cabeza[13][2]=0;
    cabeza[14][0]=2; cabeza[14][1]=8; cabeza[14][2]=-2;
    cabeza[15][0]=0; cabeza[15][1]=8; cabeza[15][2]=-2;

    cabeza[16][0]=2; cabeza[16][1]=8; cabeza[16][2]=0;
    cabeza[17][0]=2; cabeza[17][1]=8; cabeza[17][2]=-2;
    cabeza[18][0]=2; cabeza[18][1]=6; cabeza[18][2]=-2;
    cabeza[19][0]=2; cabeza[19][1]=6; cabeza[19][2]=0;

    cabeza[20][0]=0; cabeza[20][1]=8; cabeza[20][2]=-2;
    cabeza[21][0]=0; cabeza[21][1]=8; cabeza[21][2]=0;
    cabeza[22][0]=0; cabeza[22][1]=6; cabeza[22][2]=0;
    cabeza[23][0]=0; cabeza[23][1]=6; cabeza[23][2]=-2;

    filename[0]="steve.bmp";
    filename[1]="steve_caraTras.bmp";
    filename[2]="steve_caraAba.bmp";
    filename[3]="steve_pelo.bmp";
    filename[4]="steve_caraDer.bmp";
    filename[5]="steve_caraIzq.bmp";

    filename[6]="steve_Pecho.bmp";
    filename[7]="steve_Espalda.bmp";
    filename[8]="steve_cintura.bmp";
    filename[9]="steve_cuello.bmp";
    filename[10]="steve_costDer.bmp";
    filename[11]="steve_costIzq.bmp";

    filename[12]="steve_brazo.bmp";
    filename[13]="steve_brazoAtr.bmp";
    filename[14]="steve_brazoArri.bmp";
    filename[15]="steve_brazoAba.bmp";
    filename[16]="steve_brazoDer.bmp";
    filename[17]="steve_brazoIzq.bmp";

    filename[18]="steve_pierna.bmp";
    filename[19]="steve_piernaAtra.bmp";
    filename[20]="steve_pierArri.bmp";
    filename[21]="steve_pierAba.bmp";
    filename[22]="steve_pierDer.bmp";
    filename[23]="steve_pierIzq.bmp";
}

Steve::~Steve()
{
    //dtor
}

float* Steve::getCentro()
{
    return centro;
}

float Steve::getRadio()
{
    return radio;
}
void Steve::setCentro(float p1[],float p2[],float x,float y,float z)
{
    int i,j;
    float pivote[3],auxp1[3],auxp2[3];
    pivote[0]=x;
    pivote[1]=y;
    pivote[2]=z;
    for(i=0;i<3;i++)
    {
        auxp1[i]=p1[i];
        auxp2[i]=p2[i];
    }
    t.multiplicar(A,pivote);
    t.multiplicar(A,auxp1);
    t.multiplicar(A,auxp2);
    centro[0]=(auxp2[0]+auxp1[0])/2;
    centro[2]=(auxp2[2]+auxp1[2])/2;
    radio=sqrt((centro[0]-pivote[0])*(centro[0]-pivote[0])+(centro[2]-pivote[2])*(centro[2]-pivote[2]));
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

void Steve::Rotar(float ang,float x,float y,float z)
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

void Steve::Trasladar(float tx,float ty,float tz)
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
void Steve::Escalar(float s)
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

void Steve::draw()
{
    int i;
    float p1[3]={0,0,0};
    float p2[3]={2,0,-1};
    //float pivote[3]={};
    setCentro(p1,p2,-1,0,0);
    if(band==0)
    {
        for(i=0;i<24;i++)
            t.loadTextureFromFile(filename[i],i);
        band=1;
    }
    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    //Cabeza
    glPushMatrix();
    glTranslatef(0,0,0.5);
    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(0,cabeza,i);
                    break;
            case 4: t.texturiza(1,cabeza,i);
                    break;
            case 8: t.texturiza(2,cabeza,i);
                    break;
            case 12: t.texturiza(3,cabeza,i);
                     break;
            case 16: t.texturiza(4,cabeza,i);
                     break;
            case 20: t.texturiza(5,cabeza,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();

    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(6,torso,i);
                    break;
            case 4: t.texturiza(7,torso,i);
                    break;
            case 8: t.texturiza(8,torso,i);
                    break;
            case 12: t.texturiza(9,torso,i);
                     break;
            case 16: t.texturiza(10,torso,i);
                     break;
            case 20: t.texturiza(11,torso,i);
                     break;
        }
        i+=4;
    }

    //Brazo izquierdo
    glPushMatrix();
    glTranslatef(-1,3,0);

    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(12,pierna,i);
                    break;
            case 4: t.texturiza(13,pierna,i);
                    break;
            case 8: t.texturiza(14,pierna,i);
                    break;
            case 12: t.texturiza(15,pierna,i);
                     break;
            case 16: t.texturiza(16,pierna,i);
                     break;
            case 20: t.texturiza(17,pierna,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();

    //Brazo derecho
    glPushMatrix();
    glTranslatef(2,3,0);
    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(12,pierna,i);
                    break;
            case 4: t.texturiza(13,pierna,i);
                    break;
            case 8: t.texturiza(14,pierna,i);
                    break;
            case 12: t.texturiza(15,pierna,i);
                     break;
            case 16: t.texturiza(17,pierna,i);
                     break;
            case 20: t.texturiza(16,pierna,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();

    //Pierna izquiera
    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(18,pierna,i);
                    break;
            case 4: t.texturiza(19,pierna,i);
                    break;
            case 8: t.texturiza(20,pierna,i);
                    break;
            case 12: t.texturiza(21,pierna,i);
                     break;
            case 16: t.texturiza(22,pierna,i);
                     break;
            case 20: t.texturiza(23,pierna,i);
                     break;
        }
        i+=4;
    }

    //Pierna derecha
    glPushMatrix();
    glTranslatef(1,0,0);
    i=0;
    while(i<24)
    {
        switch(i)
        {
            case 0: t.texturiza(18,pierna,i);
                    break;
            case 4: t.texturiza(19,pierna,i);
                    break;
            case 8: t.texturiza(20,pierna,i);
                    break;
            case 12: t.texturiza(21,pierna,i);
                     break;
            case 16: t.texturiza(22,pierna,i);
                     break;
            case 20: t.texturiza(23,pierna,i);
                     break;
        }
        i+=4;
    }
    glPopMatrix();

    glPopMatrix();
}


