#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;


double calculateTax(double income, double taxRate = .2) {
    return income * taxRate;

}


int main() {

    double tax = calculateTax(10'000);
    cout << tax;

    return 0;
}