#include "Student.h"
#include "Teacher.h"
#include <iostream>

void addStudent(vector<Person *> peopleContainer)
{
    string name, enrollmentId;
    int age;

    cout << "Enter Student name: ";
    cin >> name;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);

    cout << "Enter Student age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter Student Enrollment ID: ";
    cin >> enrollmentId;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    peopleContainer.push_back(new Student(name, age, enrollmentId));
    cout << "Student added successfully!\n";
}

void addTeacher(vector<Person *> peopleContainer)
{
    string name, teacherId;
    int age;

    cout << "Enter Teacher name: ";
    cin >> name;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);

    cout << "Enter Teacher age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter Teacher ID: ";
    cin >> teacherId;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    peopleContainer.push_back(new Teacher(name, age, teacherId));
    cout << "Teacher added successfully!\n";
}