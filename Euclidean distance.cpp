
#include <iostream>
#include <math.h>
using namespace std;

class point
{
protected:
    int x;
    int y;
    int z;

public:
    void getData()
    {
        cout << "Enter first Coordinates : ";
        cin >> x >> y >> z;
    }
};

class euclidean : public point
{
    int x2, y2, z2;
    int calc;

public:
    void input()
    {

        point::getData();
        cout << "Enter second Coordinates : ";
        cin >> x2 >> y2 >> z2;
    }
    void calculateEuclidean()
    {
        calc = 0;
        calc = pow((pow((x2 - x), 2) + pow((y2 - y), 2) + pow((z2 - z), 2)), 0.5);
    }
    void displayEuclidean()
    {
        cout << "\nEuclidean Distance = " << calc << endl;
    }
};

int main()
{
    euclidean e;
    e.input();
    e.calculateEuclidean();
    e.displayEuclidean();

    return 0;
}
