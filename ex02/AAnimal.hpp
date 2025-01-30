#pragma once

#include <iostream>
#include <string>

class AAnimal {
    public:
        AAnimal();
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal();
        
        const std::string& getType() const;
        virtual void makeSound() const = 0;
    
    protected:
        AAnimal(const std::string& type);
        std::string type_;
};