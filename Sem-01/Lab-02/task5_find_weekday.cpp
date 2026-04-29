/*
 * Author: Syed Shaheer Ali
 * Task: 05 - Weekday Finder
 * Purpose: Uses a switch-case statement to map integers 1-7 to their corresponding days of the week.
 */

#include <iostream>
using namespace std;
int main () {
    int num;

    cout << "Input a number from 1-7 to find weekday.(1 = Mon, 2 = Tue..): ";
    cin >> num;
    cout << endl;

    switch(num) {
        case 1:
            cout << "Monday!";
            break;
        case 2:
            cout << "Tuesday!";
            break;
        case 3:
            cout << "Wednesday!";
            break;
        case 4:
            cout << "Thursday!";
            break;
        case 5:
            cout << "Friday!";
            break;
        case 6:
            cout << "Saturday!";
            break;
        case 7:
            cout << "Sunday!";
            break;
        default:
            cout << "Invalid input!";
    }

    return 0;
}