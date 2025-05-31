#include "Student.h"
#include <iostream>
using namespace std;

string Student::toString() const
{
    // you CAN invoke the version of the superclass if you wish
    return "Name: " + name + " Enrollment ID: " + to_string(enrollmentId);
}