#include <iostream>
#include <windows.h>
#include <GL/glut.h>
#include <vector>
#include "line.h"
using namespace std;

void display() {

    /* Initialization */
    /* telinga depan */
    Point <GLfloat> p1(0.368 * 3 - 1, 0.174 * -3 + 1);
    Point <GLfloat> p2(0.350 * 3 - 1, 0.146 * -3 + 1);
    Point <GLfloat> p3(0.353 * 3 - 1, 0.121 * -3 + 1);
    Point <GLfloat> p4(0.398 * 3 - 1, 0.149 * -3 + 1);
    Point <GLfloat> p5(0.381 * 3 - 1, 0.155 * -3 + 1);
    Point <GLfloat> p6(0.376 * 3 - 1, 0.159 * -3 + 1);
    Point <GLfloat> p7(0.368 * 3 - 1, 0.174 * -3 + 1);

    /* kepala */
    Point <GLfloat> k1(0.427 * 3 - 1, 0.222 * -3 + 1);
    Point <GLfloat> k2(0.449 * 3 - 1, 0.205 * -3 + 1);
    Point <GLfloat> k3(0.442 * 3 - 1, 0.191 * -3 + 1);
    Point <GLfloat> k4(0.428 * 3 - 1, 0.160 * -3 + 1);
    Point <GLfloat> k5(0.400 * 3 - 1, 0.150 * -3 + 1);
    Point <GLfloat> k6(0.368 * 3 - 1, 0.172 * -3 + 1);
    Point <GLfloat> k7(0.366 * 3 - 1, 0.192 * -3 + 1);
    Point <GLfloat> k8(0.388 * 3 - 1, 0.210 * -3 + 1);
    Point <GLfloat> k9(0.427 * 3 - 1, 0.222 * -3 + 1);

    /*telinga belakang*/
    Point <GLfloat> tb1(0.389 * 3 - 1, 0.142 * -3 + 1);
    Point <GLfloat> tb2(0.392 * 3 - 1, 0.108 * -3 + 1);
    Point <GLfloat> tb3(0.427 * 3 - 1, 0.155 * -3 + 1);
    Point <GLfloat> tb4(0.411 * 3 - 1, 0.150 * -3 + 1);
    Point <GLfloat> tb5(0.402 * 3 - 1, 0.149 * -3 + 1);
    Point <GLfloat> tb6(0.389 * 3 - 1, 0.142 * -3 + 1);

    /*tail dalam*/
    Point <GLfloat> td1(0.188 * 3 - 1, 0.259 * -3 + 1);
    Point <GLfloat> td2(0.240 * 3 - 1, 0.268 * -3 + 1);
    Point <GLfloat> td3(0.241 * 3 - 1, 0.254 * -3 + 1);
    Point <GLfloat> td4(0.188 * 3 - 1, 0.259 * -3 + 1);

    /*bagian dalam badan2*/
    Point <GLfloat> ib1(0.38 * 3 - 1, 0.205 * -3 + 1);
    Point <GLfloat> ib2(0.396 * 3 - 1, 0.213* -3 + 1);
    Point <GLfloat> ib3(0.4 * 3 - 1, 0.233 * -3 + 1);
    Point <GLfloat> ib4(0.4 * 3 - 1, 0.258 * -3 + 1);
    Point <GLfloat> ib5(0.384 * 3 - 1, 0.277 * -3 + 1);
    Point <GLfloat> ib6(0.38 * 3 - 1, 0.205 * -3 + 1);

    /*kaki dekat kepala*/
    Point <GLfloat> kd1(0.397 * 3 - 1, 0.26 * -3 + 1);
    Point <GLfloat> kd2(0.425 * 3 - 1, 0.327* -3 + 1);
    Point <GLfloat> kd3(0.392 * 3 - 1, 0.327 * -3 + 1);
    Point <GLfloat> kd4(0.383 * 3 - 1, 0.278 * -3 + 1);
    Point <GLfloat> kd5(0.397 * 3 - 1, 0.26 * -3 + 1);

    /* badan mulai dari telinga */
    Point <GLfloat> b1(0.362 * 3 - 1, 0.168 * -3 + 1);
    Point <GLfloat> b2(0.349 * 3 - 1, 0.186 * -3 + 1);
    Point <GLfloat> b3(0.338 * 3 - 1, 0.217 * -3 + 1);
    Point <GLfloat> b4(0.270 * 3 - 1, 0.220 * -3 + 1);
    Point <GLfloat> b5(0.170 * 3 - 1, 0.257 * -3 + 1);
    Point <GLfloat> b6(0.185 * 3 - 1, 0.263 * -3 + 1);
    Point <GLfloat> b7(0.240 * 3 - 1, 0.255 * -3 + 1);
    Point <GLfloat> b8(0.253 * 3 - 1, 0.229 * -3 + 1);
    Point <GLfloat> b9(0.255 * 3 - 1, 0.231 * -3 + 1);
    Point <GLfloat> b10(0.236 * 3 - 1, 0.270 * -3 + 1);
    Point <GLfloat> b11(0.224 * 3 - 1, 0.296 * -3 + 1);
    Point <GLfloat> b12(0.232 * 3 - 1, 0.337 * -3 + 1);
    Point <GLfloat> b13(0.258 * 3 - 1, 0.302 * -3 + 1);
    Point <GLfloat> b14(0.295 * 3 - 1, 0.267 * -3 + 1);
    Point <GLfloat> b15(0.338 * 3 - 1, 0.277 * -3 + 1);
    Point <GLfloat> b16(0.367 * 3 - 1, 0.339 * -3 + 1);
    Point <GLfloat> b17(0.395 * 3 - 1, 0.341 * -3 + 1);
    Point <GLfloat> b18(0.379 * 3 - 1, 0.205 * -3 + 1);
    Point <GLfloat> b19(0.366 * 3 - 1, 0.192 * -3 + 1);
    Point <GLfloat> b20(0.368 * 3 - 1, 0.172 * -3 + 1);
    Point <GLfloat> b21(0.362 * 3 - 1, 0.168 * -3 + 1);

    /* badan dalam */
    Point <GLfloat> bd1(0.289 * 3 - 1, 0.276 * -3 + 1);
    Point <GLfloat> bd2(0.341 * 3 - 1, 0.289 * -3 + 1);
    Point <GLfloat> bd3(0.339 * 3 - 1, 0.277 * -3 + 1);
    Point <GLfloat> bd4(0.294 * 3 - 1, 0.267 * -3 + 1);
    Point <GLfloat> bd5(0.289 * 3 - 1, 0.276 * -3 + 1);

    /* kaki dekat ekor */
    Point <GLfloat> ke1(0.304 * 3 - 1, 0.285 * -3 + 1);
    Point <GLfloat> ke2(0.265 * 3 - 1, 0.333 * -3 + 1);
    Point <GLfloat> ke3(0.256 * 3 - 1, 0.304 * -3 + 1);
    Point <GLfloat> ke4(0.289 * 3 - 1, 0.277 * -3 + 1);
    Point <GLfloat> ke5(0.304 * 3 - 1, 0.285 * -3 + 1);

    /* Sayap depan */
    Point <GLfloat> sd1(0.335 * 3 - 1, 0.213 * -3 + 1);
    Point <GLfloat> sd2(0.324 * 3 - 1, 0.154 * -3 + 1);
    Point <GLfloat> sd3(0.237 * 3 - 1, 0.145 * -3 + 1);
    Point <GLfloat> sd4(0.305 * 3 - 1, 0.159 * -3 + 1);
    Point <GLfloat> sd5(0.237 * 3 - 1, 0.176 * -3 + 1);
    Point <GLfloat> sd6(0.304 * 3 - 1, 0.166 * -3 + 1);
    Point <GLfloat> sd7(0.258 * 3 - 1, 0.192 * -3 + 1);
    Point <GLfloat> sd8(0.311 * 3 - 1, 0.174 * -3 + 1);
    Point <GLfloat> sd9(0.318 * 3 - 1, 0.217 * -3 + 1);
    Point <GLfloat> sd10(0.335 * 3 - 1, 0.213 * -3 + 1);

    /* Sayap belakang */
    Point <GLfloat> sb1(0.344 * 3 - 1, 0.202 * -3 + 1);
    Point <GLfloat> sb2(0.342 * 3 - 1, 0.157 * -3 + 1);
    Point <GLfloat> sb3(0.271 * 3 - 1, 0.140 * -3 + 1);
    Point <GLfloat> sb4(0.315 * 3 - 1, 0.159 * -3 + 1);
    Point <GLfloat> sb5(0.334 * 3 - 1, 0.214 * -3 + 1);

    /* mata */
    Point <GLfloat> m1(0.408 * 3 - 1, 0.180 * -3 + 1.02);
    Point <GLfloat> m2(0.420 * 3 - 1, 0.190 * -3 + 1.02);
    Point <GLfloat> m3(0.426 * 3 - 1, 0.190 * -3 + 1.02);

    /* mulut */
    Point <GLfloat> m4(0.436 * 3 - 1, 0.205 * -3 + 1);

    /* color */
    color <GLfloat> cb(1.0f, 1.0f, 1.0f, 0.0f);
    color <GLfloat> black(0.0f, 0.0f, 0.0f, 0.0f);
    color <GLfloat> c(1.0f, 0.0f, 0.0f, 0.0f);
    color <GLfloat> ck(0.8f, 0.0f, 0.0f, 0.0f);

    glClearColor(cb.getR(), cb.getG(), cb.getB(), cb.getA());       // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);                                   // Clear the color buffer

    glColor3f(ck.getR(), ck.getG(), ck.getB()); // Red
    glBegin(GL_POLYGON);
        glVertex2f(p1.getX(), p1.getY());    // x, y
        glVertex2f(p2.getX(), p2.getY());    // x, y
        glVertex2f(p3.getX(), p3.getY());    // x, y
        glVertex2f(p4.getX(), p4.getY());
        glVertex2f(p5.getX(), p5.getY());
        glVertex2f(p6.getX(), p6.getY());
        glVertex2f(p7.getX(), p7.getY());
    glEnd();

    glColor3f(c.getR(), c.getG(), c.getB()); // yellow
    glBegin(GL_POLYGON);
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

    glLineWidth(2.5);
    glColor3f(black.getR(), black.getG(), black.getB()); // yellow
    glBegin(GL_LINES);
        glVertex2f(m1.getX(), m1.getY());    // x, y
        glVertex2f(m2.getX(), m2.getY());    // x, y
        glVertex2f(m3.getX(), m3.getY());    // x, y
    glEnd();

    glPointSize(2.5);
    glColor3f(black.getR(), black.getG(), black.getB()); // yellow
    glBegin(GL_POINTS);
        glVertex2f(m4.getX(), m4.getY());
    glEnd();

    glColor3f(ck.getR(), ck.getG(), ck.getB()); // yellow
    glBegin(GL_POLYGON);
        glVertex2f(sb1.getX(), sb1.getY());    // x, y
        glVertex2f(sb2.getX(), sb2.getY());    // x, y
        glVertex2f(sb3.getX(), sb3.getY());    // x, y
        glVertex2f(sb4.getX(), sb4.getY());
        glVertex2f(sb5.getX(), sb5.getY());
    glEnd();

    glColor3f(c.getR(), c.getG(), c.getB()); // yellow
    glBegin(GL_POLYGON);
        glVertex2f(sd1.getX(), sd1.getY());    // x, y
        glVertex2f(sd2.getX(), sd2.getY());    // x, y
        glVertex2f(sd3.getX(), sd3.getY());    // x, y
        glVertex2f(sd4.getX(), sd4.getY());
        glVertex2f(sd5.getX(), sd5.getY());
        glVertex2f(sd6.getX(), sd6.getY());
        glVertex2f(sd7.getX(), sd7.getY());
        glVertex2f(sd8.getX(), sd8.getY());
        glVertex2f(sd9.getX(), sd9.getY());
    glEnd();



    glColor3f(c.getR(), c.getG(), c.getB()); // yellow
    glBegin(GL_POLYGON);
        glVertex2f(b1.getX(), b1.getY());    // x, y
        glVertex2f(b2.getX(), b2.getY());    // x, y
        glVertex2f(b3.getX(), b3.getY());    // x, y
        glVertex2f(b4.getX(), b4.getY());
        glVertex2f(b5.getX(), b5.getY());
        glVertex2f(b6.getX(), b6.getY());
        glVertex2f(b7.getX(), b7.getY());
        glVertex2f(b8.getX(), b8.getY());
        glVertex2f(b9.getX(), b9.getY());
        glVertex2f(b10.getX(), b10.getY());
        glVertex2f(b11.getX(), b11.getY());
        glVertex2f(b12.getX(), b12.getY());
        glVertex2f(b13.getX(), b13.getY());
        glVertex2f(b14.getX(), b14.getY());
        glVertex2f(b15.getX(), b15.getY());
        glVertex2f(b16.getX(), b16.getY());
        glVertex2f(b17.getX(), b17.getY());
        glVertex2f(b18.getX(), b18.getY());
        glVertex2f(b19.getX(), b19.getY());
        glVertex2f(b20.getX(), b20.getY());
        glVertex2f(b21.getX(), b21.getY());
    glEnd();

    glColor3f(ck.getR(), ck.getG(), ck.getB()); // Red
    glBegin(GL_POLYGON);
        glVertex2f(bd1.getX(), bd1.getY());    // x, y
        glVertex2f(bd2.getX(), bd2.getY());    // x, y
        glVertex2f(bd3.getX(), bd3.getY());    // x, y
        glVertex2f(bd4.getX(), bd4.getY());
        glVertex2f(bd5.getX(), bd5.getY());
    glEnd();


    glColor3f(c.getR(), c.getG(), c.getB()); // yellow
    glBegin(GL_POLYGON);
        glVertex2f(ke1.getX(), ke1.getY());    // x, y
        glVertex2f(ke2.getX(), ke2.getY());    // x, y
        glVertex2f(ke3.getX(), ke3.getY());    // x, y
        glVertex2f(ke4.getX(), ke4.getY());
        glVertex2f(ke5.getX(), ke5.getY());
    glEnd();
    //telinga belakang
    glColor3f(ck.getR(), ck.getG(), ck.getB());
    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
        glVertex2f(tb1.getX(), tb1.getY());    // x, y
        glVertex2f(tb2.getX(), tb2.getY());    // x, y
        glVertex2f(tb3.getX(), tb3.getY());    // x, y
        glVertex2f(tb4.getX(), tb4.getY());
        glVertex2f(tb5.getX(), tb5.getY());
        glVertex2f(tb6.getX(), tb6.getY());
    glEnd();

    //bagian dalam tail
    glColor3f(ck.getR(), ck.getG(), ck.getB());
    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
        glVertex2f(td1.getX(), td1.getY());    // x, y
        glVertex2f(td2.getX(), td2.getY());    // x, y
        glVertex2f(td3.getX(), td3.getY());    // x, y
        glVertex2f(td4.getX(), td4.getY());
    glEnd();

    //bagian kaki depan
    glColor3f(ck.getR(), ck.getG(), ck.getB());
    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
        glVertex2f(ib1.getX(), ib1.getY());    // x, y
        glVertex2f(ib2.getX(), ib2.getY());    // x, y
        glVertex2f(ib3.getX(), ib3.getY());    // x, y
        glVertex2f(ib4.getX(), ib4.getY());    // x, y
        glVertex2f(ib5.getX(), ib5.getY());    // x, y
        glVertex2f(ib6.getX(), ib6.getY());
    glEnd();


    //kaki dkat kepala
    glColor3f(ck.getR(), ck.getG(), ck.getB());
    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
        glVertex2f(kd1.getX(), kd1.getY());    // x, y
        glVertex2f(kd2.getX(), kd2.getY());    // x, y
        glVertex2f(kd3.getX(), kd3.getY());    // x, y
        glVertex2f(kd4.getX(), kd4.getY());    // x, y
        glVertex2f(kd5.getX(), kd5.getY());

    glEnd();

    glFlush();  // Render now

}
int main(int argc, char** argv)
{
   glutInit(&argc, argv);                 // Initialize GLUT
   glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
   glutInitWindowSize(500, 500);   // Set the window's initial width & height
   glutReshapeWindow(750, 500);
   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
   glutDisplayFunc(display); // Register display callback handler for window re-paint
   glutMainLoop();           // Enter the infinitely event-processing loop
   return 0;
}
