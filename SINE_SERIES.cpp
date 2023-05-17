
#include <iostream>
#include  <math.h>

using namespace std;

int fact(int n)

{
    int f = 1;
    for (int i = 1;i<=n;i++)
        f *= i;
    return f;
}

int main()

{
    int x, n,a=1;
    float s = 0.0;
    cout << "Enter the value of X and the range of n";
    
    cin >> x >> n;
    for (int i = 1; i <= n;i++){
        int z = fact(a);
        if (i&1){
            s += pow(x, a) / z;
            a += 2;}
            else {
                s -= pow(x, a) / z;
                a += 2;}
    }
    
    cout << "sin(x) = " << s;
    return 0;
}

