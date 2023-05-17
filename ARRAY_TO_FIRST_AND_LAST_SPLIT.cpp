
#include <iostream> 

using namespace std; 

void splitArr(int arr_5825[], int n_5825, int k_5825) 

    { 
        for (int i_5825 = 0; i_5825 < k_5825; i_5825++)
        { 
        int x_5825 = arr_5825[0]; 
        for (int j_5825 = 0; j_5825 < n_5825 - 1; ++j_5825) 
        arr_5825[j_5825] = arr_5825[j_5825 + 1]; 
        arr_5825[n_5825 - 1] = x_5825; 
        } 
    } 

int main() 

{ 
    int arr_5825[] = { 32, 11, 6, 9, 43, 56 }; 
    
    int n_5825 = sizeof(arr_5825) / sizeof(arr_5825[0]); 
    
    int position_5825 = 2; 
    
    splitArr(arr_5825, n_5825, position_5825);
    
    for (int i_5825 = 0; i_5825 < n_5825; ++i_5825) 
    
    cout <<" "<< arr_5825[i_5825]; 
    
return 0; 

}

