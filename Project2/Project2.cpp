// UML
// Fixing cin
// pointers
// work a bit with vector
// read files
#include <iostream>
#include <fstream>
#include "Vehicle.h"
#include "Motorcyple.h"
#include "Helicopter.h"
#include "OOPUtils.h"
#include <string>
#include <vector>
using namespace std;

int main2()
{
    // delcared outside because of scope
    cout << "Este es mi codigo para el proyecto" << endl;

    int userOption = 0;
    string stringInput;

    do
    {
        cout << "Choose a number" << endl;
        cin >> userOption;

        // we need to flush the line before we read a whole line
        // cin.ignore(amountOfCharactersToIgnore, characterToSearchFor);
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // sirve para limpiar la memoria del buffer

        cout << "write a string" << endl;
        getline(cin, stringInput);

        cout << "your input: " << userOption << " " << stringInput << endl;

        // A THING TO CONSIDER!
        // when you do your project you WILL have a big structure here
        // (if - else if - switch)
        // DISTRIBUTE YOUR CODE
        // antipattern - GOD CLASS
    } while (userOption != 9);
    return -1;
}

int main3()
{
    // ESTO YA NO FUNCIONA Vehicle v1;
    // lets do some memory leaks
    // this happens in unmanaged code
    // 2 categories of code based on memory management:
    // 1. Managed - Object that have no referenced are cleaned up by the garbage collector
    // 2. Unmanaged - when we allotcate an object in memory WE MUST CLEAN AFTER OURSELVES

    // - POINTER - a numeric value that represents a memory address
    // old school pointers and smart pointers
    // upside - you can reference a particular object anywhere
    // downside - you are responsible of cleaning it after use

    // ESTO YA NO FUNCIONA Vehicle *v2 = new Vehicle(); // Pointer - usar new, va a retornar reference del Vehicle

    // new vs malloc
    // both allocate memory, new creates an object specific type

    // RULE: when we do a pointer we must have delete somewhere

    // VECTORS - Lineal data structures can be used to save objects created froms strings in a
    // vectors can be initializaed with no values
    // vector<int> numbers;

    // they can have soe values to begin with
    vector<int> numbers = {1, 5, 10, 15};

    // how to add new stuff at the end
    numbers.push_back(32);

    // print contents:
    for (int i = 0; i < numbers.size(); i++)
    {
        // how to access a particular members
        // vector[index]
        cout << numbers[i] << endl;
    }

    // range-based for loop
    for (int currentNumber : numbers)
    {
        cout << currentNumber << endl;
    }

    // how to remove last element
    numbers.pop_back();
    for (int currentNumber : numbers)
    {
        cout << currentNumber << endl;
    }
    // delete v2;
    return -1;
}

int main4()
{
    // POLYMORPHIMS
    // a single objects can represent different types / classes
    Helicopter h1;
    Motorcycle m1;

    cout << h1.move() << endl;
    cout << m1.move() << endl;
    // Polymorphism in action!
    // remember * is for a pointer
    // & - reference, get memory address of an object
    // WE MUST USE DESTROY WHERE WE DO NEW
    Vehicle *v1 = &h1;
    Vehicle *v2 = &m1;
    // can I invoke move()  on a vehicle?
    // YES! the object contains a reference to a subclass' object

    // Arrow operator: when using a pointer instead of . we use ->
    // it is used to acces a member (same as . )
    cout << v1->move() << endl;
    cout << v2->move() << endl;

    vector<Vehicle *> vehicleCotainer;
    vehicleCotainer.push_back(v1);
    vehicleCotainer.push_back(&m1); // Tambien sirve ponerle el objecto

    cout << "*** PRINTING A VECTOR ****" << endl;
    for (Vehicle *curreentVehicle : vehicleCotainer)
    {
        cout << curreentVehicle->move() << endl;
    }
    // HOW TO ACCESS A STATIC MEMBER
    // Class::member()
    OOPUtils::staticTest();
    return -1;
}
// g++ Project2.cpp Helicopter.cpp Motorcycle.cpp OOPUtils.cpp Vehicle.cpp -o Project2
int main()
{
    string source = "some%!test%!hello";
    string delimeter = "%!";
    vector<string> parts = OOPUtils::split(source, delimeter);
    for (string current : parts)
    {
        cout << "PART: " << current << endl;
    }
}