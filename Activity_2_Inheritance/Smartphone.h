#pragma once
#include <iostream>
#include "MobileDevice.h"
class Smartphone : public MobileDevice
{
protected:
    string carrier;

public:
    Smartphone(int ram, double speed, double lens, string brand, double screen, string carrier);
    void takePicture() override;
};