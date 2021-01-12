#include <math.h>
#include "triangle.h"

Triangle::Triangle()
{
    _x=0;
    _y=0;
    _x1=0;
    _y1=0;
    _x2=0;
    _y2=0;
}

Triangle::Triangle(double x,double y, double x1, double y1,double x2,double y2)
{
    SetXY(x,y);
    SetX1Y1(x1,y1);
    SetX2Y2(x2,y2);
}

void Triangle::SetX1Y1(double x1,double y1)
{
    _x1=x1;
    _y1=y1;
}

void Triangle::SetX2Y2(double x2,double y2)
{
    _x2=x2;
    _y2=y2;
}


double Triangle::x1()const
{
    return _x1;
}

double Triangle::y1()const
{
    return _y1;
}

double Triangle::x2()const
{
    return _x2;
}

double Triangle::y2()const
{
    return _y2;
}

double Triangle::Perimeter()const//Вычисляет периметр данного треугольника
{
    double l1,l2,l3,p;
    l1=sqrt(pow(_x1-_x,2)+pow(_y1-_y,2));
    l2=sqrt(pow(_x2-_x1,2)+pow(_y2-_y1,2));
    l3=sqrt(pow(_x2-_x,2)+pow(_y2-_y,2));
    p=l1+l2+l3;
    return p;
}

double Triangle::Area() const//Вычисляет площадь треугольника. Площадь будем искать через высоту и прямую, которой высота была проведена
{
    double l1,hg,ar,xhg,yhg;//hg-height высота, l1-lenght длина, ar - area площадь.
    l1=sqrt(pow(_x1-_x,2)+pow(_y1-_y,2));
    xhg=(_x+_x1)/2;
    yhg=(_y+_y1)/2;
    hg=sqrt(pow(_x2-xhg,2)+pow(_y2-yhg,2));
    ar=(hg*l1)/2;
    return ar;
}
