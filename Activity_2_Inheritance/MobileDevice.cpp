#include "MobileDevice.h"
#include <iostream>
using namespace std;

MobileDevice::MobileDevice(int ram, double speed, double lens, string brand, double screen)
    : Computer(ram, speed), Camera(lens), brand(brand), screenSize(screen) {}

void MobileDevice::takePicture()
{
    cout << "MobileDevice " << brand
         << " took a picture with lens size: " << lensSize
         << " mm, on screen size: " << screenSize << " inches." << endl;
}

void MobileDevice::takePicture(int time)
{
    cout << "Taking picture in " << time << " seconds... Nice! Picture taken!" << endl;
}
