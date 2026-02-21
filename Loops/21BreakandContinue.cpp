#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

    // break
    // continue
    // for (int i = 1; i <= 5; i++){
    //     // if(i % 3 != 0)
    //     if(i % 3 == 0)
    //         // continue;
    //         break;
    //     cout << i << endl;
    // }
    
    while (true) {
        cout << "Number: ";
        int number;
        cin >> number;
        if (number >= 1 && number <= 5)
            break;
        cout << "Error ! Enter a number between 1 and 5." << endl;
    }

    return 0;
}