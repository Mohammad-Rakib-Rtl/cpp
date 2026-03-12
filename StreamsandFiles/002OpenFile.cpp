#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <memory>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main() {


    ofstream file;
    file.open("data.txt");
    if (file.is_open()) {
        file << setw(20) << "Hello" << setw(20) << "World!" << endl;
        file.close();
    }



    return 0;
}