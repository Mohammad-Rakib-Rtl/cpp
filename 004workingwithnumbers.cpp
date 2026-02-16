#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int wnum = 5;
    double dnum = 5.5;

    //wnum++;

    wnum += 80;
    cout << wnum << endl;

    cout << 5.5 + 9 << endl;



    cout << sqrt(64) << endl;
    cout << pow(3, 3) << endl;
    cout << round(4.6) << endl;
    cout << ceil(4.6) << endl;
    cout << floor(4.8) << endl;
    cout << fmax(10, 3) << endl;
    cout << fmin(10, 3) << endl;

    cout << "------------------" << endl;

    // int x = 10;
    // int y = x++; // x = 11, y = 10;
    // int z = ++x; // x = 11, y = 11;

    // x = x + 1;

    // x++; // postfix
    // ++x; // prefix

    // cout << x << endl;
    // cout << y << endl;
    // cout << x << endl;
    // cout << z << endl;


    //order od priorities

    // ()
    // * and / 
    // + and -


    cout << "------------------" << endl;


    // int x = 10, y = 5;

    // double z = static_cast<double>(x + 10) / (3 * y);

    // cout << z << endl;

    cout << "--------Writing output to the console----------" << endl;   

    int x = 10, y = 20;
    cout << "x = " << x << endl
         << "y = " << y;


    cout << "--------excercise----------" << endl;

    // int iSales = 95000;
    // int iStateTax = 4;
    // int iCountryTax = 2;

    // int iTotalSales = iStateTax + iCountryTax;

    // double iTaxSales =  static_cast<double>(iSales * iTotalSales) / 100;
    // cout << iTaxSales << endl;

    // double dFinalSales = iSales - iTaxSales;

    // cout << dFinalSales << endl;

    double dSales = 95000;

    const double dStateTaxRate = .04;
    double dStateTax = dSales * dStateTaxRate;
    cout << dStateTax << endl;

    const double dCountryTaxRate = .02;
    double dCountryTax = dSales * dCountryTaxRate;
    cout << dCountryTax << endl;

    double dTotalTax = dStateTax + dCountryTax;
    cout << "Total Tax: $" << dTotalTax << endl;




    return 0;
}
