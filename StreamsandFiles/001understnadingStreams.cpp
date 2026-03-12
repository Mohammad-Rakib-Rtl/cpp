#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <memory>
#include <vector>

using namespace std;

int main() {

    //cout << "HEllo ME! !!!" << endl;

    //reading values from stream

    //Buffer:temporary storage
    //[]

    int first;
    while (true) {
        cout << "First: ";

        cin >> first;



        if(cin.fail()) {
            cout << "Enter a valid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<int>::max(), '\n');
        }
        else break;



    }



    cout << "Second: ";
    int second;
    cin >> second;



    cout << "You entered " << first << " and "
                << second;

    return 0;
}
