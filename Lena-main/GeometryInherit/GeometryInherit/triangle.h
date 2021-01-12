//Раменский А.А. ИВТ-19
//Класс - Треугольник
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "geometryobject.h"

class Triangle:public GeometryObject
{
private:
    double _x1,_y1,_x2,_y2;//Новыми полями здесь будут координаты второй и третьей точек
public:
    //Конструкторы
    Triangle();//Конструктор без параметра
    Triangle(double x,double y,double x1, double y1,double x2,double y2);//Конструктор с параметром

    //Сеттеры и геттеры
    void SetX1Y1(double x1, double y1);
    void SetX2Y2(double x2, double y2);
    double x1()const;
    double y1()const;
    double x2()const;
    double y2()const;

    //Методы
    double Perimeter()const;//Вычисляет периметр треугольника
    double Area()const;//Вычисляет площадь треугольника
};

#endif // TRIANGLE_H
