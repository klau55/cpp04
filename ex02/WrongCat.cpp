#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type_ = "WrongCat";
    std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "WrongCat copy constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        type_ = other.type_;
        std::cout << "WrongCat copy assignment operator called\n";
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called for " << type_ << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat sound\n";
}
