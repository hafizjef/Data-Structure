#include "Members.h"
#include <iostream>

Members::Members() {}
Members::Members(int d)
{
	regID = d;
}

Members::~Members() {}

void Members::printID() const
{
	std::cout << "User info : " << regID << std::endl;
}
