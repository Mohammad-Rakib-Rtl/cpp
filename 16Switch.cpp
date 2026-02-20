#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {


    // cout << "1- Create account" << endl
    //      << "2- Change password" << endl
    //      << "3- Quit" << endl
    //      << "Selcet an option: " << endl;


    // short input;
    // cin >> input;


    // switch (input) {
    //     case 1: 
    //         cout << "You selected 1";
    //         break;
    //     case 2: 
    //         cout << "You selected 2";
    //         break;
    //     default:
    //         cout << "Goodbye!";

    // }

    // if (input == 1) 
    //     cout << "You selected 1";
    // else if (input == 2) 
    //     cout << "You selected 2";
    // else 
    //     cout << "Goodbye!";


    /*
        Excercise
    */


    int a, b;
    char c;

    cout << "Give 2 numbers (first and second): " << endl;
    cin >> a >> b;
    cout << "Operators: " << endl;
    cin >> c;

    switch (c){
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        default:
            cout << "Invalid Operator!";
    }


    return 0;
}