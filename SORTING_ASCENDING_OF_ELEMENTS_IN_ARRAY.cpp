
#include <iostream>
using namespace std;

int main()
{
    int a[50],i,b,l,s;
    cout<<"\nEnter the number of elements : ";
    cin>>b;
   
    
       cout<<"\nInput the array elements : ";
    
    for(i=0;i<b;i++)
    cin>>a[i];
    
    for(i=0;i<b;i++)
    {
        for(l=i+1;l<b;l++)
        {
            if(a[i]>a[l])
            {
                s=a[i];
                a[i]=a[l];
                a[l]=s;
            }
        }
    }
     cout<<"The numbers are sort in ascending order as: \n";
     for(i=0;i<b;i++)
     {
         cout<<" "<<a[i];
     }
        
return 0;
}


