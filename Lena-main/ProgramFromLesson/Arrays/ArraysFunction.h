#ifndef ARRAYSFUNCTION_H
#define ARRAYSFUNCTION_H
#include<vector>
#include <string>

using namespace std;

struct Exception//Структура ошибок
{
    int code;//Код ошибки  
	string message;//Сообщение ошибки
};

const Exception EmptyArray = {-1, "Epmty Array"};//Ошибка-Пустой массив
const Exception EmptyVector = {-2, "Epmty Vector"};//Ошибка-Пустой вектор

namespace  Array
{
    int* Enter_Array(unsigned m,int mx,int mn);//Заполнение массива длиной m
	void Print_Array(int* ar,unsigned m);//Вывод массива  
    int Sum_Array(int* ar,unsigned m);//Сумма элементов массива
    void ArrayToFile(int* ar,unsigned m, string &s);//Запись массива в файл
    void ArrayFromFile(int* &ar, int &m,string &s);//Взять массив из файла
}

namespace vectors 
{
    vector<float> Enter_Vector(unsigned m,int mx,int mn);//Заполнение вектора длиной m
    void Print_Vector(vector <float> &vc,unsigned m);//Вывод вектора
    float Sum_VectorEl(vector <float> &vc,unsigned m);//Сумма элементов вектора
}
#endif // ARRAYSFUNCTION_H
