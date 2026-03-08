#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <memory>

using namespace std;

int main() {

    // unique_ptr<int> (int*)
    string name = "Mosh";
    name[0] = 'm';
    cout << name[2] << endl;
    cout << name << endl;

    cout << name.length() << endl;

    name += " Hamedani";
    cout << name << endl;


    string another = name;
    if (name == another)
        cout << "same" << endl;

    string another2 = "John";

    if (name < another) 
        cout << "same 2" << endl;

    cout << "cname starts with " << name.starts_with('m') << endl;
    cout << "cname starts with " << name.ends_with('m') << endl;
    
    string sName = "";
    cout << sName.empty() << endl;
    cout << name.front() << endl;
    cout << name.back() << endl;

    return 0;
}