#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {


    // int x = 1;
    // double y = 2.0;

    // // int z = x + (int)y; // c style casting

    // int z = x + static_cast<int>(y) ; //c++ casting => this give result before compile

    // cout << z;

    int x = 10;
    int y = 3;

    double z = (double)x / static_cast<double>(y);

    cout << z;

    return 0;
}