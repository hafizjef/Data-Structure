#include <iostream>
using namespace std;
#include "List.h"


/* 
*	@author : Hafiz Jefri
*	
*	1. Initialize array based on user input
*	2. Calculate total value of item(s) in array
*	3. Delete item(s) in array
*	4. Find item in array
*/


void main()
{
	int item, fvalue;
	char answer;

	List ItemList;

	cout << "Now there are : " << ItemList.numOfItem() << " item in the list\n\n";

	cout << "Enter a digit : ";
	cin >> item;

	for (int i = 0; i<10; i++)
	{
		ItemList.addItem(item);
		cout << "Item " << item++ << " is added\n";
	}

	cout << "Now there are : " << ItemList.numOfItem() << " items in the list \n\n";
	cout << "The list are : \n";
	ItemList.printItem();

	int tot = ItemList.total();
	cout << "\nTotal sum of the list is : " << tot << endl;

	cout << "\nNow item [0] will be deleted. Press Y : ";
	cin >> answer;

	//ItemList.deleteItem();
	ItemList.deleteItem(0);
	cout << "\nThe updated List are : \n";
	ItemList.printItem();

	cout << "\nEnter the value you want to find : ";
	cin >> fvalue;
	ItemList.finditem(fvalue);

}
