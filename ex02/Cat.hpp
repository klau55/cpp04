#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat() override;

        void makeSound() const override;
        void setBrainIdea(int index, const std::string &idea);
        std::string getBrainIdea(int index) const;
};