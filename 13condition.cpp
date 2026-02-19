#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {


    // int iTemperature = 112;
    // if(iTemperature < 60)
    //     cout << "Cold";
    // else if (iTemperature < 90)
    //     cout << "Nice";
    // else 
    //     cout << "Hot";

    //excercise

    double dSales;
    double dCommision;
    double dForTenPercent = 0.1;
    double dForFifteenPercent = 0.15;
    double dForTwentyPercent = 0.2;

    cin >> dSales;

    if (dSales <= 10'000)
        cout << "Commision is 10% and you will get " << dSales * dForTenPercent << endl;

    else if (dSales <= 15000)
        cout << "Commision is 15% and you will get " << dSales * dForFifteenPercent << endl;

    else
        cout << "Commision is 20% and you will get " << dSales * dForTwentyPercent << endl;

    
    return 0;
}