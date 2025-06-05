#include "Animal.h"
#include <iostream>
// using namespace std;

Animal::Animal(string name, int age) : name(name), age(age) {}

void Animal::sayHi()
{
    cout << "My name is: " + name + " and my age is: " + to_string(age) << endl;
}