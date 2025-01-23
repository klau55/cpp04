#include "Animal.hpp"

Animal::Animal() : type_("Animal") {
    std::cout << "Animal default constructor called\n"; 
}

Animal::Animal(const Animal& other) : type_(other.type_) {
    std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type_ = other.type_;
        std::cout << "Animal copy assignment operator called\n";
    }
    return *this;
} 
Animal::~Animal() {
    std::cout << "Animal destructor called\n";
}
const std::string& Animal::getType() const {return type_; };

void Animal::makeSound() const {
    std::cout << "Generic sound\n";
}

Animal::Animal(const std::string& type) : type_(type) {
    std::cout<<"Animal assignment constructor called\n";
}
