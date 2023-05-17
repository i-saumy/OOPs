#include<iostream>

using namespace std;

 int arr_sum (int matrix[2][2])
{
  int i, j, row_size = 2, col_size = 2;
  int sum = 0;
  cout << "Enter the Matrix Element:\n";
  for (i = 0; i < row_size; i++)
    {
      for (j = 0; j < col_size; j++)
	{
	  cin >> matrix[i][j];
	  sum += matrix[i][j];
	}
}

  return sum;
}

int main ()
{

  int row_size = 5, col_size = 5, i, j, sum = 0;

  int matrix[2][2];

  sum = arr_sum (matrix);

  cout << "The sum is " << sum;

}
