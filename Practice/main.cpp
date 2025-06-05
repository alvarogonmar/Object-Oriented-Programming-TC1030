#include "Vehicle.h"
#include "Motorcycle.h"
#include "Car.h"
using namespace std;
#include <iostream>
#include "Functions.h"
// g++ main.cpp Vehicle.cpp Functions.cpp Motorcycle.cpp Car.cpp -o main
int main()
{
    vector<Vehicle *> vehicleContainer;
    int userOption = 0;

    do
    {
        cout << "Choose an option: " << endl;
        cout << "1. Add new Car\n2. Add new Motorcycle\n3. Check All vehicles in the system\n9. Exit Program" << endl;
        cin >> userOption;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (userOption == 1)
        {
            addCar(vehicleContainer);
        }
        else if (userOption == 2)
        {
            addMotorcycle(vehicleContainer);
        }
        else if (userOption == 3)
        {
            for (Vehicle *vehicle : vehicleContainer)
            {
                cout << vehicle->toString() << endl;
            }
        }

    } while (userOption != 9);
    cout << "Goodbye!" << endl;
}