#include "AAnimal.hpp"

AAnimal::AAnimal() : type_("AAnimal") {
    std::cout << "AAnimal default constructor called\n"; 
}

AAnimal::AAnimal(const AAnimal& other) : type_(other.type_) {
    std::cout << "AAnimal copy constructor called\n";
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
    if (this != &other) {
        this->type_ = other.type_;
        std::cout << "AAnimal copy assignment operator called\n";
    }
    return *this;
} 
AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called for " << type_ << std::endl;
}
const std::string& AAnimal::getType() const {
    return type_;
    };


AAnimal::AAnimal(const std::string& type) : type_(type) {
    std::cout<<"AAnimal assignment constructor called\n";
}
