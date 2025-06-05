#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string brand;
    int year, price;

public:
    Vehicle(string brand, int year, int price);
    virtual string toString() = 0;
};