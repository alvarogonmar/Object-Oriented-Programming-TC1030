#pragma once
using namespace std;
#include <iostream>

class Animal
{
protected:
    string name;
    int age;

public:
    Animal(string name, int age);
    virtual void sayHi();
};