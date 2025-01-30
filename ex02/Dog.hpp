#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog() override;

        void makeSound() const override;
        void setBrainIdea(int index, const std::string &idea);
        std::string getBrainIdea(int index) const;
};