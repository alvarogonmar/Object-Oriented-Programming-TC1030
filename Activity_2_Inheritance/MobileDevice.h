#pragma once
using namespace std;
#include <iostream>
#include <string>
#include "Computer.h"
#include "Camera.h"

class MobileDevice : public Computer, public Camera
{
protected:
    string brand;
    int screenSize;

public:
    MobileDevice(int ram, double speed, double size, string brand, double screen) : Computer(ram, speed), Camera(size), brand(brand), screenSize(screen) {}
};