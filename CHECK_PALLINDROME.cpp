#include <iostream>  

using namespace std; 

int main()  
{  
    int n,r,s=0,temp;    
    
    cout<<"Enter the Number=";    
    cin>>n;    
    temp=n;
    
 while(n>0)    
        {    
             r=n%10;    
            s=(s*10)+r;    
            n=n/10;    
        } 
        
    if(temp==s)   
    
    cout<<"Palindrome";
    
    else    
    
    cout<<"Not Palindrome";   
  return 0;  
}
