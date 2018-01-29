#ifndef CAT_H
# define CAT_H

#include <iostream>

class cat {
private:
    bool    happy; //data member / instance variable
public:
    void    speak(); //method

    cat(); // constructor; no return type, can't return anything
    // constructor must have same name as class [name]
    // define constructor in the functions file (ex. cat.cpp)

    ~cat(); // destructor; similar as constructor but has '~' at start
};

#endif