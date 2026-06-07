/*
 * Author: Syed Shaheer Ali
 * Task: 03 - Customer Service
 * Lab: 09 - String Handling
 * Purpose: Takes separate multi-part text responses from an agent and concatenates them into a single coherent message.
 */

#include <iostream>
#include <string>
using namespace std;

void combineString(string p1, string p2, string p3, string p4) {
    string finalMsg = p1 + " " +  p2 + " " + p3 + " " + p4;
    cout << finalMsg;
}

int main () {
    string f1, f2, f3, f4;

    cout << "Enter first part of the response: ";
    getline(cin, f1);
    cout << "\nEnter second part of the response: ";
    getline(cin, f2);
    cout << "\nEnter third part of the response: ";
    getline(cin, f3);
    cout << "\nEnter fourth part of the response: ";
    getline(cin, f4);

    combineString(f1, f2, f3, f4);

    return 0;
}