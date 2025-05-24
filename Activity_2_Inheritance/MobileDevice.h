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

    void takePicture() override
    {
        cout << "MobileDevice " << brand << " took a picture with lens size: "
             << lensSize << " mm, on screen size: " << screenSize << " inches." << endl;
    }

    void takePicture(int time)
    {
        cout << "Taking picture in " << time << " seconds... Nice! Picture taken!" << endl;
    }
};