#pragma once

#include <iostream>
#include <string>
#include "Computer.h"
#include "Camera.h"
using namespace std;

class MobileDevice : public Computer, public Camera
{
protected:
    string brand;
    double screenSize;

public:
    MobileDevice(int ram, double speed, double lens, string brand, double screen);

    // void turnOn() override;
    void takePicture() override;
    void takePicture(int time);
};
