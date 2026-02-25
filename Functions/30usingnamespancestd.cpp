#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

#include "utils/greet.hpp"

using namespace std;
// using std::cout, std::cin;
// using std::cin;
using messaging::greet;



int main() {

    messaging::greet("Mosh"); // without declaration namespace
    greet("RATUL"); 


    return 0;
}

