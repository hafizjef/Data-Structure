#include <iostream>
#include "Date.h"
using namespace std;

void main() {
	Date a, b;
	b.setDate(25, 12, 2005);
	cout << "a " << endl;
	a.printDate();
	cout << "b " << endl;
	b.printDate();
	cout << endl;
}