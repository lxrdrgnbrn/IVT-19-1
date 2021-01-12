//Раменский А.А. ИВТ-19
//Класс - Квадрат
#ifndef SQUARE_H
#define SQUARE_H
#include "geometryobject.h"

class Square:public GeometryObject
{
private:
    double _x1,_y1,_x2,_y2,_x3,_y3;//Новыми полями здесь будут координаты второй, третьей и четвёртой точек
public:
    //Конструкторы
    Square();//Конструктор без параметра
    Square(double x,double y,double x1, double y1,double x2,double y2,double x3, double y3);//Конструктор с параметром

    //Сеттеры и геттеры
    void SetX1Y1(double x1, double y1);
    void SetX2Y2(double x2, double y2);
    void SetX3Y3(double x3, double y3);
    double x1()const;
    double y1()const;
    double x2()const;
    double y2()const;
    double x3()const;
    double y3()const;

    //Методы
    double Perimeter()const;//Вычисляет периметр квадрата
    double Area()const;//Вычисляет площадь квадрата
};

#endif // SQUARE_H
