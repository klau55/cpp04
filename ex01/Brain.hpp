#pragma once

class Brain {
    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();
    private:
        size_t x = 0;
        std::string ideas_[static const size_t size_ = 100];

    
};

std::ostream& operator<<(std::ostream& os, const Brain& brain);