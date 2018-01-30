#ifndef PERSON_H
# define PERSON_H

#include <iostream>
#include <sstream>

class   person {
private:
    std::string name;
    int         age;
public:
    person();
    person(std::string name, int age);
    std::string toString();
};

#endif