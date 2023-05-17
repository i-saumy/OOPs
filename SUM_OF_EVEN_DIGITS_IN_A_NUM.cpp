#include <iostream>

using namespace std;

int sum_even(int num) 
{
    int rem, sum = 0;

    while (num > 0) 
    {
        rem = num % 10;   
        num = num / 10;    
     
        if (rem % 2 == 0)
        {
            sum = sum + rem;
        }
    }
    return sum;
}

int main() 

{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    cout<<"Sum of Even Digits: "<<sum_even(num);
}
