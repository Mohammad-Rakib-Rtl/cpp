#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {


    bool bUsCitizen = true;
    bool bBachelor = false;
    // bool bJobExperience = true;
    short sYearsOfExperience = 10;

    // bool bJobRequirements = bUsCitizen && (bBachelor || bJobExperience);
    bool bJobRequirements = bUsCitizen && (bBachelor || sYearsOfExperience >= 2);

    cout << boolalpha << bJobRequirements << endl;

    return 0;
}