#include<iostream>

using namespace std;

int main()
{
	int i_5825, j_5825, rows_5825, columns_5825 , count_5825 = 1;
	
	cout << "\nPlease Enter the Matrix rows and Columns =  ";
	cin >> i_5825 >> j_5825;
	
	int symMat[i_5825][j_5825], tMat[i_5825][j_5825];
	
	cout << "\nPlease Enter the Symmetric Matrix Items\n";
	for(rows_5825 = 0; rows_5825 < i_5825; rows_5825++)	
	{
		for(columns_5825 = 0; columns_5825 < i_5825; columns_5825++) 
		{
			cin >> symMat[rows_5825][columns_5825];
		}		
	}
	
	for(rows_5825 = 0; rows_5825 < i_5825; rows_5825++)	
	{
		for(columns_5825 = 0; columns_5825 < i_5825; columns_5825++) 
		{
			tMat[columns_5825][rows_5825] = symMat[rows_5825][columns_5825];
		}		
	}
 	
	for(rows_5825 = 0; rows_5825 < i_5825; rows_5825++)
  	{
  		for(columns_5825 = 0; columns_5825 < j_5825; columns_5825++)
  		{
  			if(symMat[rows_5825][columns_5825] != tMat[rows_5825][columns_5825])
  			{
  				count_5825++;
  				break;
			}
		}
  	}

 	if(count_5825 == 1)
  	{
  		cout << "\nThe Matrix you have entered is a Symmetric Matrix";
	}
	else
	{
		cout << "\nThe Matrix you have entered is Not a Symmetric Matrix";
	}  	

 	return 0;
}
