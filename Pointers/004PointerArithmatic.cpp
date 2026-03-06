#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {


    int numbers[] = {12, 211, 41};

    int* ptr = numbers;

    ptr++;
    ptr--;
    
    cout << *ptr << endl; // show memory address
    cout << *(ptr + 1) << endl;
    cout << ptr[1]  << endl; //best approach
    cout << numbers[1] << endl;




    return 0;
}