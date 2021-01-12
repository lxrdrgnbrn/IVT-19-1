#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Exception//Структура ошибок
{
	int code;//Код ошибки
	string message;//Сообщение ошибки
};

const Exception EmptyArray = {-1, "Epmty Array"};//Ошибка-пустой массив 
const Exception EmptyVector = {-2, "Epmty Vector"};//Ошибка-пустой вектор 

namespace Array
{	
int* Enter_Array(unsigned m,int mx,int mn)//Заполнение массива длиной m рандомными числами, ограниченными максимумом и минимумом
	{
		if (m>0)
		{
            int* ar=new int[m];
			for (unsigned i=0;i<m;i++)       
			{            
                ar[i]=rand()%(mx-mn)+mn;
			}        
		return ar;    
		}    
		else throw EmptyArray;	
}	
void Print_Array(int* ar,unsigned m)//Вывод массива
	{
        if ((m>0)&&(ar!=nullptr))
		{
			for(unsigned i=0;i<m;i++)        
			{           
				cout<<ar[i]<<" ";        
            }
            cout<<endl;
		}   
		else throw EmptyArray;
}

int Sum_Array(int* ar,unsigned m)//Сумма всех элементов массива
{
    if ((m>0)&&(ar!=nullptr))
    {
        int sum=0;
        for(unsigned i=0;i<m;i++)
        {
            sum+=ar[i];
        }
    return sum;
    }
    else throw EmptyArray;
}
void ArrayToFile(int* ar,unsigned m,string &s)//Запись массива в файл
{
    if ((m>0)&&(ar!=nullptr))
    {
        ofstream f(s);
        for (unsigned i=0;i<m;i++)
        {
            f<<ar[i]<<endl;
        }
    }
    else throw EmptyArray;
}
void ArrayFromFile(int* &ar, int &m,string &s)//Взять массив из файла
{
    ifstream f;
    f.open(s);
    int k=0,b=0;
    while (!f.eof())
    {
        f>>b;
        k++;
    }
    m=k-1;
    ar=new int[k-1];
    f.close();
    f.open(s);
    for(int i=0;i<k-1;i++)
    {
        f>>ar[i];
    }
}
}
namespace vectors
{
vector <float> Enter_Vector(unsigned m,int mx,int mn)//Заполнение вектора длиной m
{
    if (m>0)
    {
        vector <float> vc(m);
        for (unsigned i=0;i<m;i++)
        {
            vc[i]=rand()%(mx-mn)+mn;
        }
        return vc;
    }
    else throw EmptyVector;
}
void Print_Vector(vector <float> &vc,unsigned m)//Вывод вектора
{
    if ((m>0)&&(vc.empty()==false))
    {
        for(unsigned i=0;i<m;i++)
        {
            cout<<vc[i]<<" ";
        }
        cout<<endl;
    }
    else throw EmptyVector;
}
float Sum_VectorEl(vector <float> &vc,unsigned m)//Сумма всех элементов вектора
{
    if ((m>0)&&(vc.empty()==false))
    {
        int sum=0;
        for(unsigned i=0;i<m;i++)
        {
            sum+=vc[i];
        }
        return sum;
    }
    else throw EmptyVector;
}
}


