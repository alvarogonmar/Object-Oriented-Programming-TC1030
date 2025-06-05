#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;

class Dog : public Animal
{
protected:
    string breed;

public:
    Dog(string name, int age, string breed);
    void sayHi() override;
};