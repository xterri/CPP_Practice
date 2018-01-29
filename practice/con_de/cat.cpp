#include "cat.hpp"

//define the constructor and init stuff in class
    // runs as soon as object is instantiated
cat::cat() {
    std::cout << "cat created" << std::endl;
    happy = true; 
}

void    cat::speak() {
    if (happy)
        std::cout << "meow mew meow" << std::endl;
    else
        std::cout << "ssss rawr bitch" << std::endl;
}

// deconstructor 
cat::~cat() {
    std::cout << "cat annihilated" << std::endl;
}