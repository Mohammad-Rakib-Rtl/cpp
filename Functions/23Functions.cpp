#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;


void greet(string name) {
    // cout << "Hello " << firstName << " " << lastName << endl;
    cout << "Hello " << name << endl;
}

string fullName(string firstName, string lastName){
    // Concatenating (combining)
    return firstName + " " + lastName;
}



int main() {

    //calling / executing / invoking
    
    // greet("Md.", "Ratul");

    string name = fullName("Mosh", "Talukder");

    greet(name);
    cout << name << endl;
    cout << "Done";

    return 0;
}