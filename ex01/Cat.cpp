#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain()) {
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain)) {
    std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if(this != &other) {
        Animal::operator=(other);
        if(brain)
            delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat() {
    if(brain)
        delete brain;
    std::cout << "Cat destructor called for " << type_ << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Miau\n";
}

void Cat::setBrainIdea(int index, const std::string &idea) {
    brain->setIdea(idea, index);
}

std::string Cat::getBrainIdea(int index) const {
    return brain->getIdea(index);
}