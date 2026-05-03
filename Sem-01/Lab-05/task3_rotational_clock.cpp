/*
 * Author: Syed Shaheer Ali
 * Task: 03 - Rotational Clock
 * Purpose: Implements an in-place array rotation algorithm to shift elements 
 *          left or right based on user input, simulating a digital clock adjustment.
 */
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    char direction;
    int positions;

    cout << "Original array: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "\nRotate left (l) or right (r): ";
    cin >> direction;

    while (direction != 'l' && direction != 'L' && direction != 'r' && direction != 'R') {
        cout << "Invalid choice! Please enter 'l' for left or 'r' for right: ";
        cin >> direction;
    }

    cout << "Enter positions to rotate: ";
    cin >> positions;

    positions = positions % 5;

    for (int p = 0; p < positions; p++) {
        if (direction == 'l' || direction == 'L') {
            int first = arr[0];
            for (int i = 0; i < 4; i++) {
                arr[i] = arr[i + 1];
            }
            arr[4] = first;
        } 
        else {
            int last = arr[4];
            for (int i = 4; i > 0; i--) {
                arr[i] = arr[i - 1];
            }
            arr[0] = last;
        }
    }

    cout << "\nUpdated array after rotation:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}