#include<iostream>

using namespace std;

int main()
   {
   int i, num, count,range_start,range_last;
   
   cout << "Enter the first number: ";
    cin >> range_start;
    
    cout << "Enter the last number: ";
    cin >> range_last;
    
  cout << "Prime numbers between " << range_start  << " and " << range_last << " are: " << endl;
  
   for(num = range_start; num<=range_last ;num++)
   {
      count = 0;
      for(i=2;i<=num/2;i++)
      {
         if(num%i==0)
         {
            count++;
         break;
         }
   }
   if(count==0 && num!= 1)
   
      cout<< num << endl;
   }


    return 0;
}


