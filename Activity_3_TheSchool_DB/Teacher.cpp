#include "Teacher.h"
#include "Person.h"
#include <iostream>
using namespace std;

Teacher::Teacher(string name, int age, string teacherId) : Person(name, age), teacherId(teacherId) {}

string Teacher::toString()
{
    return "Name: " + name + " Age: " + to_string(age) + " Teacher ID: " + teacherId;
}