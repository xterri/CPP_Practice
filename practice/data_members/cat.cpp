#include "cat.hpp"

// 'cat::' >> speak function is "part of" the cat class
    // ^ include in front of function to add it to the class
void    cat::speak() {
    if (happy) // happy = true)
        std::cout << "meew mew meow" << std::endl;
    else
        std::cout << "rawr" << std::endl;
}

// b/c 'cat::' is set in function name, already accessing cat class
    // so don't need to do it to access var in class
void    cat::makeHappy(bool mood) {
    if (mood)
        happy = true; // don't need to use 'cat::' for happy
}