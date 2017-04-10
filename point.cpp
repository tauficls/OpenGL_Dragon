#include "point.h"

template <class Type>
Point<Type>::Point()
{
    //ctor
    x = 0;
    y = 0;
    z = 0;
}

template <class Type>
Point<Type>::Point(const Point<Type> &p) {
    x = p.x;
    y = p.y;
    z = p.z;
}

template <class Type>
Point<Type>::Point(Type x, Type y, Type z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

template <class Type>
Point<Type>::Point(Type x, Type y) {
    this->x = x;
    this->y = y;
    this->z = 0;
}

template <class Type>
Type Point<Type>::getX() {
    return x;
}

template <class Type>
Type Point<Type>::getY() {
    return y;
}

template <class Type>
Type Point<Type>::getZ() {
    return z;
}

template <class Type>
Point<Type>::~Point()
{
    //dtor
}

template class Point<int>;
template class Point<float>;
