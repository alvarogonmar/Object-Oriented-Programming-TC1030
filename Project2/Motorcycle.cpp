#include "Motorcyple.h"
// Overriding a pure virtual (abstract) method looks
// exactly the same as overriding a regular virtual method
string Motorcycle::move()
{
    string result = " I LIKE TO BE NOISY!";
    // IF YOU ARE WORKING WITH STRINGS
    // you can "add" more string to it
    // that is called concatenation
    return result + "BROOOM";
}