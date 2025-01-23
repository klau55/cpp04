#include "Brain.hpp"

Brain::Brain() {std::cout << "Brain default constructor called\n";}
Brain::Brain(const Brain& other) : x(other.size_) {
    for (size_t i = 0; i < x; ++i)
    {
        ideas_[i] = other.ideas_[i];
    }
}
Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain copy assignment constructor called\n";
    if (this != &other)
    {
        size_ = other.size_;
        for (size_t i = 0; i < x; ++i)
        {
            ideas_[i] = other.ideas_[i];
        }
    }
    return *this;
}
~Brain() {std::cout << "Brain destructor called\n";}

size_t Brain::getX() const {return x;}

// Brain::append 

const std::string& Brain::getIdea(const size_t index) const {
    return ideas_[index < x_ ? index : x_]
}

std::ostream& operator<<(std::ostream& os, const Brain& brain) {
    for (size_t i = 0; i < brain.getX(); ++i) {
        os << brain.getIdea(i) << ' ';
    }
    return os;
}