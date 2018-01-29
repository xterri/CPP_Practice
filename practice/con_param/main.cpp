// constructor parameteres and method overloading
// can have as many constructors as we want as long as each one has diff params
#include "person.hpp"

int     main() {
    // create constructor that allows user to pass param to obj 
    // when instantiating obj, can pass name and age we want it to have
    person  person1; // uses 1st constructor

    // person1 >> needs constructor that takes no params
    // person2 >> needs constructor that takes params
    // program will pick constructor depending on params the constructor uses

    person person2("Bob"); // uses 2nd constructor
    person person3("Joe", 23); // uses 3rd constructor

    std::cout << person1.toString() << std::endl;
    std::cout << person2.toString() << std::endl;
    std::cout << person3.toString() << std::endl;

    return (0);
}
