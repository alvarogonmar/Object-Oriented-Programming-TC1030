// To run: g++ First-Code.cpp Animal.cpp -o First-Code

// Import a header into my current source code
// < > used for standar library headers or libraries installed
// " " for your own headers and files in your source tree
#include <iostream> // in - input / output
#include "Animal.h"
#include "Mammal.h"
#include "Viviparous.h"

//  Compiler: a program that translates source code into binary
// there are several compilers available for C++ such as GCC, Clang, MSVC, etc.
// -msvc is the Microsoft Visual C++ compiler
// -g++ is the GNU C++ compiler
// -clang++ is the Clang C++ compiler

// IDE: Integrated Development Environment
// visual tool hekps us develop software, like Visual Studio, xcode, visual studio code, etc.

// main function: in c++ we hacve a main entry point that willl run when we "press play"
int previousMain()
{
    // :: - scope resolution operator
    // \n - line break o endl
    std::cout << "Hello, World!" << std::endl;
    // creating an object
    Animal animal_1;
    Animal animal_2(5, 2);
    std::cout << animal_1.add(2, 3) << std::endl;
    std::cout << animal_1.getAge() << std::endl;

    // cannot do this:
    // std::cout << animal_1.age <<std::endl;
    // animal.age = 4

    // flow control strcutures review - estructuras de control de flujo
    // conditions:

    if (animal_1.getAge() < 2)
    {
        std::cout << "BABY ANIMAL" << std::endl;
    }
    else if (animal_1.getAge() < 5)
    {
        std::cout << "YOUNG ANIMAL" << std::endl;
    }
    else
    {
        std::cout << "ADULT ANIMAL" << std::endl;
    }

    // USING SWITCH
    switch (animal_1.getAge())
    {
    case 1:
        std::cout << "ONE YER OLD" << std::endl;
        break;
    case 2:
        std::cout << "TWO YER OLD" << std::endl;
        break;
    default:
        std::cout << "SOME OTHER OLD" << std::endl;
        break;
    }

    // LOOPS
    // for (initial value, condition; change){}
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }

    // while
    std::cout << "While" << std::endl;
    int i = 1;
    while (i < 10)
    {
        // SUPER IMPORTANT
        // if you are using a number for the condition in a whle ensure you are doing a change
        std::cout << i << std::endl;
        i++;

        // we normally dont use while with a numeric condition
    }

    // do while
    std::cout << "Do - While" << std::endl;

    i = 0;
    do
    {
        std::cout << i << std::endl;
        i++;
    } while (i < 10);
    return -1;
}

int main()
{
    Animal animal_1;
    // Mammal mammal_1; this will no longer work beacuse we are using a constructor
    Mammal mammal_1(5, 20, "Fifi");
    Viviparous viviparous_1;

    animal_1.eat();
    mammal_1.eat();
    // viviparous_1.eat(); CANT DO
    viviparous_1.bornAlive();
    mammal_1.bornAlive();

    viviparous_1.sayHello();
    mammal_1.sayHello();
}