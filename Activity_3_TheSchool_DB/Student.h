#pragma once
#include <iostream>
using namespace std;
#include "Person.h"

class Student : public Person
{
private:
    double enrollmentId;

public:
    Student(string name, int age, double enrollmentId);
    string toString() const override;
};