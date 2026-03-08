#include <iostream>
#include <memory>

using namespace std;

int main() {


    // int* x = new int;
    // delete x;
    // delete x;

    //there are 2 kinda smart pointers 
    //unique and shared


    //unique 

    // unique_ptr<int> x(new int); // we cant do any arithmetic operations in this
    // auto x = make_unique<int>();
    auto numbers = make_unique<int[]>(10); //simpler way
    // unique_ptr<int> y = make_unique<int>();
    auto y = make_unique<int>(); //simpler way
    
    numbers[0] = 10;
    // *x = 10;

    // cout << *x.get();   // prints memory address

    cout << numbers[0] << endl;

    //SO NO NEED TO DELETE operator dealocate memory


    // shared pointers

    cout << "--------------" << endl;
    cout << "Shared pointer" << endl;
    cout << "--------------" << endl;

    /*
        
        using shared pointers, two pointers
        allocate in same memory location.
    
    */

    // shared_ptr<int> x(new int);
    // shared_ptr<int> x = make_shared<int>();
    
    auto xx = make_shared<int>();
    *xx = 10;


    shared_ptr<int> yy(xx);
    
    if (xx == yy)
        cout << "EQUAL" << endl;

    cout << *yy << endl;

    return 0;
}