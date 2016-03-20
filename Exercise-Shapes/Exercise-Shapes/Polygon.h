#pragma once
#include "Shape.h"

class Polygon : public Shape
{
public:
	Polygon();
	~Polygon();
	void getArea() const;
};
