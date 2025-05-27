#include "MobileDevice.h"
#include <iostream>
using namespace std;

MobileDevice::MobileDevice(int ram, double speed, double lens, string brand, double screen)
    : Computer(ram, speed), Camera(lens), brand(brand), screenSize(screen) {}

void MobileDevice::turnOn()
{
    cout << "ChinaPhone turned on. RAM: " << ramAmount
         << " GB, Processor Speed: " << processorClockSpeed << " GHz" << endl;
}
void MobileDevice::takePicture()
{
    cout << brand
         << " took a picture with lens size: " << lensSize
         << " mm, on screen size: " << screenSize << " inches." << endl;
}

void MobileDevice::takePicture(int time)
{
    cout << "Taking picture in " << endl;
    for (int i = 0; i < time; i++)
        cout << (time - i) << " seconds..." << endl;
    cout << "Nice! Picture taken!" << endl;
}
