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
};