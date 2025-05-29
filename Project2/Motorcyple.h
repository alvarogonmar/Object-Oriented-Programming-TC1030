#pragma once
#include "Vehicle.h"
class Motorcycle : public Vehicle
{
    string move() = 0 override;
};