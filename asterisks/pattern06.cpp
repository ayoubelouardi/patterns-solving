/*
Patterns name : Pyramid 
Pattern : 
>Enter a number : 5
>
  *
 ***
*****
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int number = 0;

    cout << "Enter a Number: ";
    cin >> number;

    int half = number / 2; 
    int z = 0;

    // the logic

    for (int x = 0; x < number; x++) {
        if (x <= half) {
            // printing the first spaces
            for (int y = half - x; y >= 1; y--) {
                cout << " ";
            }
            // print the first half of the pyramid 
            for (int z = 1; z <= x + 1 ; z++) {
                cout << "*";
            }
            // print the second half of the pyramid
            for (int zz = 1; zz <= x ; zz++) {
                cout << "*";
            }
            cout << endl;
        }
        else 
            break;
    }
    return 0;
}
