#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int iLinearSearch(int iArray[], int size, int iValueFinder){

    for (int i = 0; i < size; i++)
        if (iArray[i] == iValueFinder)
            return i;
        return -1;


     // bool bLogic = false;
    // int iValue = 0;
    // for (int i = 0; i < size; i++) {
    //     if (iArray[i] == iValueFinder){
    //         bLogic = true;
    //         iValue = i;
    //         return i;
    //         break;
    //     } 
    //     // cout << iArray[i];
    // }

    // if (bLogic == true) {
    //     return iValue;
    // } else {
    //     return -1;
    // }


}


int main() {

    int iArray[] = {8, 12, 2, 19, 20, 3};
    
    int iNumFinder = iLinearSearch(iArray, size(iArray), 20);
    // cout << size(iArray);
    cout << iNumFinder << endl;
    
    // iLinearSearch(19, iArray, size(iArray));


    return 0;
}