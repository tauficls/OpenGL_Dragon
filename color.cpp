#include "color.h"

template <class c>
color<c>::color()
{
    //ctor
    R = 0.0;
    G = 0.0;
    B = 0.0;
    A = 0.0;
}

template <class c>
color<c>::color(c r, c g, c b, c a)
{
    //ctor
    R = r;
    G = g;
    B = b;
    A = a;
}

template <class c>
c color<c>::getR() {
    return R;
}

template <class c>
c color<c>::getG() {
    return G;
}

template <class c>
c color<c>::getB() {
    return B;
}

template <class c>
c color<c>::getA() {
    return A;
}

template <class c>
color<c>::~color()
{
    //dtor
}

template class color<float>;
