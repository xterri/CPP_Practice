//data members / instance variables
#include "cat.hpp"

int     main(void) {
    cat     jim; // jim = var name for class cat
    cat     bob;

    std::cout << "JIM: " << std::flush;
    // want to prevent ppl from accessing/changing var states
        // want only objs can directly access the var.
    // jim.happy = false;
    jim.makeHappy(false);
    jim.speak();
    // encapsulate var so only used in the class

    std::cout << "BOB: " << std::flush;
    // bob.happy = true;
    bob.makeHappy(true);
    bob.speak();

    return (0);
}