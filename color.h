#ifndef COLOR_H
#define COLOR_H

template <class c>
class color
{
    public:
        color();
        color(c, c, c, c);
        c getR();
        c getG();
        c getB();
        c getA();
        virtual ~color();
    private:
        c R;
        c G;
        c B;
        c A;
};

#endif // COLOR_H
