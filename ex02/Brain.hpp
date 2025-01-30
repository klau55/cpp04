#pragma once

#include <iostream>
#include <string>

class Brain {
    private:
        std::string ideas_[100];
    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();

        void setIdea(const std::string& idea, int index);
        std::string getIdea(int index) const;
};
