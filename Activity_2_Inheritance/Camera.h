#pragma once
#include <iostream>

class Camera
{
protected:
    double lensSize;

public:
    Camera(double lensSize);
    virtual void takePicture();
};