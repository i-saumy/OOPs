#include <iostream>

using namespace std;

int GCD (int a , int b)

{
    if(a%b==0)
    
    return b;
    
      return GCD(b,a%b);
    
}

int main()
{
    int n1,n2,LCM;
    
    cout<<"Enter the two numbers:"<<endl;
    
    cin>>n1>>n2;

   LCM = n1*n2/GCD(n1,n2);
    
   cout<<"GCD of the numbers are: "<<LCM;

    return 0;
}

