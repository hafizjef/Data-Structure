#ifndef DATE_H
#define DATE_H
class Date
{
private: //optional – by default it will be private
	int day, month, year;
public:
	Date(); //Constructor
	~Date(); //Destructor
	void printDate() const; //Method
	void setDate(int day, int month, int year); //Method
};
#endif