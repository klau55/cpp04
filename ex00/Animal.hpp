#pragma once

#include <iostream>
#include <string>

class Animal {
    public:
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();
        const std::string& getType() const;
        virtual void makeSound() const;
    
    protected:
        Animal(const std::string& type);
        std::string type_;
};