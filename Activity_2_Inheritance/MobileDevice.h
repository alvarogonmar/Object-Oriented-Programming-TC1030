#pragma once
using namespace std;
#include <iostream>
#include <string>

class MobileDevice : public Computer, public Camera
{
protected:
    string brand;
    int screenSize;
};