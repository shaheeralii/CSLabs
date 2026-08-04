/*
 * Author: Syed Shaheer Ali
 * Task: 05 - Room Area Calculator
 * Lab: 10 - Structures
 * Purpose: Demonstrates pass-by-reference and pass-by-const-reference with Room structures to compute rectangular room area.
 */

#include <iostream>
using namespace std;

struct Room {
    double length;
    double width;
};

void inputDimensions (Room &room) {
    cout << "\nLength of the room(in meters): ";
    cin >> room.length;

    cout << "\nWidth of the room(in meters): ";
    cin >> room.width;
}

double calculateArea(const Room &room) {
    return room.length * room.width;
}

void displayArea (const Room &room) {
    cout << "The area of the room is: " << calculateArea(room) << " sq meters.";
}

int main () {
    Room myArea;
    cout << "---Room Area Calculator---";

    inputDimensions(myArea);

    displayArea(myArea);

    return 0;
}