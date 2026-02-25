#include "greet.hpp"
#include <iostream>

namespace messaging {

void greet(std::string name) {
    std::cout << "Hello " << name << std::endl;
}

}