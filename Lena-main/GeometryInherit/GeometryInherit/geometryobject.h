//Раменский А.А. ИВТ-19
//Класс - Геометрический объект
#ifndef GEOMETRYOBJECT_H
#define GEOMETRYOBJECT_H


class GeometryObject
{
protected:
    double _x,_y;//Поля это координаты точки x и y
public:
    //Конструкторы
    GeometryObject();//Конструктор без параметра
    GeometryObject(double x,double y);//Конструктор с параметром

    //Геттеры и сеттеры
    void SetXY(double x,double y);
    double x()const;
    double y()const;
};

#endif // GEOMETRYOBJECT_H
