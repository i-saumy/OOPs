#include <iostream>
#include<conio.h>

void fun()
{
    throw 100;
}

using namespace std;

int main()
{
    cout<<"Hello World";
    try
    {
        throw 10;
    }
    catch(int e)
    {
        cout<<"\nEXCEPTION : "<<e;
    }
    try
    {
        throw 12;
    }
    catch(int f)
    {
        cout<<"\nNumber : "<< f ;
    }
    try
    {
        fun();
    }
    catch(int g)
    {
        cout << "\nThe number is : "<<g;
    }
    try
    {
        throw 25;
    }
    catch(int j)
    {
        cout << "\nthe Number Is : "<< j;
    }
    catch(double j)
    {
        cout << "\nthe Number Is : "<< j;
    }
    catch(float j)
    {
        cout << "\nthe Number Is : "<< j;
    }
    catch(...)
    {
        cout << "\nthe Number Is : ";
    }
    
    cout<<"\nLast Line";
    getch();

    return 0;
}
