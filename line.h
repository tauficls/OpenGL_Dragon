#ifndef LINE_H
#define LINE_H

#include "point.h"
#include "color.h"
#include <windows.h>
#include <GL/glut.h>
template <class T, class S>
class Line
{
    public:
        Line();
        Line(Point<T> P1, Point<T> P2);
        void drawLine(float width, color<S> c);
        virtual ~Line();
    private:
        Point<T> P1;
        Point<T> P2;
};

#endif // LINE_H
