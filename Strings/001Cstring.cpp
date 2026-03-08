#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <memory>

/*

// all the fuction is defined by this 
    to work with cstring. its though 
    included with iostream by default.
*/
#include <cstring> 

using namespace std;

int main() {

    // null terminator
    
    // char name[5] = {'M', 'O', 'S', 'H', '\0'};
    
    // string literal (simpler way to declare)
    char name[50] = "kamedani"; // string literal
    
    // name[0] = 'm'; // character literal 'm'
    // cout << name[0] << endl;
    // cout << strlen(name) << endl;

    char lastName[] = "hamedani";

    // //concatenating (combining)
    // strcat(name, lastName);
    // cout << name << endl;

    // //copying strings
    // strcpy(name, lastName);
    // // strcpy(lastName, name);
    // cout << name << endl;

    //strcmp  --> for comparing strings
    if (strcmp(name, lastName) == 1)
        cout << "Equal" << endl;



    return 0;
}