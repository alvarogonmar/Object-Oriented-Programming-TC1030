#include "Student.h"
#include <iostream>
using namespace std;

string Student::toString() const
{
    return "Name: " + name + " Enrollment ID: " + enrollmentId;
}