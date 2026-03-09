#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <memory>

using namespace std;

// use pascal or first letter uppercase
struct Customers {
    int ID;
    string Name;
    string Email;
};


int main() {

    Customers Customer;
    cout << "Give Customer ID: ";
    cin >> Customer.ID;
    cout << "Give Customer Name: ";
    cin >> Customer.Name; 
    cout << "Give Customer Email: ";
    cin >> Customer.Email;

    cout << "Customer ID is: " <<  Customer.ID << " " << endl
          << "Name: "  << Customer.Name << endl
          << "Email: "   << Customer.Email << endl;
          
    return 0;
}