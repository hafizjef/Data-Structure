#pragma once
#include "Members.h"

class Student : public Members
{
public:
	Student();
	Student(int regID);
	~Student();
	void printID() const;
};

