#include <iostream>  

using namespace std; 

int main()  

{ 
    
    int a[10][10],b[10][10],mul[10][10],r_5825,c_5825,i_5825,j_5825,k_5825;    
    
    cout<<"Enter the number of rows=";    
    cin>>r_5825;    

    cout<<"Enter the number of columns=";    
    cin>>c_5825;    
    
    cout<<"Enter the first matrix elements=\n";    
    
    for(i_5825=0;i_5825<r_5825;i_5825++)    

    {    
    
        for(j_5825=0;j_5825<c_5825;j_5825++)
        
    {  
    
        cin>>a[i_5825][j_5825];
        
    }    
    }    
        cout<<"Enter the second matrix elements=\n";    
        
        for(i_5825=0;i_5825<r_5825;i_5825++) 
        
    {    
        
        for(j_5825=0;j_5825<c_5825;j_5825++)
    
    { 
        
        cin>>b[i_5825][j_5825];
    
    }    
    }
    
    cout<<"Mulitiplication of the matrix=\n";

        for(i_5825=0;i_5825<r_5825;i_5825++)
    
    {
        
        for(j_5825=0;j_5825<c_5825;j_5825++)
        
    {
        
        mul[i_5825][j_5825]=0;

        for(k_5825=0;k_5825<c_5825;k_5825++)
    
    {
        
        mul[i_5825][j_5825]+=a[i_5825][k_5825]*b[k_5825][j_5825];
        
    }    
    }    
    }    

        for(i_5825=0;i_5825<r_5825;i_5825++)
        
    {
        
        for(j_5825=0;j_5825<c_5825;j_5825++)
        
    {   
        
        cout<<mul[i_5825][j_5825]<<" ";
        
    }
    
        cout<<"\n";
        
    }   
    
    return 0;  
}    
