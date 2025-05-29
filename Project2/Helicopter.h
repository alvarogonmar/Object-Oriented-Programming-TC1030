#pragma once
#include "Vehicle.h"
class Helicopter : public Vehicle
{
public:
    string move() override;
};