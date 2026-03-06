#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void vSwapNum(int* first, int* second) {
    // int c = 0;
    // int* ptr = &c;

    int c = *first;
    *first = *second;
    *second = c;

    cout << *first << " " << *second;
}

int main() {


    int first = 123;
    int second = 23;

    vSwapNum(&first, &second);
     


    return 0;
}