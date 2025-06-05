#include "Car.h"
#include "Vehicle.h"
using namespace std;
#include <iostream>

Car::Car(string brand, int year, int price, int numberDoors) : Vehicle(brand, year, price), numberDoors(numberDoors) {}

string Car::toString()
{
    return "Brand: " + brand + " Year: " + to_string(year) + " Price: " + to_string(price) + " Number of doors: " + to_string(numberDoors);
}