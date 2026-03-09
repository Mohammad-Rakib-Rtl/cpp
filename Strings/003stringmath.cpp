#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <memory>

using namespace std;

int main() {


    string name = "Md rakib Ratul";
    // auto index = name.find(' ');
    auto index = name.rfind(' ');

    string firstName = name.substr(0, index);
    string lastName = name.substr(index + 1);

    cout << "(" << firstName << ")" << "(" << lastName << ")" << endl;



    return 0;
}