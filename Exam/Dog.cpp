#include "Dog.h"
#include "Animal.h"
#include <iostream>
// using namespace std;

Dog::Dog(string name, int age, string breed) : Animal(name, age), breed(breed) {}

void Dog::sayHi()
{
    cout << "My name is: " + name + " and my age is: " + to_string(age) + " and my breed is: " + breed << endl;
}