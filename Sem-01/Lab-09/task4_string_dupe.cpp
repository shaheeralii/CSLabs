/*
 * Author: Syed Shaheer Ali
 * Task: 04 - Text Processing Application
 * Lab: 09 - String Handling
 * Purpose: Reads a string input from the user and duplicates its content completely into another empty string.
 */

#include <iostream>
#include <string>
using namespace std;

void copyString(string orgMsg) {
    string newString = orgMsg.substr(0, orgMsg.length());
    cout << "\nCopied String: " << newString;
}

int main () {
    string userMsg;
    cout << "Enter a String to make its copy: ";

    getline(cin, userMsg);
    copyString(userMsg);

    return 0;
}