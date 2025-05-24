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
    double screenSize; // usa double para pulgadas

public:
    MobileDevice(int ram, double speed, double lens, string brand, double screen);

    void takePicture() override;
    void takePicture(int time);
};
