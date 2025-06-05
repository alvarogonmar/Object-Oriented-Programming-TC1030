#pragma once
#include <iostream>
using namespace std;

class Animal
{
protected:
    string name;
    int age;

public:
    Animal(string name, int age);
    virtual void sayHi();
};