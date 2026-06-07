/*
 * Author: Syed Shaheer Ali
 * Task: 05 - String Manipulator
 * Lab: 09 - String Handling
 * Purpose: Modifies a name string into a structured username by converting characters to uppercase, substituting spaces with underscores, and reversing the entire string.
 */

#include <iostream>
#include <string>
#include <cctype> // Required for toupper()
using namespace std;

string modifyString(string orgString) {
    for (int i = 0; i < orgString.length(); i++) {
        orgString[i] = toupper(orgString[i]);
        if (orgString[i] == ' ') {
            orgString[i] = '_';
        }
    }

    string reversedString = "";
    for (int i = orgString.length() - 1; i >= 0; i--) { //starting at length() - 1 to target last character
        reversedString += orgString[i];
    }
    return reversedString;
}

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    string username = modifyString(name);
    cout << "Modified Username: " << username << endl;

    return 0;
}