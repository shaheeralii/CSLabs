/*
 * Author: Syed Shaheer Ali
 * Task: 03 - Gregorian Calendar Day Calculator
 * Purpose: Implements the Gregorian algorithm to determine the day of the week for any given date.
 */

#include <iostream>
using namespace std;
int main() {
    int m, d, y;

    cout << "\nEnter Month(1-12): ";
    cin >> m;
    cout << "\nEnter Date:(1-31) ";
    cin >> d;
    cout << "\nEnter Year: ";
    cin >> y;

    int y0 = y - (14 - m) / 12;
    int x = y0 + y0 / 4 - y0 / 100 + y0 / 400;
    int m0 = m + 12 * ((14 - m) / 12) - 2;
    int d0 = (d + x + (31 * m0) / 12) % 7;

    cout << "\n(0 = Sun, 1 = Mon,..., 6 = Sat)\n";
    cout << "The Day of the week is: " << d0;

    return 0;
}