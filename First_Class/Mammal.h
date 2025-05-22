// Inheritance: a class inherits members from a superclass, meaning the subclass can use members of the superclass
#include "Animal.h"
#include "Viviparous.h"
#include "iostream"

// When doing inheritance you specify a modifier which changes the members acces modifiers
// remember: we only inherit public and protected members
// public - pub;ic remains public, protected remains protected
// protected - public becomes protected
// private - everything becomes private

// c++ has multiple inheritance which means a clas can be a subclass of several superclasses
class Mammal : public Animal, public Viviparous
{
public:
    Mammal(int age, int weight, std::string name);
};