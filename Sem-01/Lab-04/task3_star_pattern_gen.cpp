/*
 * Author: Syed Shaheer Ali
 * Task: 03 - Star Pattern Generator
 * Purpose: Provides a menu-driven system to generate Hollow Square, Filled Square, and Pyramid patterns using nested loops.
 */

#include <iostream>
using namespace std;
int main () {
    int choice;
    int size;

    cout << "Welcome to Star Pattern Generator!";
    cout << "\nChoose the type of star pattern: \n";
    cout << "1. Hollow Stars\n2. Filled Stars\n3. Pyramid Stars";
    cout << "\nEnter Your choice: ";
    cin >> choice;
    cout << "Enter size of the star pattern: ";
    cin >> size;

    switch (choice) {
        case 1: 
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size; j++) {
                    if (i == 1 || i == size || j == 1 || j == size)
                        cout << "* ";
                    else
                        cout << "  ";
                }
                cout << endl;
            }
            break;

        case 2:
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 3:
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size - i; j++) {
                    cout << " ";
                }
                for (int k = 1; k <= i; k++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}