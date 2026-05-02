/*
 * Author: Syed Shaheer Ali
 * Task: 04 - Floyd's Triangle Generator
 * Purpose: Generates a right-angled triangular array of natural numbers using nested for-loops.
 */

#include <iostream>
using namespace std;
int main () {
    int rows, num = 1;

    cout << "Welcome to Floyd's Triangle Generator!";
    cout << "\nEnter the number of rows for Floyd's Triangle: ";
    cin >> rows;
    cout << "\nFloyd's Triangle:\n";
    
    for (int i = 1; i <= rows; i++) {
        for (int a = 1; a <= i; a++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    
    return 0;
}