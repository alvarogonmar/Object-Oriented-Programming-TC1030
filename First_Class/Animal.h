// header files (.h) : Contains the definition of the class with NO implementation (unless its inline) - Definir que es lo que hace la clase

#pragma once // means only have a single copy of this file when running PONERLO EN TODOS LOS .h files
// ANYTHING THAT STARTS with a # is a preprocessor directive
// you can think of it as an instruction for the compiler

// a couple of notes on naming conventions:
// classes should be named using PascalCode - NO SPACES IN NAMES
// VARIABLES and objects use camelCase
// constants and enums use UPPER_CASE

// we define in class the contract (estructura de la clase)
#include <iostream>

// IMPORTANTE - ACCess modifiers - keywords that specify who can access a member
// private: member only accessibe by the class itself DEFAULT IN C++
// protected: accesible bby the lass itself and any in the subclass hierarchy
// public: anyone can accesess the members
class Animal
{
    // INSIDE a class we define MEMBERS!
    // we have 2 big categories: Attributes(caracteristicas) and behaviors(las cosas que hacen)

    // variables - type name;
    // los atributos son privados
private:
    int age = 0;
    int weight = 0;

    //  methods - returnType name(parameterList)
    //  this is called a signature (firma)
public:
    void eat();
    int add(int firstValue, int secondeValue);

    // CONSTRUCTOR: a method that is automatically involved when creatin a new object of a clas
    // in c++ it MUST be named the same as the class, it has no return type

    Animal(); // Default constructor - with no parameters
    Animal(int age, int weight);

    // accessor methods
    // methods that are used to define who can read AND/OR write an attribute
    int getAge();

protected:
    void setAge(int newAge);
};