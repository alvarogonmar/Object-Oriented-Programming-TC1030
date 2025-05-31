#pragma once
#include <iostream>

class Person
{
protected:
    string name;
    int age;

public:
    Person(string name, int age);
    virtual string toString() const = 0; //  abstracto
};