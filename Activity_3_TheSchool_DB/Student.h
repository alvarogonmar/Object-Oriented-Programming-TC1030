#pragma once
#include <iostream>
using namespace std;
#include "Person.h"

class Student : public Person
{
private:
    string enrollmentId;

public:
    Student(string name, int age, string enrollmentId);
    string toString() override;
};