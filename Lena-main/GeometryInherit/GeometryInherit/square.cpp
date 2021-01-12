#include <math.h>
#include "square.h"

Square::Square()
{
    _x=0;
    _y=0;
    _x1=0;
    _y1=0;
    _x2=0;
    _y2=0;
    _x3=0;
    _y3=0;
}

Square::Square(double x,double y, double x1, double y1,double x2,double y2,double x3, double y3)
{
    SetXY(x,y);
    SetX1Y1(x1,y1);
    SetX2Y2(x2,y2);
    SetX3Y3(x3,y3);
}

void Square::SetX1Y1(double x1,double y1)
{
    _x1=x1;
    _y1=y1;
}

void Square::SetX2Y2(double x2,double y2)
{
    _x2=x2;
    _y2=y2;
}

void Square::SetX3Y3(double x3,double y3)
{
    _x3=x3;
    _y3=y3;
}


double Square::x1()const
{
    return _x1;
}

double Square::y1()const
{
    return _y1;
}

double Square::x2()const
{
    return _x2;
}

double Square::y2()const
{
    return _y2;
}

double Square::x3()const
{
    return _x3;
}

double Square::y3()const
{
    return _y3;
}

double Square::Perimeter()const//Вычисляет периметр данного треугольника
{
    double l1;
    l1=sqrt(pow(_x1-_x,2)+pow(_y1-_y,2));
    return l1*4;
}

double Square::Area() const//Вычисляет площадь треугольника. Площадь будем искать через высоту и прямую, которой высота была проведена
{
    double l1;//l1-lenght длина
    l1=sqrt(pow(_x1-_x,2)+pow(_y1-_y,2));
    return l1*l1;
}
