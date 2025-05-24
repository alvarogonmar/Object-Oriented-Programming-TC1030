#include "Smartphone.h"
#include <iostream>
using namespace std;

Smartphone::Smartphone(int ram, double speed, double lens, string brand, double screen, string carrier)
    : MobileDevice(ram, speed, lens, brand, screen), carrier(carrier) {}

void Smartphone::takePicture()
{
    cout << "Smartphone with carrier: " << carrier << " - ";
    MobileDevice::takePicture(); // Invoking super class version
}