/*
Patterns name : 
Pattern :

*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int number = 0;

    cout << "Enter a Number: ";
    cin >> number;

    // the logic

    for (int x = 1; x <= number; x++) {
        for (int y = 1; y <= number; y++) {
            cout << "*";
        }
        cout << endl;
    
    return 0;
}