#pragma once
#include <iostream>
#include "Vehicle.h"

class Car : public Vehicle
{
protected:
    int numberDoors;

public:
    Car(string brand, int year, int price, int numberDoors);
    string toString() override;
};