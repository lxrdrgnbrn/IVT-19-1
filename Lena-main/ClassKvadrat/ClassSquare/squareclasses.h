//Михалева Елизавета Ивт-19-1
//Класс - Квадрат
#ifndef SQUARECLASSES_H
#define SQUARECLASSES_H

enum Except{NoExistSquare};

class Squareclasses
{
private:
    float x,y,x1,y1,x2,y2,x3,y3;
public:
    Squareclasses();//Конструктор без параметра
    Squareclasses(float _x,float _y,float _x1, float _y1,float _x2,float _y2,float _x3, float _y3);//Конструктор с параметром

    //Сеттеры и геттеры
    void setXY(float _x1, float _y1);//Сеттеры заполняют сразу одну точку на координатной плоскости
    void setX1Y1(float _x1, float _y1);
    void setX2Y2(float _x2, float _y2);
    void setX3Y3(float _x3, float _y3);
    float getX()const;
    float getY()const;
    float getX1()const;
    float getY1()const;
    float getX2()const;
    float getY2()const;
    float getX3()const;
    float getY3()const;

    //Методы
    float perimeter()const;//Вычисляет периметр квадрата
    float area()const;//Вычисляет площадь квадрата
};

#endif // SQUARECLASSES_H
