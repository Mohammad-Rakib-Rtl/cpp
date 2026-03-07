#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

    int capacity = 5;

    int* numbers = new int[capacity];
    int entries = 0;

    while (true) {
        cout << "Number: ";
        cin >> numbers[entries];
        if(cin.fail()) break;
        entries++;
        if (entries == capacity) {
            capacity *= 2;
            // create a temp array (twice the size)
            int* temp = new int[capacity];
            // copy all the elements 
            for (int i = 0; i < entries; i++)
                temp[i] = numbers[i];

            delete[] numbers;

            // have "mumbers" pointer point to the new array
            numbers = temp;
            
           
        }

    }

    for (int i = 0; i < entries; i++) 
        cout << numbers[i] << endl;


    delete[] numbers;


    return 0;
}