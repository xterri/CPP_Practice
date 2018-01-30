#include "person.hpp"

int     main() {
    person  person1;
    person  person2("Amy", 28);
    person  person3("Joe", 23);

    std::cout << person1.toString() << "; mem location: " << &person1 << std::endl;
    // to get person1.toString() memory location use '&person1'
        // '&' >> 'at the adress of"

    std::cout << person2.toString() << "; mem location: " << &person2 << std::endl;
    std::cout << person3.toString() << "; mem location: " << &person3 << std::endl;

    return (0);
}