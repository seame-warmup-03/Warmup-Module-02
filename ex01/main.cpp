#include <iostream>
#include "Car.hpp"
using namespace std;

int main()
{
    Car myCar("volkswagen", "passat", 2023, 225);
    myCar.printParts();

    Car newCar = myCar;

    return 0;
}
