
#include <iostream>
using namespace std;

int GCD(int n1, int n2)
{
    if (n2 != 0)
    
        return GCD(n2, n1 % n2);
        
    else
    
        return n1;
        
}

int main() 
{
    int n1, n2;
    
    cout<<"Enter two positive integers:"<<endl;
    cin>>n1>>n2;
    
    cout<<"G.C.D of "<<n1 <<" and "<<n2<<" is "<<GCD(n1, n2);
    
    return 0;
}

