#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;

class Cat : public Animal
{
protected:
    int livesLeft;

public:
    Cat(string name, int age, int livesLeft);
    void sayHi() override;
};