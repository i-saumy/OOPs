#include <iostream>
using namespace std;
class Shape
{
protected:
	float width, height;
public:
	void set_data (float a, float b)
	{
		width = a;
		height = b;
	}
};
class Rectangle: public Shape
{
public:
	float area ()
	{
		return (width * height);
	}
};


class Triangle: public Shape
{
public:
	float area ()
	{
		return (width * height / 2);
	}
};


int main (){


	Rectangle rectangle;
	Triangle triangle;
	rectangle.set_data (5,3);
	triangle.set_data (2,5);
	cout <<"The area of the rectangle is:   " <<rectangle.area() << endl;
	cout << "The area of the triangle is:   "<<triangle.area() << endl;
	return 0;
}
