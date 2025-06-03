#pragma once
#include <iostream>
using namespace std;
#include "Person.h"

class Teacher : public Person
{
protected:
    string teacherId;

public:
    Teacher(string name, int age, string teacherId);
    string toString() override;
};