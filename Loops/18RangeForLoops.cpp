#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {


    // int numbers[] = {1, 2, 3, 4};

    // for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    //     cout << numbers[i] << endl;

    // for (int number: numbers)
    //     cout << number << endl;


    // string name = "Mohammad Ratul";
    // for (char ch: name)
    //     cout << ch << endl;

    /*
        excercise

        #Given a list of temperatures, 
        write code to calculate the average temperature.

    */

    int iTemperatures[] = {12, 11, 28, 29, 18, 19};
    int iTotalNum = 0;
    double dSizeConverter = sizeof(iTemperatures) / sizeof(int);

    for (int iTemp: iTemperatures)
        
        iTotalNum += iTemp;
        
        // cout << iTemp << endl;

    // cout << sizeof(iTemperatures) << endl;
    // cout << sizeof(long long) << endl;
    cout << iTotalNum / dSizeConverter << endl;
    


    return 0;
}