#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <memory>
#include <vector>
#include <fstream>
#include <sstream>
#include "SmartPointer.h"


using namespace std;

int main() {

    //my way
    //auto* myptr = new SmartPointer(10);

    //correct way
    //int* ptr = new int;

    SmartPointer ptr{new int};
    



    return 0;
}
