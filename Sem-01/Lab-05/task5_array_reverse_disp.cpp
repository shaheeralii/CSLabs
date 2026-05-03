/*
 * Author: Syed Shaheer Ali
 * Task: 05 - Survey Analysis
 * Purpose: Collects 10 ratings, stores them in an array, transfers them to a 
 *          second array in reverse order, and displays the result.
 */

#include <iostream>
using namespace std;
int main () {
    int ratings[10];
    int reversed[10];

    cout << "Enter 10 integer rating (1-10): ";
    for (int i = 0; i < 10; i++) {
        int input = 0;
        cout << "\nRating " << i + 1 << ": ";
        cin >> input;
        while (input < 1 || input > 10) {
            cout << "Wrong input! Re-enter.\n";
            cin >> input;
        }
        ratings[i] = input;
    }
    for (int i = 0; i < 10; i++) {
        reversed[i] = ratings[9 - i];
    }
    cout << "\nRatings in reverse order:\n";
    for (int i = 0; i < 10; i++) {
        cout << reversed[i] << " ";
    }

    return 0;
}