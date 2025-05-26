// UML
// Fixing cin
// pointers
// work a bit with vector
// read files
#include <iostream>
#include "Vehicle.h"
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

int main()
{
    Vehicle v1;
    // lets do some memory leaks
    // this happens in unmanaged code
    // 2 categories of code based on memory management:
    // 1. Managed - Object that have no referenced are cleaned up by the garbage collector
    // 2. Unmanaged - when we allotcate an object in memory WE MUST CLEAN AFTER OURSELVES

    // - POINTER - a numeric value that represents a memory address
    // old school pointers and smart pointers
    // upside - you can reference a particular object anywhere
    // downside - you are responsible of cleaning it after use

    Vehicle *v2 = new Vehicle(); // Pointer - usar new, va a retornar reference del Vehicle

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

    delete v2;
}