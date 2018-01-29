#include "person.hpp"

person::person () {
    name = "undefined";
    age = 0;
}

person::person(std::string newName, int newAge) {
    name = newName;
    age = newAge;
}

std::string person::toString() {
    std::stringstream ss; // use to build up info about class

    ss << "Name: ";
    ss << name;
    ss << "; Age: ";
    ss << age;

    return (ss.str());
}

person::~person() {

}