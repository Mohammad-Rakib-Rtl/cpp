#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

    int numbers[] = {10, 20, 666};
    // for (auto number: numbers)
    //     cout << number << endl;

    // for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    for (int i = 0; i < size(numbers); i++)
        cout << numbers[i] << endl;


          

    return 0;
}