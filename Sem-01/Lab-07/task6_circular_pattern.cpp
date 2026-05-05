/*
 * Author: Syed Shaheer Ali
 * Task: 06 - Circular Pattern
 * Lab: 07 - Functions
 * Purpose: Generates coordinates along a circle's circumference using 
 *          sine and cosine functions.
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.14159265358979323846;

void patternGenerator(double radius, int numPoints) {
    cout << "\nCoordinates of points along the circumference of the circle:" << endl;
    for (int i = 1; i <= numPoints; i++) {
        double angle = 2 * PI * (i - 1) / numPoints;
        double x = radius * cos(angle);
        double y = radius * sin(angle);

        cout << "Point " << i << ": (" << x << ", " << y << ")" << endl;
    }
}

int main() {
    double rad;
    int numPoints;

    cout << "Enter the radius of the circle: ";
    cin >> rad;
    cout << "Enter number of points of the circle: ";
    cin >> numPoints;

    patternGenerator(rad, numPoints);

    return 0;
}