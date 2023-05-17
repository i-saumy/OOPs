#include <iostream>
using namespace std;
const int SIZE = 10;

class SafeArray 
{
   private:
      int arr[SIZE];
   public:
      SafeArray()  
      {
         register int i;
         for(i = 0; i < SIZE; i++)
         {
            arr[i] = i;
         }
      }
		
      int operator[](int i) 
      {
         if( i > SIZE ) 
         {
               cout << "Index out of bounds" <<endl; 
               
               return arr[0];
         }
         return arr[i];
      }
};

int main() 
{
   SafeArray safeArr;

   cout << "Value of safeArr[2] : " << safeArr[2] <<endl;
   cout << "Value of safeArr[5] : " << safeArr[5]<<endl;
   cout << "Value of safeArr[12] : " << safeArr[12]<<endl;

   return 0;
}
