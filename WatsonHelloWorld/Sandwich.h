#pragma once

#define SHOP_NAME "Subways"
#define PI 3.1415f

void f2();

class Sandwich {
public:
	void Read();
	void Write();

private:
	char name[32];
	float price;
	bool isHot;

	static const float TAX;
};