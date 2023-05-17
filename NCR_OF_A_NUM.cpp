#include <iostream>
 
 using namespace std;
 
int Cal_Fact(int);  
 
int main()
{
  int n_5825, r_5825, ncr_5825; 
 
  cout<<"\n Please Enter the Values for N and R: \n";
  cin>>n_5825>>r_5825;
  
  ncr_5825 = Cal_Fact(n_5825) / (Cal_Fact(r_5825) * Cal_Fact(n_5825-r_5825));
  
  cout<<"\n NCR Factorial of "  << n_5825 <<"and  " << r_5825 <<"=  " << ncr_5825;
 
  return 0;
}
 
int Cal_Fact(int Number)
{ 
  int i_5825; 
  int Factorial = 1;
 
  for (i_5825 = 1; i_5825 <= Number; i_5825++)
   {
     Factorial = Factorial * i_5825;
   }
  return Factorial;
}
