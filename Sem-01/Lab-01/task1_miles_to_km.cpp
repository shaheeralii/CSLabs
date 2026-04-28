/*
 * Author: Syed Shaheer Ali
 * Task: 01 - Miles-to-Kilometers Converter
 * Purpose: Converts distances from miles to kilometers using constant conversion factors.
 */

#include <iostream>
using namespace std;
int main() {
    const double MILE_TO_KM = 1.60934;
    double org_dist, conv_dist;

    cout << "Welcome to the World Travel Planner!\n";
    cout << "Enter the distance you plan to travel in miles: ";
    cin >> org_dist;

    conv_dist = org_dist * MILE_TO_KM;

    cout << "\nConverted Distance:";
    cout << "\n=====================";
    cout << "\nYou plan to travel: " << org_dist << " miles";
    cout << "\nIn international metrics, that is approx: " << conv_dist << " kilometers";

    return 0;
}