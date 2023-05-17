#include<iostream>

using namespace std;

void swap_5825 (int a_5825[],int n_5825)

{
    
int x_5825,temp_5825;

for( x_5825=0; x_5825<n_5825/2;x_5825++)

{
    
temp_5825=a_5825[x_5825];

a_5825[x_5825]=a_5825[n_5825-1-x_5825];

a_5825[n_5825-1-x_5825]=temp_5825;

}

cout << "The new array : ";

for( x_5825=0; x_5825<n_5825; x_5825++ )

cout << a_5825[ x_5825 ] << " ";

}

 int main ()
 
 {
     
 int n_5825,i_5825;
 
 cout << "Enter the length of array:";
 
 cin >>n_5825;
 
 int a_5825[n_5825];
 
cout << "Enter the elements:\n" ;

for(i_5825=0;i_5825<n_5825;i_5825++)

 cin >> a_5825 [ i_5825];
 
 swap_5825(a_5825,n_5825);
 
 return 0;
}
