#ifndef POINT_H
#define POINT_H

template <class Type>
class Point
{
    public:
        Point();
        Point(const Point &p);
        Point(Type x, Type y, Type z);
        Point(Type x, Type y);
        Type getX();
        Type getY();
        Type getZ();
        virtual ~Point();
    private:
        Type x;
        Type y;
        Type z;
};

#endif // POINT_H
