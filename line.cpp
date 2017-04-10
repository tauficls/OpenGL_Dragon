#include "line.h"

template <class T, class S>
Line<T, S>::Line() {
    //ctor
}
template <class T, class S>
Line<T, S>::Line(Point<T> p1, Point<T> p2) {
    //ctor
    P1 = p1;
    P2 = p2;
}

template <class T, class S>
void Line<T, S>::drawLine(float width, color<S> c) {
    glLineWidth(width);
    glColor3f(c.getR(), c.getG(), c.getB());
    glBegin(GL_LINES);
    glVertex3f(P1.getX(), P1.getY(), P1.getZ());
    glVertex3f(P2.getX(), P2.getY(), P2.getZ());
    glEnd();
}
template <class T, class S>
Line<T, S>::~Line()
{
    //dtor
}

