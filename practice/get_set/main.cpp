#include "person.hpp"

// getters & setters >> methods for getting and setting values in a class
int     main(void) {
    person  person;

    std::cout << person.toString() << std::endl;
    person.setName("Bob");
    std::cout << person.getName() << std::endl;
    return (0);
}