#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void printNumbers(int numbers[], int size){
// void printNumbers(int numbers[]){
    for (int i = 0; i < size; i++)
        cout << numbers[i] << endl;
}


int main() {

    int numbers[] = {10, 20, 30, 500, 200};
    // printNumbers(numbers, size(numbers));
    printNumbers(numbers, size(numbers));


    return 0;
}