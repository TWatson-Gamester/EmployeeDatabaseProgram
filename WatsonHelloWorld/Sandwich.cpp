#include "Sandwich.h"
#include <iostream>

using namespace std;

const float Sandwich::TAX = 0.01f;

void Sandwich::Read() {
	cout << "name: ";
	cin >> name;
}

void Sandwich::Write() {
	cout << name << endl;
	cout << TAX << endl;
}

void f2() {

}