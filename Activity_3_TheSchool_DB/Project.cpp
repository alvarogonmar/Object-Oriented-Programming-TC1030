#include <iostream> // in - input / output
#include <string>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Functions.h"

int main()
{
    vector<Person *> peopleContainer;

    int userOption = 0;

    do
    {
        cout << "Choose an Option" << endl;
        cout << "1. Add Student\n2. Add Teacher\n3. Print everyone in the system\n9. Exit Program"
             << endl;
        cin >> userOption;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (userOption == 1)
        {
            addStudent(peopleContainer);
        }
        else if (userOption == 2)
        {
            addTeacher(peopleContainer);
        }
        else if (userOption == 3)
        {
            for (Person *person : peopleContainer)
            {
                cout << person->toString() << endl;
            }
        }

    } while (userOption != 9);
    cout << "Goodbye!" << endl;
}