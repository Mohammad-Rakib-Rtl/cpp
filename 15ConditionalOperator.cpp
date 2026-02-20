#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

    // int sales = 11000;
    // double commision = (sales > 10000) ? .1 : 0.5;

    // // if (sales > 10000)
    // //     commision = .1;
    // // else
    // //     commision = .5;

    // cout << commision << endl;


    /*
        Excercise
    */

    int a, b, c;
    cout << "Enter 2 values: " << endl;
    cin >> a >> b;

    c = (a > b) ? a : b;
    // if (a > b) c = a;
    // else c = b;

    cout << "Larger value: " << c << endl;


    return 0;
}
