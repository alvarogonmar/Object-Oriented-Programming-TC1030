#pragma once
using namespace std;
#include <iostream>
#include "Vehicle.h"

class Motorcycle : public Vehicle
{
protected:
    int numberTires;

public:
    Motorcycle(string brand, int year, int price, int numberTires);
    string toString() override;
};