// source file (.cpp) - Contains the specific impleementation, here is where we define the HOW

// IMPORTANT - THEY must be related EXPLICITILY
#include "Animal.h"

Animal::Animal()
{
    std::cout << "Default constructor involved" << std::endl;
}
// we are using initialization list
Animal::Animal(int age, int weight) : age(age), weight(weight)
{

    // initialization can also happen here
    // this -> age = age;
    // this-> weight = weight;
    std::cout << "NON Default constructor involved" << std::endl;
}

// we will implement the methods here

void Animal::eat()
{
    std::cout << "NOM NOM" << std::endl;
}

int Animal::add(int firstValue, int secondeValue)
{
    return firstValue + secondeValue;
}