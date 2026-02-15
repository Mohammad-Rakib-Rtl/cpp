#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {


    int luckyNums[20] = {4, 12, 52, 25, 2};

    luckyNums[0] = 2;
    luckyNums[5] = 31;

    cout << luckyNums[0] << endl;
    cout << luckyNums[5] << endl;
    cout << luckyNums[6] << endl;


    return 0;
}