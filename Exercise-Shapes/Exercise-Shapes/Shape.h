#pragma once

class Shape
{
protected:
	int perimeter;

public:
	Shape();
	~Shape();
	void setp(int perimeter);
	void printP() const;
};
