#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("WrongAnimal") {
    std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type_(other.type_) {
    std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        this->type_ = other.type_;
        std::cout << "WrongAnimal copy assignment operator called\n";
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called for " << type_ << std::endl;
}

const std::string& WrongAnimal::getType() const {
    return type_;
}

void WrongAnimal::makeSound() const {
    std::cout << "Generic sound\n";
}