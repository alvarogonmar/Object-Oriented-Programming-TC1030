#pragma once
#include "Vehicle.h"
class Helicopter : public Vehicle
{
    string move() = 0 override;
};