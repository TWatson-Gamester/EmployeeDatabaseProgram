#include <iostream>
#include "Employee.h"

using namespace std;

const float Employee::TAX = 0.01f;

void Employee::Read() {
	cout << "Enter First Name: ";
	cin >> name;
	cout << "Enter Age: ";
	cin >> age;
	cout << "Enter your zipcode: ";
	cin >> zipcode;
	cout << "Enter your wage: ";
	cin >> wage;
	cout << "Enter number of days you worked this week: ";
	cin >> daysWorked;

	short totalHours = 0;
	for (int i = 0; i < daysWorked; i++) {
		cout << "Enter hours worked for day " << (i + 1) << ": ";
		cin >> hoursWorkedPerDay[i];
		totalHours += hoursWorkedPerDay[i];
	}

	grossIncome = totalHours * wage;
	netIncome = grossIncome - (TAX * grossIncome);
}

void Employee::Write() {
	cout << "Employee Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "ZipCode: " << zipcode << endl;
	cout << "Wage: $" << wage << endl;
	cout << "Days Worked: " << daysWorked << endl;
	cout << "Gross Income: " << grossIncome << endl;
	cout << "Net Income: " << netIncome << endl << endl;

}