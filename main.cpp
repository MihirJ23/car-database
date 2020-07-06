#include "cars.h"

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

using namespace std;

int main() {
    Cars newCar; 
    newCar.addCar("S500", "coupe", 90000);
    newCar.addCar("X3", "SUV", 60000);
    newCar.addCar("A7", "sedan", 70000);

    try {
        newCar.searchCar("A4");

        cout << "Yes, " << newCar.searchCar("S500") << "is available" << endl;

        cout << "The X3 is ";

        if (newCar.searchPrice("X3") == 60000) {
            cout << newCar.searchPrice("X3") << endl;
        }
        else {
            throw runtime_error("Invalid cost");
        }

        newCar.editPrice(90000);

        if (newCar.returnPrice() != 90000) {
            cout << "Correct price changed" << endl;
        }
        else {
            throw runtime_error("Invalid change in price");
        }
    }

    catch (runtime_error &excpt) {
        cout << excpt.what() << endl;
        cout << "Invalid price found" << endl;
    }

    catch (runtime_error &excpt) {
        cout << excpt.what() << endl;
        cout << "Invalid change in price" << endl;
    }

    return 0;
}