/*
 * Author: Syed Shaheer Ali
 * Task: 01 - Character Classification
 * Purpose: Identifies if a given character is a vowel, consonant, or digit using cctype functions and logic.
 */

#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char input;

    cout << "Enter a character: ";
    cin >> input;

    if (isdigit(input)) {
        cout << "'" << input << "'" << " is a digit.";
    }
    else if (isalpha(input)) {
        if (input == 'A' || input == 'a' ||
            input == 'E' || input == 'e' ||
            input == 'I' || input == 'i' ||
            input == 'O' || input == 'o' ||
            input == 'U' || input == 'u')
            cout << "'" << input << "'" << " is a vowel.";
        else 
            cout << "'" << input << "'" << " is a consonant.";
    }
    else {
        cout << "'" << input << "'" << " is a special character.";
    }

    return 0;

}