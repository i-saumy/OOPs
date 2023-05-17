#include <iostream>

using namespace std;

int main()
{
    float num,dem;
    float result;
    cout<<"Enter the numerator & denominator to divide ";
    cin>>num>>dem;
    try
    {
        if(dem==0)
        {
            throw(dem);
        }
        result =  num / dem ;
    }
    catch(float x)
    {
        cout<<"Exception : divide by zero is not possible"<<x;
    }
    cout << "\nDivision of "<<num << " & "<< dem << " is: "<< result;

    return 0;
}
