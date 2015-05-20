#ifndef HELLO_H
#define HELLO_H

#include <string>

class hello
{
    string message;
public:
    hello(string s) { 
        message = s;
        std::cout << message << endl;
    }
};

#endif
