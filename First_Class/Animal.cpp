// source file (.cpp) - Contains the specific impleementation, here is where we define the HOW

// IMPORTANT - THEY must be related EXPLICITILY
#include "Animal.h"

Animal::Animal() {}
Animal::Animal(int age, int weight) {}

// we will implement the methods here

void Animal::eat()
{
    std::cout << "NOM NOM" << std::endl;
}

int Animal::add(int firstValue, int secondeValue)
{
    return firstValue + secondeValue;
}