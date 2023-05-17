#include<iostream>

using namespace std ;

 int Sm1No_5825( int [], int ) ;
 
 int main() 
 
{

    int n_5825 , i_5825;
 
    cout << "Enter the size of array:";
 
     cin>>n_5825;
 
    int a_5825[n_5825];
 
    cout << "Enter the elements: \n" ;
 
    for(i_5825=0; i_5825<n_5825 ; i_5825++ )
 
    cin>>a_5825[ i_5825 ];
 
    cout << "The smallest no. in the array is: " << Sm1No_5825 (a_5825 , n_5825) << endl;

    return 0;
 
}

int Sm1No_5825(int x_5825[],int m_5825)

{
    
    int i_5825 , se_5825=x_5825 [0];

    for( i_5825=0; i_5825<m_5825;i_5825++)

    if (se_5825>x_5825 [ i_5825 ])

    se_5825=x_5825[ i_5825 ] ;

    return se_5825 ; 
}
