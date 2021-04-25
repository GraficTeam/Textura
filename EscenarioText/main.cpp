
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include "Escenario.h"

Escenario esc;

//Variables dimensiones de la pantalla
int WIDTH=500;
int HEIGTH=500;
//Variables para establecer los valores de gluPerspective
float FOVY=60.0;
float ZNEAR=0.001;
float ZFAR=500.0;
//Variables para definir la posicion del observador
//Por default se inicializa en (0,0,0) y mirando hacia x positivo
//gluLookAt(EYE_X,EYE_Y,EYE_Z,CENTER_X,CENTER_Y,CENTER_Z,UP_X,UP_Y,UP_Z)
float EYE_X=-20*cos(0);
float EYE_Y=6.5;
float EYE_Z=0.0;
float CENTER_X=1;
float CENTER_Y=6.5;
float CENTER_Z=0;
float UP_X=0;
float UP_Y=1;
float UP_Z=0;
//Variables para dibujar los ejes del sistema
float X_MIN=-50;
float X_MAX=50;
float Y_MIN=-50;
float Y_MAX=50;
float Z_MIN=-50;
float Z_MAX=80;
//Variables para matrices de rotacion y traslación
float Theta=0;
bool band=false,vision=false;
//float Radio=1.0;
float PI = 3.14159265359;
float Direction[3] = {20*cos(0),0.0,0.0};
float Derecha[3] = {0.0,0.0,1.0};

//Recordar que (pi/180 = r/g) donde "r" son radianes y "g" grados
//Se aplica la formula r
float RadToDeg(float r)
{
      return ((180.0*r)/PI);
}

float DegToRad(float g)
{
      return ((g*PI)/180.0);
}

void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(FOVY, (GLfloat)WIDTH/HEIGTH, ZNEAR, ZFAR);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(EYE_X,EYE_Y,EYE_Z,CENTER_X,CENTER_Y,CENTER_Z,UP_X,UP_Y,UP_Z);
    glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
    glShadeModel(GL_FLAT);
}

void LookAt()
{
    Direction[0] = 20*cos(DegToRad(Theta));
    Direction[2] = 20*sin(DegToRad(Theta));
    Derecha[0] = cos(DegToRad(Theta+90));
    Derecha[2] = sin(DegToRad(Theta+90));
    CENTER_X = EYE_X + Direction[0];
    CENTER_Z = EYE_Z + Direction[2];
}

void keyboard(unsigned char key, int x, int y)
{
    float aux_X,aux_Y,aux_Z;
    switch (key)
    {
        case 'A':
        case 'a':
            Theta -= 2.0f;
            Theta = (Theta < 0.0) ? 359.0 : Theta;
            LookAt();
            break;

        case 'D':
        case 'd':
            Theta += 2.0f;
            Theta = (Theta > 359.0) ? 0.0 : Theta;
            LookAt();
            break;

        case ' ':
            band=true;
            break;
        case 'v':
        case 'V':
            if(vision==false)
                vision=true;
            else
                vision=false;
    }
    glLoadIdentity();
    if(vision==false)
        gluLookAt(EYE_X,EYE_Y,EYE_Z,CENTER_X,CENTER_Y,CENTER_Z,UP_X,UP_Y,UP_Z);
    else
        gluLookAt(CENTER_X,CENTER_Y,CENTER_Z,EYE_X,EYE_Y,EYE_Z,UP_X,UP_Y,UP_Z);
    glutPostRedisplay();
}

void SpecialInput(int key, int x, int y)
{
    switch(key){
                case GLUT_KEY_UP:
                        if(esc.Choque(EYE_X + Direction[0]-19*cos(DegToRad(Theta)),EYE_Z + Direction[2]-19*sin(DegToRad(Theta)))==false)
                        {
                            EYE_X += Direction[0]-19*cos(DegToRad(Theta));
                            EYE_Y += Direction[1];
                            EYE_Z += Direction[2]-19*sin(DegToRad(Theta));
                            CENTER_X = EYE_X + Direction[0];
                            CENTER_Y = EYE_Y + Direction[1];
                            CENTER_Z = EYE_Z + Direction[2];
                        }
                     break;
                case GLUT_KEY_DOWN:
                        if(esc.Choque(EYE_X - Direction[0]+19*cos(DegToRad(Theta)),EYE_Z - Direction[2]+19*sin(DegToRad(Theta)))==false)
                        {
                            EYE_X -= Direction[0]-19*cos(DegToRad(Theta));
                            EYE_Y -= Direction[1];
                            EYE_Z -= Direction[2]-19*sin(DegToRad(Theta));
                            CENTER_X = EYE_X + Direction[0];
                            CENTER_Y = EYE_Y + Direction[1];
                            CENTER_Z = EYE_Z + Direction[2];
                        }
                    break;

                case GLUT_KEY_LEFT:
                     if(esc.Choque(EYE_X - Derecha[0],EYE_Z - Derecha[2])==false)
                     {
                        EYE_X -= Derecha[0];
                        EYE_Y -= Derecha[1];
                        EYE_Z -= Derecha[2];
                        CENTER_X -=  Derecha[0];
                        CENTER_Y -=  Derecha[1];
                        CENTER_Z -=  Derecha[2];
                     }
                     break;
                case GLUT_KEY_RIGHT:
                     if(esc.Choque(EYE_X + Derecha[0],EYE_Z + Derecha[2])==false)
                     {
                        EYE_X += Derecha[0];
                        EYE_Y += Derecha[1];
                        EYE_Z += Derecha[2];
                        CENTER_X += Derecha[0];
                        CENTER_Y += Derecha[1];
                        CENTER_Z += Derecha[2];
                     }
                     break;
    }

    glLoadIdentity();
    if(vision==false)
        gluLookAt(EYE_X,EYE_Y,EYE_Z,CENTER_X,CENTER_Y,CENTER_Z,UP_X,UP_Y,UP_Z);
    else
        gluLookAt(CENTER_X,CENTER_Y,CENTER_Z,EYE_X,EYE_Y,EYE_Z,UP_X,UP_Y,UP_Z);
    glutPostRedisplay();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0.482,0.682,0.992,0);
    if(band==true)
    {
        if(EYE_Y<=8.5 && CENTER_Y<=8.5)
        {
            EYE_Y+=0.1;
            CENTER_Y+=0.1;
        }
        else
            band=false;
    }
    else
    {
        if(EYE_Y>6.5 && CENTER_Y>6.5)
        {
            EYE_Y-=0.1;
            CENTER_Y-=0.1;
        }
    }
    glLoadIdentity();
    if(vision==false)
        gluLookAt(EYE_X,EYE_Y,EYE_Z,CENTER_X,CENTER_Y,CENTER_Z,UP_X,UP_Y,UP_Z);
    else
        gluLookAt(CENTER_X,CENTER_Y,CENTER_Z,EYE_X,EYE_Y,EYE_Z,UP_X,UP_Y,UP_Z);
    glutPostRedisplay();
    esc.draw(EYE_X,EYE_Y,EYE_Z);
    esc.update();
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    //se inicializa la pantalla grafica
      glutInit(&argc, argv);
      //establece el modo de visualizacion
      glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
      //Establece la posicion de la esquina superior izquierda del grafico en la pantalla
      glutInitWindowPosition(100,100);
      //se establece el ancho y la altura de la ventana de visualizacion
      glutInitWindowSize(1200,650);
      //se crea la ventana de visualizacion
      glutCreateWindow("Sistema");
      //se ejecuta la funcion de inicializacion de parametros
      init();
      //se envian los graficos a pantalla
      glutDisplayFunc(display);
      glutIdleFunc(display);
      glutSpecialFunc(SpecialInput);
      glutKeyboardFunc(keyboard);
      glutMainLoop();
      return 0;
}
