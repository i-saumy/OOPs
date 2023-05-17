#include <iostream>  

using namespace std;  

int main()  

{  
    
int n,s=0,r;    

cout<<"Enter a number: ";   

cin>>n;    

while(n>0)    

    {    
        r=n%10;   
        
        s=s+r;    
        
        n=n/10;    
    }  
    
cout<<"Sum = "<<s<<endl; 

return 0;  

}
