#pragma once
#include <iostream>

class Computer
{
protected:
    int ramAmount;
    double processorClockSpeed;

public:
    Computer(int ram, double speed);
    void turnOn(); // poner virtual
};