/*
 * Author: Syed Shaheer Ali
 * Task: 05 - Multiplication Visualization
 * Purpose: Uses a do-while loop to generate and display a multiplication table (1-10) for a user-provided integer.
 */

#include <iostream>
using namespace std;
int main () {
    int numInput, i = 1;

    cout << "\nEnter a number to see its multiplication table: ";
    cin >> numInput;
    cout << "\nMultiplication table for " << numInput << " :\n";
    
    do {
        cout << numInput << " * " << i << " = " << numInput * i << endl;
        i++;
    } while (i < 11);
    
    return 0;
}