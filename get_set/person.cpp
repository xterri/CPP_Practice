#include "person.hpp"

person::person() {
    std::cout << "person activated\n" << std::endl;
    name = "George";
}

std::string    person::toString() {
    return ("Person's name is: " + name);
}

void    person::setName(std::string newName) {
    name = newName;
}

std::string person::getName() {
    return (name);
}
person::~person() {
    std::cout << "\nperson deactivated" << std::endl;
}