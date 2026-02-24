#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

//Global variable (global scope)
// const double taxRate = .2;
double taxRate = .2;

double calculateTax(int sales){
    return sales * taxRate;
}

int main() {
    //local variable (local scope)

    int sales = 10'000;
    taxRate = 0;
    double tax = calculateTax(sales);
    cout << tax;


    return 0;
}