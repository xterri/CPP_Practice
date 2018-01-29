//constructors and destructors
    // constructor runs when class is instantiated 
    // destructor runs when mem is deallocated
#include "cat.hpp"

int     main(void) {    
    std::cout << "Starting program...\n" << std::endl;
    
    {
        cat     bob; // << instantiating cat / object
        bob.speak();
    // sometimes use { } around class in order to deallocate memory at specific point in program
    }
    // can't use anything from class outside the scope
    // memory for class obj = deallocated / destroyed

    std::cout << "\nEnding program...\n" << std::endl;

// once program reaches the last curly bracket in the scope
    // class object gets/will get destroyed
    // destructor called
}