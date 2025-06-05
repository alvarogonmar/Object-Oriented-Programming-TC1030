#include <iostream>
#include "Functions.h"
#include "Motorcycle.h"
#include "Car.h"

void addMotorcycle(vector<Vehicle *> &vehicleContainer)
{
    cout << "Please enter the data of your motorcycle" << endl;

    string brand;
    int year, price, numberTires;

    cout << "Brand in two words: ";
    getline(cin, brand);

    cout << "Year: ";
    cin >> year;

    cout << "Price: ";
    cin >> price;

    cout << "Number OF Tires: ";
    cin >> numberTires;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vehicleContainer.push_back(new Motorcycle(brand, year, price, numberTires));
    cout << "Motorcycle added successfully!\n";
}

void addCar(vector<Vehicle *> &vehicleContainer)
{
    cout << "Please enter the data of your car" << endl;
    string brand;
    int year, price, numberDoors;

    cout << "Brand in two words: ";
    getline(cin, brand);

    cout << "Year: ";
    cin >> year;

    cout << "Price: ";
    cin >> price;

    cout << "Number OF Doors: ";
    cin >> numberDoors;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vehicleContainer.push_back(new Car(brand, year, price, numberDoors));
    cout << "Car added successfully!\n"
         << endl;
}