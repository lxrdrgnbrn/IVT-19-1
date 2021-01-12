//Михалева Елизавета Ивт-19-1
#include <math.h>
#include "squareclasses.h"

Squareclasses::Squareclasses(){
    x=0;
    y=0;
    x1=0;
    y1=0;
    x2=0;
    y2=0;
    x3=0;
    y3=0;
}

Squareclasses::Squareclasses(float _x,float _y, float _x1, float _y1,float _x2,float _y2,float _x3, float _y3){
    setXY(_x,_y);
    setX1Y1(_x1,_y1);
    setX2Y2(_x2,_y2);
    setX3Y3(_x3,_y3);
}

void Squareclasses::setXY(float _x,float _y){
    x=_x;
    y=_y;
}

void Squareclasses::setX1Y1(float _x1,float _y1){
    x1=_x1;
    y1=_y1;
}

void Squareclasses::setX2Y2(float _x2,float _y2){
    x2=_x2;
    y2=_y2;
}

void Squareclasses::setX3Y3(float _x3,float _y3){
    x3=_x3;
    y3=_y3;
}

float Squareclasses::getX()const{
    return x;
}

float Squareclasses::getY()const{
    return x;
}

float Squareclasses::getX1()const{
    return x1;
}

float Squareclasses::getY1()const{
    return y1;
}

float Squareclasses::getX2()const{
    return x2;
}

float Squareclasses::getY2()const{
    return y2;
}

float Squareclasses::getX3()const{
    return x3;
}

float Squareclasses::getY3()const{
    return y3;
}

float Squareclasses::perimeter()const{//Вычисляет периметр данного треугольника
    float a,p;//a-сторона квадрата
    a=sqrt(pow(x1-x,2)+pow(y1-y,2));
    if(a==0) throw NoExistSquare;
    p=a*4;
    return p;
}

float Squareclasses::area() const{//Вычисляет площадь треугольника. Площадь будем искать через высоту и прямую, которой высота была проведена
    float a,s;//a-сторона квадрата
    a=sqrt(pow(x1-x,2)+pow(y1-y,2));
    if(a==0) throw NoExistSquare;
    s=a*a;
    return s;
}
