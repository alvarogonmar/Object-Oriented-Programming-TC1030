#include <iostream>
#include <vector>
#include <string>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
// using namespace std;

int main()
{
    vector<Animal *> animalContainer;

    Dog p1("Rulfo", 14, "Pomerania");
    Dog p2("Capi", 20, "Pastor Aleman");
    Dog p3("Yepez", 1, "Chihuahua");
    Cat c1("Rulfo", 14, 7);
    Cat c2("Donal", 15, 3);
    Cat c3("YEPETO", 1, 1);

    animalContainer.push_back(&p1);
    animalContainer.push_back(&p2);
    animalContainer.push_back(&p3);
    animalContainer.push_back(&c1);
    animalContainer.push_back(&c2);
    animalContainer.push_back(&c3);

    for (Animal *animal : animalContainer)
    {
        animal->sayHi();
    }
    return 0;
}

// Polimofismo:
// Es la capacidad de heredar acciones de una clase, pero con su propio metodo
// Por ejemplo si tenemos un ser vivo, y tenemos la clase caminar, el perro lo hace diferente al humano
// Entonces ahi usamos la misma clase de caminar pero es diferente resultado.