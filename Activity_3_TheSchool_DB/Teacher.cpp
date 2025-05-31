#include "Teacher.h"
#include <iostream>
using namespace std;

string Teacher::toString() const
{
    return "Name: " + name + " Enrollment ID: " + teacherId;
}