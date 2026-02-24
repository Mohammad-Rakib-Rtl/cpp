#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;


void greet(int age, string title){
    cout << "Hello " << age;

}

// Signature = name + (number and type of parameters)
void greet(string title, int age = 21){
    cout << "Hello " << title << " " << age;
}


int main() {

    greet("mosh", 25);
    
    return 0;
}