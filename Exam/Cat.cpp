#include "Cat.h"
#include <iostream>
#include "Animal.h"
// using namespace std;

Cat::Cat(string name, int age, int livesLeft) : Animal(name, age), livesLeft(livesLeft) {}

void Cat::sayHi()
{
    cout << "My name is: " + name + " and my age is: " + to_string(age) + " and I have: " + to_string(livesLeft) + " lifes left" << endl;
}