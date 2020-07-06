#include "cars.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

Cars Cars::addCar(string name, string type, double price) {
    Cars * newcar;

    newcar->name = name;
    newcar->type = type;
    newcar->price = price;

    CarInventory.push_back(newcar);
}

string Cars::searchCar(string inputname) {
    for (unsigned i = 0; i < CarInventory.size(); ++i) {
        if (CarInventory.at(i)->name == inputname) {
            return CarInventory.at(i)->name;
        }
    }
    cout << "Sorry we don't carry the car you seek" << endl;
}

double Cars::searchPrice(string inputname) {
    for (unsigned i = 0; i < CarInventory.size(); ++i) {
        if (CarInventory.at(i)->name == inputname) {
            return CarInventory.at(i)->price;
        }
    }
}

string Cars::editName(string inputname) {
    string newname;
    for (unsigned i = 0; i < CarInventory.size(); ++i) {
        if (CarInventory.at(i)->name == inputname) {
            cout << "Please enter a new model name:" << endl;
            cin >> newname;
            CarInventory.at(i)->name = newname;
            return CarInventory.at(i)->name;
        }
    }
}

double Cars::editPrice(double price) {
    for (unsigned i = 0; i < CarInventory.size(); ++i) {
        double newPrice;
        if (CarInventory.at(i)->price == price) {
            cout << "Please enter a new price" << endl;
            cin >> newPrice;
            CarInventory.at(i)->price = newPrice;
            return CarInventory.at(i)->price;
        }
    }
}

double Cars::returnPrice() {
    return price;
}

// string returnName(Cars vehicle) {
//     return name;
// }

// string returnType(Cars vehicle) {
//     return type;
// }
