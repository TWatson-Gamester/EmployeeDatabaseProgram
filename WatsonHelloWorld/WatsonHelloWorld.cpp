// WatsonHelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sandwich.h"

using namespace std;

enum class Season {
    spring,
    summer,
    autumn,
    winter,
    construction
};

//class Sandwich {
//public:
//    void Display() {
//        cout << "Price: $" << price << endl;
//    }
//
//    char name[32];
//    float price;
//    bool isHot;
//};

using currency = double;

using byte = short;
struct RGB {
    byte r;
    byte g;
    byte b;
};

int main()
{
    std::cout << "Hello World!\n";

    Sandwich sandwich;
    sandwich.Read();
    sandwich.Write();
    //sandwich.price = 4.99f;
    //sandwich.isHot = true;
    //sandwich.Display();

    cout << sizeof(Sandwich) << endl;
    
    cout << SHOP_NAME << endl;
    f2();
}
