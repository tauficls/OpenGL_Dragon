#include <iostream>
#include <windows.h>
#include <GL/glut.h>
#include <vector>
#include "line.h"
using namespace std;

void display() {

    /* Initialization */
    /* telingga depan */
    Point <GLfloat> p1(0.368 * 3 - 1, 0.174 * -3);
    Point <GLfloat> p2(0.350 * 3 - 1, 0.146 * -3);
    Point <GLfloat> p3(0.353 * 3 - 1, 0.121 * -3);
    Point <GLfloat> p4(0.398 * 3 - 1, 0.149 * -3);
    Point <GLfloat> p5(0.381 * 3 - 1, 0.155 * -3);
    Point <GLfloat> p6(0.376 * 3 - 1, 0.159 * -3);
    Point <GLfloat> p7(0.368 * 3 - 1, 0.174 * -3);

    /* telingga belakang */
    vector<Point<GLfloat>> points;
    points.push_back(p1);


    color <GLfloat> cb(1.0f, 1.0f, 1.0f, 0.0f);
    color <GLfloat> c(1.0f, 0.0f, 0.0f, 0.0f);

    glClearColor(cb.getR(), cb.getG(), cb.getB(), cb.getA());       // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);                                   // Clear the color buffer

    glColor3f(c.getR(), c.getG(), c.getB()); // Red
//    Draw a Red 1x1 Square centered at origin
    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
        glVertex2f(p1.getX(), p1.getY());    // x, y
        glVertex2f(p2.getX(), p2.getY());    // x, y
        glVertex2f(p3.getX(), p3.getY());    // x, y
        glVertex2f(p4.getX(), p4.getY());
        glVertex2f(p5.getX(), p5.getY());
        glVertex2f(p6.getX(), p6.getY());
        glVertex2f(p7.getX(), p7.getY());
    glEnd();
    glColor3f(c.getR(), c.getG(), c.getB()); // Red
//    Draw a Red 1x1 Square centered at origin
    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
        glVertex2f(p8.getX(), p8.getY());    // x, y
        glVertex2f(p9.getX(), p9.getY());    // x, y
        glVertex2f(p10.getX(), p10.getY());    // x, y
        glVertex2f(p11.getX(), p11.getY());
        glVertex2f(p12.getX(), p12.getY());
        glVertex2f(p13.getX(), p13.getY());
        glVertex2f(p14.getX(), p14.getY());
    glEnd();
//    glBegin(GL_POLYGON);
//        glVertex2f();
//        glVertex2f();
    glFlush();  // Render now

}
int main(int argc, char** argv)
{
   glutInit(&argc, argv);                 // Initialize GLUT
   glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
   glutInitWindowSize(500, 500);   // Set the window's initial width & height
   glutReshapeWindow(1000, 500);
   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
   glutDisplayFunc(display); // Register display callback handler for window re-paint
   glutMainLoop();           // Enter the infinitely event-processing loop
   return 0;
}
