#pragma once
#include <iostream>
class Viviparous
{
private:
    /* data */
public:
    void bornAlive();

    // virtual methods and overriding
    // TWO CONCEPTS WE NEED TO GET A HANG OUT
    // Overloading - defining several versions of the same (we already did this on the animal constructor)
    // Overriding - redefine a method in a subclass

    virtual void sayHello();
};
