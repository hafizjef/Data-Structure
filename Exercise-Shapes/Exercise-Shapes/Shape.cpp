#include "Shape.h"
#include <iostream>

Shape::Shape(): perimeter(0)
{
}


void Shape::printP() const
{
	std::cout << "The perimeter is " << perimeter << std::endl;
}

Shape::~Shape()
{
}

void Shape::setp(int p)
{
	perimeter = p;
}


