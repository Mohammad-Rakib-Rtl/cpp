#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {


    string name, place, birthYear;

    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Please enter your address: ";
    getline(cin, place);
    cout << "Please enter your birth year: ";
    getline(cin, birthYear);



    cout << "Hi there Mr. " << name << endl;
    cout << "I think you are from " << place << endl;
    cout << "I can predict your birth year and that is " << birthYear << endl;



    return 0;
}