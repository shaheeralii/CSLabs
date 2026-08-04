/*
 * Author: Syed Shaheer Ali
 * Task: 03 - Geometric Points and Lines Distance Calculator
 * Lab: 10 - Structures
 * Purpose: Computes Euclidean distance between two endpoints stored using nested Point and Line structures.
 */

#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

// Line structure: stores start and end point structures
struct Line {
    Point start;
    Point end;
};

double calcDist(const Line& l) {
    double dx = l.end.x - l.start.x;
    double dy = l.end.y - l.start.y;

    return sqrt(dx * dx + dy * dy);
}

Line getLineInput() {
    Line l;
    cout << "Enter coordinates for the line segment:\n";

    cout << "Starting Point (x y): ";
    cin >> l.start.x >> l.start.y;

    cout << "Ending Point (x y): ";
    cin >> l.end.x >> l.end.y;

    return l;
}

int main() {
    Line myLine = getLineInput();

    double distance = calcDist(myLine);

    cout << "\nDistance between points: " << distance << "\n";

    return 0;
}