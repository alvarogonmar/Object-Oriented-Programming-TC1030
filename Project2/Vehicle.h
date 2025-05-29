#pragma once
#include <iostream>
using namespace std;
class Vehicle
{
public:
    // Constructor
    Vehicle();
    // destructor
    ~Vehicle();

    // pure virtual methods (abstract in other lenguages)
    // abstract classes

    // having at least 1 pure virtual (abstract methods in a class)
    // makes the class an abstract class

    // abstract classes have 1 big restriction - yu cannot initialize objects of this type
    virtual string move() = 0; // Solo se define en firma, va suceder, existe pero no decimos que hace, por ejempl, todos los vehiculos se mueven pero la manera es distinta

    // MORE ABOUT ABSTRACT METHODS
    // in other languages interfaces exists
    // interfaces are classes with only abstract methods
};