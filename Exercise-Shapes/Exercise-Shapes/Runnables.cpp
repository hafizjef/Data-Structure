#include <iostream>
#include "Shape.h"
#include "Polygon.h"
using namespace std;

int main()
{
	Shape rectangle;
	rectangle.setp(8);
	rectangle.printP();

	Polygon triangle;
	triangle.setp(9);
	triangle.printP();
	triangle.getArea();

}