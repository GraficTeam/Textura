
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


#include <GL/glut.h>
#include <stdlib.h>
#include "Steve.h"
#include "Fuente.h"
#include "Cerdo.h"
#include "Zombie.h"

GLint ancho,alto;
int hazPerspectiva = 0;

float EYE_X = 3.0;
float EYE_Y = 6.0;
float EYE_Z = 4.5;
float CENTER_X = 0;
float CENTER_Y = 0;
float CENTER_Z = 0;
float UP_X = 0;
float UP_Y = 1;
float UP_Z = 0;

Steve obj;
Fuente fuen;
Cerdo cochi;

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
        glOrtho(-20, 20, -20, 20, 1, 20);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(EYE_X,EYE_Y,EYE_Z,CENTER_X,CENTER_Y,CENTER_Z,UP_X,UP_Y,UP_Z);
    ancho = width;
    alto = height;
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

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    drawAxis();
    //fuen.draw();
    obj.draw();
    //cochi.draw();
    glutSwapBuffers();
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


int main(int argc, char *argv[])
{
    //se inicializa la pantalla grafica
      glutInit(&argc, argv);
      //establece el modo de visualizacion
      glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
      //Establece la posicion de la esquina superior izquierda del grafico en la pantalla
      glutInitWindowPosition(100,100);
      //se establece el ancho y la altura de la ventana de visualizacion
      glutInitWindowSize(1080,640);
      //se crea la ventana de visualizacion
      glutCreateWindow("Sistema");
      //se ejecuta la funcion de inicializacion de parametros
      init();
      //se envian los graficos a pantalla
      glutDisplayFunc(display);
      glutReshapeFunc(reshape);
      glutIdleFunc(idle);
      glutKeyboardFunc(keyboard);
      glutMainLoop();
      return 0;
}
