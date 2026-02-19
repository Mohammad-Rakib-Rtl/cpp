#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {


    //comparison operators
    int x = 10, y = 12;
    bool result = x != y;

    cout << boolalpha << result << endl;


    char first = 'a';
    char second = 'A';

    bool bResult = first == second;

    cout << bResult << endl;

    //logical operators
    int age = 20;
    int salary = 50'000;

    bool isEligible = (age > 18 && age < 65) && salary > 30'000;
    // bool orEligible = age > 18 || age < 65; // one of them always true
    cout << boolalpha << isEligible << endl;

    //order of logical operators

    //()
    // ! 
    // &&
    // ||

    bool a = true;
    bool b = false;
    bool c = false;
    // bool bResultLogicOrder = b && !a;
    bool bResultLogicOrder = a || b && c;





    return 0;
}