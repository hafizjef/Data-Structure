#include <iostream>
#include "Date.h"
using namespace std;

int day, month, year;
//Contructor
Date::Date() {
	day = 10;
	month = 12;
	year = 2001;
}
//Destructor
Date::~Date() { }
//Method stop
void Date::setDate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

void Date::printDate() const 
//A member function that inspects(rather than mutates) its object.
//Common practices; see https://isocpp.org/wiki/faq/const-correctness#const-member-fns
{
	cout << "Day -> " << day << endl << "Month -> " << month << endl << "Year -> " << year << endl << endl;
}
