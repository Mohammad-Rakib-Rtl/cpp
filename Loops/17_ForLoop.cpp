#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

    //  INCREMENT
    // for (int i = 1; i <= 5; i++){
    //  decrement
    // for (int i = 5; i > 0; i--){
    //     if (i % 2 != 0)
    //         cout << i << endl;
    // }

    /*
        excercise
    */

    int iInput; 

    cout << "Enter any positive num to get factorial: " << endl;

    cin >> iInput;

    if (iInput < 0)
        cout << "Num is not positive!" << endl;
    else {
        int iFactorial = 1;
        for (int i = 1; i <= iInput; i++){
        // cout << i << endl;
        iFactorial *= i;

    }

        cout << iFactorial << endl;
    }

    


    return 0;
}