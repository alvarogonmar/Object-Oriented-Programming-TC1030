// UML
// Fixing cin
// pointers
// work a bit with vector
// read files
#include <iostream>
using namespace std;

int main()
{
    // delcared outside because of scope
    cout << "Este es mi codigo para el proyecto" << endl;

    int userOption = 0;
    string stringInput;

    do
    {
        cout << "Choose a number" << endl;
        cin >> userOption;

        // we need to flush the line before we read a whole line
        // cin.ignore(amountOfCharactersToIgnore, characterToSearchFor);
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // sirve para limpiar la memoria del buffer

        cout << "write a string" << endl;
        getline(cin, stringInput);

        cout << "your input: " << userOption << " " << stringInput << endl;
    } while (userOption != 9);
}