#include "Helicopter.h"

// Overriding a pure virtual (abstract) method looks
// exactly the same as overriding a regular virtual method
string Helicopter::move()
{
    return "moving my propellers!";
}