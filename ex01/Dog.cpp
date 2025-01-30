#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain()) {
    std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {
    std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog copy assignment operator called" << std::endl;
    if(this != &other) {
        Animal::operator=(other);
        if(brain)
            delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog() {
    if(brain)
        delete brain;
    std::cout << "Dog destructor called for " << type_ << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Hau\n";
}
void Dog::setBrainIdea(int index, const std::string &idea) {
    brain->setIdea(idea, index);
}
std::string Dog::getBrainIdea(int index) const {
    return brain->getIdea(index);
}