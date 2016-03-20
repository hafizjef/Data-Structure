#include <iostream>
#include "Students.h"

Student::Student() {}
Student::Student(int d)
{
	regID = d;
}

Student::~Student() {}

void Student::printID() const
{
	std::cout << "Student info : " << regID << std::endl;
}
