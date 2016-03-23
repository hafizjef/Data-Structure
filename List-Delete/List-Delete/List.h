#ifndef LIST_H
#define LIST_H

const int maxsize = 100;

class List
{
public:
	List();
	~List();
	int numOfItem() const;
	void addItem(int item);
	void deleteItem();
	void deleteItem(int i);
	int total();
	void finditem(int y);
	void printItem();


private:
	int size, position;
	int array[maxsize];
};
#endif
