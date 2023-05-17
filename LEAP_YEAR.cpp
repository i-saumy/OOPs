#include <iostream>

using namespace std;

int main()
{
    int year_5825;
 
    cout<<"Enter any year: ";
    cin>>year_5825;
    
    (year_5825%4==0 && year_5825%100!=0 ) ? cout<< "LEAP YEAR" :( year_5825%400 ==0 ) ? cout<<"LEAP YEAR" : cout<<"COMMON YEAR";

    return 0;
}


