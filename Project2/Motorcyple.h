#pragma once
#include "Vehicle.h"
class Motorcycle : public Vehicle
{
public:
    string move() override;
};