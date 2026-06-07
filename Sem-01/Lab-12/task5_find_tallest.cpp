/*
 * Author: Syed Shaheer Ali
 * Task: 05 - Finding the Tallest Person in a Group
 * Lab: 12 - Pointers
 * Purpose: Tracks and identifies the maximum height and its respective array index using pointer traversal.
 */

#include <iostream>
using namespace std;
void checkHeight(int* array, int size) {
    cout << "\n---Details for checking height---";
    int* tallestPtr = &array[0];

    for (int i = 0; i < size; i++) {
        cout << "Person " << i + 1 << " Height(cm): ";
        cin >> array[i];

        if (array[i] > *tallestPtr) {
            tallestPtr = &array[i];
        }
    }

    //subtracting starting address of array from tallestPtr gives exact index
    int index = tallestPtr - array;

    cout << "\nThe tallest person is at index " << index
         << " with a height of " << *tallestPtr << " cm.\n";
}

int main () {
    int count;
    cout << "Enter the no. of people attending the event: ";
    cin >> count;
    int array[count];

    checkHeight(array, count);

    return 0;
}