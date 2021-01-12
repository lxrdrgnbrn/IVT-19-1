//Михалева Елизавета Ивт-19-1
#include <iostream>
#include <fstream>
#include "squareclasses.h"
#include "TestSquare/testsquare.h"
using namespace std;
int main()
{
    test_squareclasses_all();
    Squareclasses sqr;
    //Задаём квадрат со стороной a=3
    sqr.setXY(0,0);
    sqr.setX1Y1(3,0);
    sqr.setX2Y2(3,3);
    sqr.setX3Y3(0,3);
    //Теперь проверим функции нахождения площади и периметра
    try {
        cout<<"perimeter="<<sqr.perimeter()<<endl;
        cout<<"area="<<sqr.area()<<endl;
    }
    catch (Except e) {
        cout<<"Error:Square doesn't exist"<<endl;
    }
    //Теперь создадим массив из объектов этого класса
    Squareclasses sqr1[2];//Создали массив из двух объектов
    sqr1[0]=sqr;//Чтобы не писать заново, возьмём значения из kv
    //Возьмём площадь ещё раз, чтобы проверить работают ли методы класса в массиве
    try{
        cout<<"area="<<sqr1[0].area();//Всё выводится значит методы работают
    }
    catch(Except e)
    {
        cout<<"Error:Square doesn't exist"<<endl;
    }
    //Теперь выделим память под объект динамически и ещё раз создадим массив
    Squareclasses* sqr2=new Squareclasses[2];
    sqr2[0].setXY(1,1);
    sqr2[0].setX1Y1(-5,1);
    sqr2[0].setX2Y2(-5,-5);
    sqr2[0].setX3Y3(1,5);
    //Методы работаю с динамически созданным объектом
    //Теперь создадим массив из указателей на объект
    Squareclasses** sqr3=new Squareclasses*[2];
    for(unsigned i=0;i<2;i++){
        sqr3[i]=new Squareclasses;
        sqr3[i]->setXY(rand()%100,rand()%100);
        sqr3[i]->setX1Y1(rand()%100,rand()%100);
        sqr3[i]->setX2Y2(rand()%100,rand()%100);
        sqr3[i]->setX3Y3(rand()%100,rand()%100);
        cout<<"("<<sqr3[i]->getX()<<","<<sqr3[i]->getY()<<")"<<endl;
        cout<<"("<<sqr3[i]->getX1()<<","<<sqr3[i]->getY1()<<")"<<endl;
        cout<<"("<<sqr3[i]->getX2()<<","<<sqr3[i]->getY2()<<")"<<endl;
        cout<<"("<<sqr3[i]->getX3()<<","<<sqr3[i]->getY3()<<")"<<endl;
        cout<<endl;
    }
    //Теперь запишем в файл наш объект одну из координат sqr2[0] для примера
    ofstream f;
    f.open("test.txt");
    f<<sqr2[0].getX()<<endl;
    f<<sqr2[0].getY()<<endl;
    f.close();
    //Теперь для объекта sqr2[1] возьмём данные sqr2[0] из файла
    ifstream f1;
    float k;
    f1.open("test.txt");
    f1>>k;
    sqr2[1].setXY(k,0);
    f1>>k;
    sqr2[1].setXY(sqr2[1].getX(),k);
    //Для проверки выведем данный объект
    cout<<"("<<sqr2[1].getX()<<","<<sqr2[1].getY()<<")"<<endl;
    delete[] sqr2;
    for (unsigned i=0;i<2;i++){
        delete sqr3[i];
    }
    delete[] sqr3;
    return 0;
}
