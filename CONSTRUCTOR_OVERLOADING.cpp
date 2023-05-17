#include <iostream>

using namespace std;

class Complex
{
  int a, b;
public:
    Complex()
    {
        a=0;
        b=0;
    }
    Complex (int x, int y)
  {
    a = x;
    b = y;
  }
  Complex (int x)
  {
    a = x;
    b = 0;
  }

  void printNumber ()
  {
    cout << "Your number is " << a << "+" << b << "i" << endl;
  }
};

int
main ()
{
  Complex obj (20, 12);
  obj.printNumber ();

  Complex obj2 (3);
  obj2.printNumber ();
  
  Complex obj3;
  obj3.printNumber();
  return 0;
}

