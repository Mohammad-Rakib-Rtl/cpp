#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

    // int number = 10;
    // cout << &number;
    
    // //The address-of operator
    // int* ptr = &number;

    // //Indirection (de-referencing) operator
    // *ptr = 20;
    // cout << number;


    //excercise for the lesson



    int x = 10;
    int y = 20;

    int* ptr = &x;
    *ptr *= 2;
    cout << "----------------" << endl;
    cout << "X section" << endl;
    cout << "----------------" << endl;
    cout << x << endl;
    cout << "&x: " <<  &x << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    cout << "----------------" << endl;
    cout << "Y section" << endl;
    cout << "----------------" << endl;
    ptr = &y;
    cout << *ptr << endl;
    cout << ptr << endl;
    cout << "before multiply for y" ;
    *ptr *= 3;
    cout << y << endl;
    cout << ptr << endl;
    cout << *ptr << endl;


    return 0;
}