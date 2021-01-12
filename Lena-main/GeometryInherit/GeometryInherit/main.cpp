#include <iostream>
#include "segmentline.h"
#include "square.h"
#include "triangle.h"

using namespace std;

int main()
{
    SegmentLine sl1;
    Square sq1;
    Triangle tr1;
    //Проверка отрезка
    sl1.SetXY(1,2);
    sl1.SetX1Y1(3,6);
    cout<<"Lengt of this segment line: "<<sl1.LengthOfSegment()<<endl;

    //Проверка квадрата
    sq1.SetXY(1,5);
    sq1.SetX1Y1(5,5);
    sq1.SetX2Y2(5,1);
    sq1.SetX3Y3(1,1);
    cout<<"Perimeter of this square is: "<<sq1.Perimeter()<<endl;
    cout<<"Area of this square is: "<<sq1.Area()<<endl;

    //Проверка треугольника
    tr1.SetXY(1,5);
    tr1.SetX1Y1(5,5);
    tr1.SetX2Y2(5,1);
    cout<<"Perimeter of this triangle is: "<<tr1.Perimeter()<<endl;
    cout<<"Area of this triangle is: "<<tr1.Area()<<endl;
    return 0;
}
