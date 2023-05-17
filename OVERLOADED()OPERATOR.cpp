#include <iostream>
using namespace std;
 
class Distance 
{
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
   public:
      // required constructors
      Distance()
      {
         feet = 0;
         inches = 0;
      }
		
      Distance(int f, int i)
      {
         feet = f;
         inches = i;
      }
		
      // overload function call
      Distance operator()(int a, int b, int c) 
      {
         Distance D;
         // just put random calculation
         D.feet = a + c + 10;
         D.inches = b + c + 100 ;
         return D;
      }
		
      // method to display distance
      void displayDistance() 
      {
         cout << "F: " << feet <<  " I:" <<  inches << endl;
      }
      
};

int main() 
{
   Distance d1(11, 10), d2;

   cout << "First Distance : "; 
   d1.displayDistance();

   d2 = d1(10, 10, 10); // invoke operator()
   cout << "Second Distance :"; 
   d2.displayDistance();

   return 0;
}
