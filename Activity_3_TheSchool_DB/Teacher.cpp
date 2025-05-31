#include "Teacher.h"
#include "Person.h"
#include <iostream>
using namespace std;

Teacher::Teacher(string name, int age, string teacherId) : Person(name, age), teacherId(teacherId) {}

string Teacher::toString() const
{
    return "Name: " + name + " Enrollment ID: " + teacherId;
}