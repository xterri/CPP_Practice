#ifndef PERSON_H
# define PERSON_H

#include <iostream>
#include <sstream>

class   person{
private:
    std::string name;
    int         age;
public:
    person();

    // can implement constructors and methods inside class
        // inline implementation >> define method here 
    // best to use this way for small amounts of code
    person(std::string newName) {
        name = newName;
    };

    person(std::string newName, int newAge);

    std::string toString();
    ~person();
};

#endif