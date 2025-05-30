#include <iostream> // in - input / output
#include <string>
#include "Computer.h"
#include "Camera.h"
#include "MobileDevice.h"
#include "Smartphone.h"

int main()
{
    Computer computer1(16, 20);
    computer1.turnOn();

    Camera camera1(19.20);
    camera1.takePicture();

    MobileDevice chinaPhone(16, 3.0, 18, "Apple", 6.7);
    chinaPhone.turnOn();
    chinaPhone.takePicture(3);

    Smartphone mexicanPhone(32, 18, 22, "Del Bienestar", 7.1, "PilloPhone");
    mexicanPhone.turnOn();
    mexicanPhone.takePicture();
}