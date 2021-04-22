
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
float ZFAR=100.0;
//Variables para definir la posicion del observador
//Por default se inicializa en (0,0,0) y mirando hacia x positivo
//gluLookAt(EYE_X,EYE_Y,EYE_Z,CENTER_X,CENTER_Y,CENTER_Z,UP_X,UP_Y,UP_Z)
float EYE_X=0.0;
float EYE_Y=6.5;
float EYE_Z=0.0;
float CENTER_X=1;
float CENTER_Y=6;
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
float Z_MAX=50;
//Variables para matrices de rotacion y traslación
float Theta=0;
//float Radio=1.0;
float PI = 3.14159265359;
float Direction[3] = {1.0,0.0,0.0};

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

void drawAxis()
{
     //X axis in red
     glBegin(GL_LINES);
       glColor3f(1.0f,0.0f,0.0f);
       glVertex3f(X_MIN,0.0,0.0);
       glColor3f(1.0f,0.0f,0.0f);
       glVertex3f(X_MAX,0.0,0.0);
     glEnd();
     //Y axis in green
     glBegin(GL_LINES);
       glColor3f(0.0f,1.0f,0.0f);
       glVertex3f(0.0,Y_MIN,0.0);
       glColor3f(0.0f,1.0f,0.0f);
       glVertex3f(0.0,Y_MAX,0.0);
     glEnd();
     //Z axis in blue
     glBegin(GL_LINES);
       glColor3f(0.0f,0.0f,1.0f);
       glVertex3f(0.0,0.0,Z_MIN);
       glColor3f(0.0f,0.0f,1.0f);
       glVertex3f(0.0,0.0,Z_MAX);
     glEnd();
 }

void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(FOVY, (GLfloat)WIDTH/HEIGTH, ZNEAR, ZFAR);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(EYE_X,EYE_Y,EYE_Z,CENTER_X,CENTER_Y,CENTER_Z,UP_X,UP_Y,UP_Z);
    glClearColor(0,0,0,0);
    glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
    glShadeModel(GL_FLAT);
}

void LookAt()
{
    Direction[0] = cos(DegToRad(Theta));
    Direction[2] = sin(DegToRad(Theta));
    CENTER_X = EYE_X + Direction[0];
    CENTER_Z = EYE_Z + Direction[2];
}

void SpecialInput(int key, int x, int y)
{
    switch(key){
                case GLUT_KEY_UP:
                     EYE_X += Direction[0];
                     EYE_Y += Direction[1];
                     EYE_Z += Direction[2];
                     CENTER_X = EYE_X + Direction[0];
                     CENTER_Y = EYE_Y + Direction[1];
                     CENTER_Z = EYE_Z + Direction[2];
                     break;
                case GLUT_KEY_DOWN:
                     EYE_X -= Direction[0];
                     EYE_Y -= Direction[1];
                     EYE_Z -= Direction[2];
                     CENTER_X = EYE_X + Direction[0];
                     CENTER_Y = EYE_Y + Direction[1];
                     CENTER_Z = EYE_Z + Direction[2];
                     break;
                case GLUT_KEY_LEFT:
                     Theta -= 1.0f;
                     Theta = (Theta < 0.0) ? 359.0 : Theta;
                     LookAt();
                      break;
                case GLUT_KEY_RIGHT:
                     Theta += 1.0f;
                     Theta = (Theta > 359.0) ? 0.0 : Theta;
                     LookAt();
                     break;
    }

    glLoadIdentity();
    gluLookAt(EYE_X,EYE_Y,EYE_Z,CENTER_X,CENTER_Y,CENTER_Z,UP_X,UP_Y,UP_Z);
    glutPostRedisplay();
}
/*
GLint ancho,alto;
int hazPerspectiva = 0;

float EYE_X = 3.0;
float EYE_Y = 3.0;
float EYE_Z = 2.5;
float CENTER_X = 0;
float CENTER_Y = 0;
float CENTER_Z = 0;
float UP_X = 0;
float UP_Y = 1;
float UP_Z = 0;

//Variables para dibujar los ejes del sistema
float X_MIN=-50;
float X_MAX=50;
float Y_MIN=-50;
float Y_MAX=50;
float Z_MIN=-50;
float Z_MAX=50;

void reshape(int width, int height)
{
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(hazPerspectiva)
        gluPerspective(60.0f,(GLfloat)width/(GLfloat)height,1.0f,80.0f);
    else
        glOrtho(-600, 600, -325, 325, -600, 600);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(EYE_X,EYE_Y,EYE_Z,CENTER_X,CENTER_Y,CENTER_Z,UP_X,UP_Y,UP_Z);
    ancho = width;
    alto = height;
}


void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 'p':
        case 'P':
            hazPerspectiva=1;
            reshape(ancho,alto);
            break;

        case 'o':
        case 'O':
            hazPerspectiva=0;
            reshape(ancho,alto);
            break;

        case '27':
            exit(0);
            break;
    }
}

void init()
{
    glClearColor(0,0,0,0);
    glEnable(GL_DEPTH_TEST);
    ancho = 400;
    alto = 400;
}

void idle()
{
    display();
}

*/
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    esc.draw();
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
      //glutReshapeFunc(reshape);
      //glutIdleFunc(idle);
      glutIdleFunc(display);
      glutSpecialFunc(SpecialInput);
      glutMainLoop();
      return 0;
}
