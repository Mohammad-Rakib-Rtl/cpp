#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {


    // (x, y)
    // (1, 1)
    // (1, 2)
    // (1, 3)
    // (1, 4)
    // (1, 5)
    // (2, 1)
    // (2, 2)
    // (2, 3)


    // for (int x = 1; x <= 5; x++) {
    //     for (int y = 1; y <= 5; y++)
    //         cout << "(" << x << ", " << y << ")" << endl;
    // }

    int iUserInput;
    cout << "Your desire row for pyramid: ";
    cin >> iUserInput;

    for (int x = 1; x <= iUserInput; x++){
        
        for (int y = 0; y < x; y++)
            cout << "*";
        
        cout << endl;  
    }


    return 0;
}