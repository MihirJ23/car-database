#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef __CARS_H__
#define __CARS_H__

class Cars {
public:
Cars addCar(string name, string type, double price);
string searchCar(string name);
double searchPrice(string name);
string editName(string name);
double editPrice(double price);
double returnPrice();
double returnName(Cars* vehicle);
double returnType(Cars* vehicle);
string name;
double price;
string type;

private:
vector<Cars *> CarInventory;
};

#endif

