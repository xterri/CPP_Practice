#include <iostream>
#include "cat.hpp"

// using namespace std; 

// 'cat::<function name>' indicates that the <function> entered belong to the cat class
void    cat::speak() {
    std::cout << "Meowwww!!!" << std::endl;
}

void    cat::jump() {
    std::cout << "Jump Activated" << std::endl;

}