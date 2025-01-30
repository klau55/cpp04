#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type_;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& other);
        ~WrongAnimal();

        const std::string& getType() const;
        void makeSound() const;
};
