/*
 * Author: Syed Shaheer Ali
 * Task: 02 - Feature Enhancement
 * Lab: 09 - String Handling
 * Purpose: Compares the character lengths of two input status messages and displays the shorter one, or identifies if they are equal.
 */

#include <iostream>
#include <string>
using namespace std;

void compareLength(string firstMsg, string secondMsg) {
    if (firstMsg.length() > secondMsg.length()) {
        cout << "\nThe shorter message is: " << secondMsg;
    }
    else if (firstMsg.length() < secondMsg.length()) {
        cout << "\nThe shorter message is: " << firstMsg;
    }
    else {
        cout << "\nThe messages are of equal length!";
    }
}

int main () {
    string msg1, msg2;

    cout << "=== Message Length Checker ===";
    cout << "\nEnter your first message: ";
    getline(cin, msg1);

    cout << "\nEnter your second message: ";
    getline(cin, msg2);

    compareLength(msg1, msg2);

    return 0;
} 