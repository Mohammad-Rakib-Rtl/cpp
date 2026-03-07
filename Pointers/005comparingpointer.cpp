#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {


    int x = 10;
    int y = 20;

    int* ptrX = &x;
    int* ptrY = &x;
    
    // if(ptrX == ptrY) 
    //     cout << "Same";
    
    if(ptrX != nullptr) 
        cout << *ptrX << endl;

    cout << nullptr << endl;

    int* p = nullptr;
    cout << *p; 

    // int numbers[] = {10, 20, 30};
    // int* ptr = &numbers[size(numbers) - 1];
   
    // int* ptrX = &numbers[0];

    // // cout << *ptr << endl;

    // while (ptr > ptrX) {
    //     cout << *ptr << endl;
    //     ptr--;
        
    // }


    // while (ptr >= &numbers[0]) // or
    // while (ptr >= numbers) {
    //     cout << *ptr << endl;
    //     ptr--;

    // }


    return 0;
}