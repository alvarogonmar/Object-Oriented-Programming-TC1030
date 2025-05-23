#include "Computer.h"

using namespace std;

Computer::Computer(int ram, double speed) : ramAmount(ram), processorClockSpeed(speed) {}

void Computer::turnOn()
{
    cout << "Computer turned on. RAM: " << ramAmount
         << " GB, Processor Speed: " << processorClockSpeed << " GHz" << endl;
}