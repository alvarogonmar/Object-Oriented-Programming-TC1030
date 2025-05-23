#include <iostream> // in - input / output
#include <string>
#include "Computer.h"
#include "Camera.h"

int main()
{
    Computer computer1(16, 20);
    computer1.turnOn();

    Camera camera1(19.20);
    camera1.takePicture();
}