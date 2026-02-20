#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {


    // US CITIZEN
    //      CA Resident : tuition = 0
    //      Non Resident : tuition = 1000
    // Not a US citizen
    //      tuition = 3000


    bool isCitizen = false;
    bool caResident = false;
    short tuition = 0;
    if (isCitizen){
        //inner if statement
        if (!caResident) tuition = 1000;

    }
    else tuition = 3000;

    cout << tuition << endl;

    return 0;
}