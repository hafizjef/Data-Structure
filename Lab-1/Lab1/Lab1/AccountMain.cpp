//Program implementation – Filename: AccountMain.cpp
#include <iostream>
#include <iomanip>
#include "Account.h"
using namespace std;
void main() {
	Account acc;
	cout << "Your account balance is : "
		<< setw(5) << acc.getBalance() << endl;
	acc.deposit(100.0);
	cout << "Your account balance is : "
		<< setw(5) << acc.getBalance() << endl;
	acc.withdraw(50.0);
	cout << "Your account balance is : "
		<< setw(5) << acc.getBalance() << endl;

}