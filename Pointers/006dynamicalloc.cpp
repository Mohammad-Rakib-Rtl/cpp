// dynamic memory allocator
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

    // Stack
    // int numbers[1000]

    // Heap (Free store)
    int* numbers = new int[10];
    int* number = new int;
    // delete number;
    // delete[] numbers;
    // number = nullptr; //reset this number 
    // numbers = nullptr; // reset this numbers
    
    cout << number << endl;


    return 0;
}