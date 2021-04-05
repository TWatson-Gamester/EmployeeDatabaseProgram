// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	Employee employees[5];
	short numEmployees;
	cout << "How many Employees are there: ";
	cin >> numEmployees;

	for (int i = 0; i < numEmployees; i++) {
		employees[i].Read();
	}

	for (int i = 0; i < numEmployees; i++) {
		employees[i].Write();
	}
}

