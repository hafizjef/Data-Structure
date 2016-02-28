#include <iostream>
#include "Square.h"
using namespace std;
Square::Square() {
	height = 0;
	width = 0;
}
Square::~Square() { }
void Square::setData(float p, float l) {
	height = p;
	width = l;
}
void Square::getHeight() const
{
	cout << height;
}
void Square::getWidth() const
{
	cout << width;
}
void Square::area() const
{
	cout << height * width;
}
void Square::perimeter() const
{
	cout << (height * 2) + (width * 2);
}
