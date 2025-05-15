// Import a header into my current source code
// < > used for standar library headers or libraries installed
// " " for your own headers and files in your source tree
#include <iostream> // in - input / output
#include "Animal.h"

//  Compiler: a program that translates source code into binary
// there are several compilers available for C++ such as GCC, Clang, MSVC, etc.
// -msvc is the Microsoft Visual C++ compiler
// -g++ is the GNU C++ compiler
// -clang++ is the Clang C++ compiler

// IDE: Integrated Development Environment
// visual tool hekps us develop software, like Visual Studio, xcode, visual studio code, etc.

// main function: in c++ we hacve a main entry point that willl run when we "press play"
int main()
{
    // :: - scope resolution operator
    // \n - line break o endl
    std::cout << "Hello, World!" << std::endl;
    // creating an object
    Animal animal_1;
    std::cout << animal_1.add(2, 3) << std::endl;
    return 0;
}