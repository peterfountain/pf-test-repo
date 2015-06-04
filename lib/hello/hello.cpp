#include "hello.h"
#include <iostream>
#include <string>

hello::hello(std::string m)
{
    message = m;
    std::cout << message << '\n';
}
