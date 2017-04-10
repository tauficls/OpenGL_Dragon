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

    /* telingga kepala */
    Point <GLfloat> k1(0.427 * 3 - 1, 0.222 * -3);
    Point <GLfloat> k2(0.449 * 3 - 1, 0.205 * -3);
    Point <GLfloat> k3(0.442 * 3 - 1, 0.191 * -3);
    Point <GLfloat> k4(0.428 * 3 - 1, 0.160 * -3);
    Point <GLfloat> k5(0.400 * 3 - 1, 0.150 * -3);
    Point <GLfloat> k6(0.368 * 3 - 1, 0.172 * -3);
    Point <GLfloat> k7(0.366 * 3 - 1, 0.192 * -3);
    Point <GLfloat> k8(0.388 * 3 - 1, 0.210 * -3);
    Point <GLfloat> k9(0.427 * 3 - 1, 0.222 * -3);

    vector<Point<GLfloat>> points;
    points.push_back(p1);


    color <GLfloat> cb(1.0f, 1.0f, 1.0f, 0.0f);
    color <GLfloat> c(1.0f, 0.0f, 0.0f, 0.0f);
    color <GLfloat> ck(1.0f, 1.0f, 0sd.0f, 0.0f);

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
    glColor3f(ck.getR(), ck.getG(), ck.getB()); // Red
//    Draw a Red 1x1 Square centered at origin
    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
        glVertex2f(k1.getX(), k1.getY());    // x, y
        glVertex2f(k2.getX(), k2.getY());    // x, y
        glVertex2f(k3.getX(), k3.getY());    // x, y
        glVertex2f(k4.getX(), k4.getY());
        glVertex2f(k5.getX(), k5.getY());
        glVertex2f(k6.getX(), k6.getY());
        glVertex2f(k7.getX(), k7.getY());
        glVertex2f(k8.getX(), k8.getY());
        glVertex2f(k9.getX(), k9.getY());
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
