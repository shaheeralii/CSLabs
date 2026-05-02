/*
 * Author: Syed Shaheer Ali
 * Task: 02 - Weekly School Timetable
 * Purpose: Implements nested loops to record subjects for a 5-day school week with 6 periods per day.
 */

#include <iostream>
#include <string>
using namespace std;
int main () {
    const int days_in_week = 5;
    const int period_per_day = 6;
    string subject;

    for (int i = 1; i <= days_in_week; i++) {
        cout << "\nEnter subjects for Day " << i;
        for (int z = 1; z <= period_per_day; z++) {
            cout << "\nPeriod " << z << ": ";
            cin >> subject;
            cout << "[Saved] " << "Day " << i << ", Period " << z << ": " << subject << endl;
        }
    }
    
    return 0;
}