#include <iostream>
#include <sstream> // must use this library to use string stream
//string stream allows us to concatenate 'disparate' types of date
    // eg. double + string >> change into a single string

int     main(void) {
    int         age = 32;
    std::string name = "Bob";

    // to get single string whtat includes both variables
    //std::string info = "Name: " + name + "; age: " + age + "\n"; 
        // '+' is not defined for a string and int
        // can't concatenate int with string
    
    // get around above issue with 'string stream'
    std::stringstream    ss; // declare obj of string stream
    // ^ represents a stream used to build up a stream
    // streams = streams of data; things you send / get data to/from

    // put data into the string stream
        // can pass 'ss' object around or convert to a string
    ss << "Name is: ";
    ss << name;
    ss << "; Age is: ";
    ss << age;

    std::string info = ss.str();
    // 'ss.str()' method converts everything in 'ss' into a string
    std::cout << info << std::endl;
    return (0);
}