#include<iostream>

using namespace std;

int power(int x, int y)
{
    if (y)
    
    {
        
        cout<<" "<<y;
        
    return x*power(x,--y);
        
    }
    
    else return 1;
    
}

int main()

{
    int x,y;
    
    cout<<"Value of x:";
    cin>>x;
    cout<<"Value of b: ";
    cin>>y;
   
    
    int result=x;
    
    for (int i=1; i<y; i++)
    {
        result=result*x;

    }
    cout<<"Value is "<<result;
}
