#include <iostream>
using namespace std;
#include "List.h"

List::List(): position(0)
{
	size = 0;
}

List :: ~List()
{}

int List::numOfItem() const
{
	return size;
}

void List::addItem(int item)
{
	if (size == maxsize)
	{
		cout << "****There is no more space left****\n";
		return;
	}
	array[size] = item;
	size++;
}

void List::deleteItem()
{
	if (size == 0)
	{
		cout << "****No more item to be deleted****\n";
		return;
	}

	size--;
}

void List::deleteItem(int location)
{
	//Warning : bound are not checked
	for (location; location < size; location++)
	{
		array[location] = array[location + 1];
	}
		
	size--;
}

int List::total()
{
	int tot = 0;
	for (int i = 0; i < size; i++)
	{
		tot = tot + array[i];
	}
	return tot;
}

void List::printItem()
{
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << "\n";
}

void List::finditem(int y)
{
	bool found = false;
	int location = 0;
	for (int i = 0; i<size; i++)
	{
		if (y == array[i])
		{
			found = true;
			location = i;
			break;
		}
		else
		{
			found = false;
		}
	}

	if(found==true)
	{
		cout << "The index of " << y << " is " << location << endl;
	}
	else
	{
		cout << "Item could not be found" << endl;
	}
}
