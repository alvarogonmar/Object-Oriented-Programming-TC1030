#include <iostream>
#include "Motorcycle.h"
#include "Vehicle.h"

Motorcycle::Motorcycle(string brand, int year, int price, int numberTires) : Vehicle(brand, year, price), numberTires(numberTires) {}

string Motorcycle::toString()
{
    return "Brand: " + brand + " Year: " + to_string(year) + " Price: " + to_string(price) + " Number of tires: " + to_string(numberTires);
}