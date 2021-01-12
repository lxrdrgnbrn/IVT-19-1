#include <iostream>
#include <time.h>
#include "ArraysFunction.h"
#include <vector>


using namespace Array;
using namespace vectors;

int main()
{
    srand(time(NULL));
    string yn;//Переменная, считывающая yes или no  
    cout<<"Do you want get array from file?"<<endl;
    cin>>yn;
    if ((yn=="No")||(yn=="no")) 
	{
        unsigned n;
        cout<<"Enter n:"<<endl;
        cin>>n;
        int* a,max,min,sm;
        float sv;
        cout<<"Enter max and min:"<<endl;
        cin>>max>>min;
        vector <float> v;
        try
		{
            a=Enter_Array(n,max,min);//Заполняем массив
            Print_Array(a,n);//Выводим массив
            sm=Sum_Array(a,n);//Считаем сумму элементов массива
            cout<<"Sum of array's elements:"<<sm<<endl;
            v=Enter_Vector(n,max,min);//Заполняем вектор
            Print_Vector(v,n);//Выводим вектор
            sv=Sum_VectorEl(v,n);//Считаем сумму элементов вектора
            cout<<"Sum of vector's elements:"<<sv<<endl;
            cout<<"Do you want put array to File?"<<endl;
            cin>>yn;
            if ((yn=="yes")||(yn=="Yes"))
            {
                try
				{
                    string s;
                    cout<<"Enter name of file:"<<endl;
                    cin>>s;
                    ArrayToFile(a,n,s);//Сохраняем массив в файл
				}
                catch(Exception e)
                {
                    cerr<<"Error:"<<EmptyArray.message;
                }
            }
        }
        catch(Exception e)
		{
            if (e.code == EmptyArray.code)
            {
                cerr<<"Error:"<<EmptyArray.message;
            }
            else if (e.code == EmptyVector.code)
            {
                cerr<<"Error:"<<EmptyVector.message;
            }
        }
    }
    else
    {
        string s;
        cout<<"Enter name of file:"<<endl;
        cin>>s;
        int* a,sm,n;
        ArrayFromFile(a,n,s);//Берём массив из файла
        Print_Array(a,n);
        sm=Sum_Array(a,n);
        cout<<"Sum of array's elements:"<<sm<<endl;
	}
}
