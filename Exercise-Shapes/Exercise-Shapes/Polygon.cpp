#include "Polygon.h"
#include <iostream>

Polygon::Polygon()
{
}

Polygon::~Polygon()
{
}

void Polygon::getArea() const
{
	std::cout << "Polygon area: " << perimeter*perimeter << std::endl;
}
