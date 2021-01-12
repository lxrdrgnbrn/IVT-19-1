//Раменский А.А. ИВТ-19
//Класс - Отрезок
#ifndef SEGMENTLINE_H
#define SEGMENTLINE_H
#include "geometryobject.h"


class SegmentLine: public GeometryObject//Segment Line перевёл как отрезок(Не знаю на сколько верно, но пусть будет так)
{
private:
    double _x1,_y1; //Новыми полями здесь будут координаты второй точки
public:
    //Конструкторы для координат двух точек
    SegmentLine();//Конструктор без параметра
    SegmentLine(double x,double y,double x1, double y1);//Конструктор с параметром

    //Геттеры и сеттеры второй точки
    void SetX1Y1(double x1, double y1);
    double x1()const;
    double y1()const;

    //Методы
    double LengthOfSegment()const;//Высчитывает длину отрезка. sl- Segment Line, но сокращённо
};

#endif // SEGMENTLINE_H
