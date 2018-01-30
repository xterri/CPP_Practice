#include "person.hpp"

person::person() {
    age = 0;
    name = "";
}

person::person(std::string name, int age) {
    // 'this->' >> c++ knows we're referring to the class's var
        // 'this' = var that contains mem location of each individual obj that you create
        // 'this->' = pointer variable
    this->age = age;
    this->name = name; // just 'name' >> program assumes var name from param

    std::cout << this << std::endl;
    // ^ returns/displays memory address / location
}

std::string person::toString() {
    std::stringstream   ss;

    ss << "Name: ";
    ss << name; // 'name' variable from/in the class
    ss << "; Age: ";
    ss << age;

    return (ss.str());
}