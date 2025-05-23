#pragma once
#include <iostream>

class Camera
{
protected:
    double lensSize;

public:
    Camera(double lensSize);
    void takePicture();
};