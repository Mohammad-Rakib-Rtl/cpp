#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {


    // int numbers[] = {10, 20, 30};

    // cout << numeric_limits<long long>::min() << endl;
    // cout << numeric_limits<long long>::max() << endl;
    // cout << numeric_limits<size_t>::min() << endl;
    // cout << numeric_limits<size_t>::max() << endl;



    // unpacking array


    int values[3] = {10, 20, 30};

    
    // c++: structured binding
    // javascript: destructuring
    // python: unpacking

    auto [x, y, z] = values;

    // int x = values [0];
    // int y = values [1];
    // int z = values [2];

    cout << x << ", " << y << ", " << z;




    return 0;
}