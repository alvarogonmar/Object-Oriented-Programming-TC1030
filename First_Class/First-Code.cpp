// Import a header into my current source code
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
    return 0;
}