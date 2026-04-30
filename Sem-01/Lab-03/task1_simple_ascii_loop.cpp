/*
 * Author: Syed Shaheer Ali
 * Task: 01 - Numeric-to-Alphabet Converter
 * Purpose: Uses for loops and type-casting to display the ASCII values and characters for A-Z and a-z.
 */

#include <iostream>
using namespace std;
int main () {
    cout << "--- Uppercase Alphabets ---\n";
    for (int i = 65; i <= 90; i++) {
        cout << "ASCII Value: " << i << ", Character: " << char(i) << endl;
    }

    cout << "--- Lowercase Alphabets ---\n";
    for (int i = 97; i <= 122; i++) {
        cout << "ASCII Value: " << i << ", Character: " << char(i) << endl;
    }

    return 0;
}