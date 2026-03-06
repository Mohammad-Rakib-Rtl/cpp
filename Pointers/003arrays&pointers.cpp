#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;


// void printNumbers(int numbers[], int size) {
void printNumbers(int numbers[]) {
    numbers[0] = 0;
        
}



int main() {
    int numbers[] = { 10, 20, 30 };
    // int* ptr = numbers;
    // cout << ptr[1]; // relation between arrays and pointers

    printNumbers(numbers);
    cout << numbers[0];

    return 0;
}