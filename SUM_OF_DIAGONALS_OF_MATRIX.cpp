#include<iostream>

using namespace std;

int main()
{
int i_5825, j_5825, rows_5825, columns_5825, a[10][10], Sum = 0;

cout<<"\n Please Enter Number of rows_5825 and columns_5825 : ";
cin>>i_5825>>j_5825;

cout<<"\n Please Enter the Matrix Elements \n";
for(rows_5825 = 0; rows_5825 < i_5825; rows_5825++)
{
for(columns_5825 = 0;columns_5825 < j_5825;columns_5825++)
{
cin>>a[rows_5825][columns_5825];
}
}

for(rows_5825 = 0; rows_5825 < i_5825; rows_5825++)
{
Sum = Sum + a[rows_5825][rows_5825];
}

cout<<"\n The Sum of Diagonal Elements of a Matrix = "<<Sum;

return 0;
}
