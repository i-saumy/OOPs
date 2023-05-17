#include <iostream>
using namespace std ;

#include <stdbool.h>

#define MAX 100

    bool isOrthogonal(int a_5825[][MAX], int m_5825, int n_5825)
    {
    if (m_5825 != n_5825)
    return false;
    int trans[n_5825][n_5825];
    
    for (int i = 0; i < n_5825; i++)
    for (int j = 0; j < n_5825; j++)
    
    trans[i][j] = a_5825[j][i];
    
    int prod[n_5825][n_5825];
    
    for (int i = 0; i < n_5825; i++)
    {
    for (int j = 0; j < n_5825; j++)
    {
    
    int sum = 0;
    for (int k = 0; k < n_5825; k++)
    {
    sum = sum + (a_5825[i][k] * a_5825[j][k]);
    }
    
    prod[i][j] = sum;
    
    
    }
    }
    for (int i = 0; i < n_5825; i++)
    {
    for (int j = 0; j < n_5825; j++)
    {
    if (i != j && prod[i][j] != 0)
    return false;
    if (i == j && prod[i][j] != 1)
    return false;
    }
    }
    
    return true;
    
    }
    
    int main()
    
    {

    int a_5825[][MAX] = {{1, 0, 0},
        
        {0, 1, 0},
        {0, 0, 1}};

    if (isOrthogonal(a_5825, 3, 3))
        cout<<"Yes";
        else
        cout<<"No";
    return 0;
}
