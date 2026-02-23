#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int iIntegers(int a, int b){

    int c;
    if (a > b) c = a; 
    else c = b;

    // return (a > b) ? a : b;
    return c;

}



int main() {



    // if (a > b) {
    //     cout << a;
    // } else {
    //     cout << b;
    // }

    int x = iIntegers(2, -2);
    cout << x << endl;

    cout << sizeof(double);

    return 0;
}
