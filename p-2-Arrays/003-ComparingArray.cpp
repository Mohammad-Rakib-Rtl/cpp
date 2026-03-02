#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

    int first[] = {40, 50, 60};
    int second[] = {40, 50, 60};

    bool areEqual = true;
    for (int i = 0; i < size(first); i++)
        if (first[i] != second[i]) {
            areEqual = false;
            break;
        }

    cout << boolalpha << areEqual << endl;
        
    return 0;
}