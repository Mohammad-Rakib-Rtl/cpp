#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void printOddNumbers(int limit) {
    for (int i = 0; i < limit; i++) {
        if (i % 2 != 0)
            cout << i << endl;
    }

}


int main() {

    printOddNumbers(10);
    
    return 0;
}