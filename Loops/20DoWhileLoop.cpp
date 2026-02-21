#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

    int number;

    do {
        //for doing the job for atleast once
        cout << "Number: ";
        cin >> number;

    } while (number < 1 || number > 5);

    return 0;
}