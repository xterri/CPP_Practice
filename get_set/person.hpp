#ifndef PERSON_H
# define PERSON_H

#include <iostream>

class   person{
private:
    std::string name; 
    // setter not good b/c allows users access and edit variables
public:
    person();
    std::string toString();
    void        setName(std::string newName); //set method
    std::string getName(); // get method
    ~person();
};

#endif