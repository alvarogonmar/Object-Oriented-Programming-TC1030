#pragma once
#include <iostream>
using namespace std;
#include "Person.h"

class Student : public Person
{
private:
    string enrollmentId;

public:
    Student(std::string name, int age, std::string enrollmentId);
    string toString() const override;
};