#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "----- Correct Polymorphism -----" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\nType of j: " << j->getType() << std::endl;
    std::cout << "Type of i: " << i->getType() << std::endl;

    std::cout << "\nSound of i: ";
    i->makeSound(); // Should output Cat's sound
    std::cout << "Sound of j: ";
    j->makeSound(); // Should output Dog's sound
    std::cout << "Sound of meta: ";
    meta->makeSound(); // Should output Animal's sound

    delete meta;
    delete j;
    delete i;

    std::cout << "\n----- Incorrect Polymorphism -----" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();

    std::cout << "\nType of wrongI: " << wrongI->getType() << std::endl;

    std::cout << "\nSound of wrongI: ";
    wrongI->makeSound(); // Should output WrongAnimal's sound, not WrongCat's

    delete wrongMeta;
    delete wrongI;

    std::cout << "\n----- Testing Deep Copy -----" << std::endl;
    Dog dog1;
    dog1.setBrainIdea(0, "Chase the cat");
    dog1.setBrainIdea(1, "Fetch the ball");

    Dog dog2 = dog1; // Copy constructor
    std::cout << "Dog1's Idea[0]: " << dog1.getBrainIdea(0) << std::endl;
    std::cout << "Dog2's Idea[0]: " << dog2.getBrainIdea(0) << std::endl;

    dog2.setBrainIdea(0, "Sleep all day");
    std::cout << "After modifying Dog2's Idea[0]:" << std::endl;
    std::cout << "Dog1's Idea[0]: " << dog1.getBrainIdea(0) << std::endl;
    std::cout << "Dog2's Idea[0]: " << dog2.getBrainIdea(0) << std::endl;

    Cat cat1;
    cat1.setBrainIdea(0, "Climb the tree");
    cat1.setBrainIdea(1, "Catch the mouse");

    Cat cat2;
    cat2 = cat1; // Copy assignment operator
    std::cout << "Cat1's Idea[0]: " << cat1.getBrainIdea(0) << std::endl;
    std::cout << "Cat2's Idea[0]: " << cat2.getBrainIdea(0) << std::endl;

    cat2.setBrainIdea(0, "Nap on the sofa");
    std::cout << "After modifying Cat2's Idea[0]:" << std::endl;
    std::cout << "Cat1's Idea[0]: " << cat1.getBrainIdea(0) << std::endl;
    std::cout << "Cat2's Idea[0]: " << cat2.getBrainIdea(0) << std::endl;

    std::cout << "\n----- Testing Array of Animals -----" << std::endl;
    const int arraySize = 10;
    Animal* animals[arraySize];

    for(int i = 0; i < arraySize; ++i) {
        if(i < arraySize / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for(int i = 0; i < arraySize; ++i) {
        std::cout << animals[i]->getType() << " ";
        animals[i]->makeSound();
    }

    for(int i = 0; i < arraySize; ++i) {
        delete animals[i];
    }

    return 0;
}