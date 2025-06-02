#include "OOPUtils.h"
void OOPUtils::staticTest()
{
    cout << "DOING STUFF IN A STATIC METHOD!" << endl;
};
void OOPUtils::cleanCin()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // sirve para limpiar la memoria del buffer
};

// receive a string, breal it apart using the delimiter as a breakpoint, return a vector with the parts.
vector<string> OOPUtils::split(string delimiter)
{
    vector<string> result;
    return result;
};