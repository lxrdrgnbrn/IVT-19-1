//Михалева Елизавета Ивт-19-1
#include<iostream>
#include<cassert>
#include "testsquare.h"

void test_squareclasses_setXY(){
    Squareclasses sqr;
    sqr.setXY(5,4);
    assert((sqr.getX()==5)and(sqr.getY()==4));
}

void test_squareclasses_setX1Y1(){
    Squareclasses sqr;
    sqr.setX1Y1(3,4);
    assert((sqr.getX1()==3)and(sqr.getY1()==4));
}

void test_squareclasses_setX2Y2(){
    Squareclasses sqr;
    sqr.setX2Y2(3,6);
    assert((sqr.getX2()==3)and(sqr.getY2()==6));
}

void test_squareclasses_setX3Y3(){
    Squareclasses sqr;
    sqr.setX3Y3(5,6);
    assert((sqr.getX3()==5)and(sqr.getY3()==6));
}

void test_squareclasses_perimeter(){
    Squareclasses sqr;
    sqr.setXY(5,4);
    sqr.setX1Y1(3,4);
    sqr.setX2Y2(3,6);
    sqr.setX3Y3(5,6);
    assert(sqr.perimeter()==4);
}

void test_squareclasses_area(){
    Squareclasses sqr;
    sqr.setXY(5,4);
    sqr.setX1Y1(3,4);
    sqr.setX2Y2(3,6);
    sqr.setX3Y3(5,6);
    assert(sqr.area()==4);
}

void test_squareclasses_all(){
    void test_squareclasses_setXY();
    void test_squareclasses_setX1Y1();
    void test_squareclasses_setX2Y2();
    void test_squareclasses_setX3Y3();
    void test_squareclasses_perimeter();
    void test_squareclasses_area();
    std::cout<<"All is okey :)"<<std::endl;
}
