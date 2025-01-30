#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        std::cout << "Cat copy assignment operator called\n";
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called for " << type_ << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Miau\n";
}

