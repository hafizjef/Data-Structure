#pragma once
class Members
{
protected:
	int regID;
public:
	Members();
	Members(int regID);
	~Members();
	void printID() const;
};

