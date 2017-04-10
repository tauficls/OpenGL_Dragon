#include <iostream>
#include <windows.h>
#include <GL/glut.h>
#include "line.h"
using namespace std;

void display() {

    /* Initialization */
    Point <GLfloat> p1(-0.5f, -0.5f);
    Point <GLfloat> p2(0.5f, -0.5f);
    Point <GLfloat> p3(0.5f, 0.5f);
    Point <GLfloat> p4(-0.5f, 0.7f);
    Point <GLfloat> p5(-0.5f, 0.5f);

    color <GLfloat> cb(1.0f, 1.0f, 1.0f, 0.0f);
    color <GLfloat> c(1.0f, 0.0f, 0.0f, 0.0f);

    glClearColor(cb.getR(), cb.getG(), cb.getB(), cb.getA());   // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);                               // Clear the color buffer

   // Draw a Red 1x1 Square centered at origin
    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
        glColor3f(c.getR(), c.getG(), c.getB()); // Red
        glVertex2f(p1.getX(), p1.getY());    // x, y
        glVertex2f(p2.getX(), p2.getY());    // x, y
        glVertex2f(p3.getX(), p3.getY());    // x, y
        glVertex2f(p4.getX(), p4.getY());
        glVertex2f(p5.getX(), p5.getY());

    glEnd();

    glFlush();  // Render now

}
int main(int argc, char** argv)
{
   glutInit(&argc, argv);                 // Initialize GLUT
   glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
   glutInitWindowSize(320, 320);   // Set the window's initial width & height
   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
   glutDisplayFunc(display); // Register display callback handler for window re-paint
   glutMainLoop();           // Enter the infinitely event-processing loop
   return 0;
}
