#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string phrase = "Mikeyz Academy";
    string phrasesub;


    cout << phrase << "\n";
    cout << "The length of name of the company is " << phrase.length() << "\n";
    cout << phrase[3] << "\n";

    phrase[4] = 'x';

    cout << phrase << endl;
    cout << phrase.find("xz", 0) << endl;


    //cout << phrase.substr(5, 5) << endl;


    phrasesub = phrase.substr(5, 5);
    cout << phrasesub << endl;

    cout << "Hello!" << endl;

    cout << pow(3, 3) << endl;


    return 0;
}

