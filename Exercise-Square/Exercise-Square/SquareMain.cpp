#include <iostream>
#include "Square.h"
using namespace std;
void main()
{
	Square box;
	cout << "Values from constructor\n" << "Height: ";
	box.getHeight();
	cout << endl;
	cout << "Width: ";
	box.getWidth();
	cout << endl;
	cout << "Area : ";
	box.area();
	cout << endl;
	box.setData(4, 4);
	cout << "\nValues after setData\n" << "Height: ";
	box.getHeight();
	cout << endl;
	cout << "Width: ";
	box.getWidth();
	cout << endl;
	cout << "Area : ";
	box.area();
	cout << endl;
	cout << "Perimeter : ";
	box.perimeter();
	cout << endl;
}