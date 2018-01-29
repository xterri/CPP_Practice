#ifndef CAT_H
# define CAT_H

#include <iostream>

// classes can bundle methods/functions with data
// imagine a cat
    // things it can do = functions 
    // its moods / state = variable (define state of objs)
class cat {
private: // w/e in here cannot be accessed outside of the class 
    bool    happy; // every sep. obj/cat = has this bool variable
public:
    // w/e is in 'public' is accessible to where class is init
    void    speak(); // << method
    // make method to set state of cat in class
    void    makeHappy(bool mood);
// constructor
    // method that runs when objs are created from class
    // runs separately for each obj 
    // use to set/initialize var to avoid random values
};

#endif