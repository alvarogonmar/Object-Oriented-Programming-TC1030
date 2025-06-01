#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string name, int age, string enrollmentId) : Person(name, age), enrollmentId(enrollmentId) {}

string Student::toString() const
{
    return "Name: " + name + " Age: " + to_string(age) + " Enrollment ID: " + enrollmentId;
}