
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old" << endl;

    cin.ignore();

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name << endl;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name << endl;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name << endl;

    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old";

    return 0;
}
