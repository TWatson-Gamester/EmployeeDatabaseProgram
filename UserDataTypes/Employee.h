#pragma once



class Employee {
public:
	void Read();
	void Write();
private:
	char name[32];
	int age;
	long zipcode;
	float wage;
	int daysWorked;
	float hoursWorkedPerDay[7];
	static const float TAX;
	float grossIncome;
	float netIncome;
};