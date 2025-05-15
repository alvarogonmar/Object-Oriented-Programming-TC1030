// header files (.h) : Contains the definition of the class with NO implementation (unless its inline) - Definir que es lo que hace la clase

#pragma once // means only have a single copy of this file when running PONERLO EN TODOS LOS .h files
// ANYTHING THAT STARTS with a # is a preprocessor directive
// you can think of it as an instruction for the compiler

// a couple of notes on naming conventions:
// classes should be named using PascalCode - NO SPACES IN NAMES
// VARIABLES and objects use camelCase
// constants and enums use UPPER_CASE
class Animal
{
    // INSIDE a class we define MEMBERS!
    // we have 2 big categories: Attributes(caracteristicas) and behaviors(las cosas que hacen)

    // variables - type name;
    int age;
    int name;

    // methods - returnType name(parameterList)
    void eat();

    int add(int firstValue, int secondeValue);
};