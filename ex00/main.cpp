#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Type of j: " << j->getType() << std::endl;
    std::cout << "Type of i: " << i->getType() << std::endl;

    std::cout << "Sound of i: ";
    i->makeSound();
    std::cout << "Sound of j: ";
    j->makeSound();
    std::cout << "Sound of meta: ";
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();

    std::cout << "Type of wrongI: " << wrongI->getType() << std::endl;

    std::cout << "Sound of wrongI: ";
    wrongI->makeSound();

    delete wrongMeta;
    delete wrongI;

    return 0;
}
