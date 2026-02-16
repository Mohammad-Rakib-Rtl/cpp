#include <iostream>
#include <cmath>
#include <string>

using namespace std;


void sayHi(string name, int age);


int main() {

    // cout << "Top";
    
    sayHi("Mikey!", 28);
    sayHi("Takemichi Ratul!", 26);
    sayHi("Izana!", 30);

    // cout << "bottom";

    return 0;
}



void sayHi(string name, int age){

    cout << "Hello :D " << name << " Your age " << age << "?" << endl;

}