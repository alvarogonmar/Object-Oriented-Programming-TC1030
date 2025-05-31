#pragma once
#include <iostream>

class Person
{
protected:
    string name;
    int age;

public:
    Person(string name, int age);
    void toString(); // poner virtual
};