#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
    for(int i = 0; i < 100; ++i) {
        ideas_[i] = "No Idea";
    }
}

Brain::Brain(const Brain &other) {
    std::cout << "Brain copy constructor called" << std::endl;
    for(int i = 0; i < 100; ++i) {
        this->ideas_[i] = other.ideas_[i];
    }
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain copy assignment operator called\n";
    if(this != &other) {
        for(int i = 0; i < 100; ++i) {
            this->ideas_[i] = other.ideas_[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called\n";
}

void Brain::setIdea(const std::string &idea, int index) {
    if(index >= 0 && index < 100)
        ideas_[index] = idea;
    else
        std::cerr << "Brain::setIdea - Index out of range" << std::endl;
}

std::string Brain::getIdea(int index) const {
    if(index >= 0 && index < 100)
        return ideas_[index];
    else {
        std::cerr << "Brain::getIdea - Index out of range" << std::endl;
        return "";
    }
}