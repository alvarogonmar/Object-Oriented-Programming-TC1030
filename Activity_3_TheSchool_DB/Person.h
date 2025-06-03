#pragma once
#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string name, int age);
    virtual string
    toString() = 0; //  abstracto
};