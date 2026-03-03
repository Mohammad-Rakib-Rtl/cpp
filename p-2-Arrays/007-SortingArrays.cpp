#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;


void swap(int iMyArray[], int i, int j){
    int temp = iMyArray[i];
    iMyArray[i] = iMyArray[j];
    iMyArray[j] = temp;

}



void iSortArrayAlgo(int iMyArray[], int size) {

    // int iStore = 0;
    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size - 1; j++)
            if (iMyArray[j] > iMyArray[j+1]) 
                // iStore = iMyArray[i];
                // iMyArray[i] = iMyArray[i+1];
                // iMyArray[i+1] = iStore;
                swap(iMyArray, j, j + 1);
        
    }
    
}


int main() {


    int iMyArray[] = {-1, 2, 4, 6, 2, -10};
    
    iSortArrayAlgo(iMyArray, size(iMyArray));

    for (int nums: iMyArray) 
        cout << nums << endl;

    return 0;
}