/*
 * Author: Syed Shaheer Ali
 * Task: 03 - Number Analysis
 * Lab: 07 - Functions
 * Purpose: Analyzes three-digit numbers to extract specific digits, calculate sums, 
 *          and determine palindrome status using string indexing.
 */

#include <iostream>
#include <string>
using namespace std;

void leastDigit(int num) {
    string s = to_string(num);
    cout << "Least Significant Digit: " << s[2] << endl;
}

void mostDigit(int num) {
    string s = to_string(num);
    cout << "Most Significant Digit: " << s[0] << endl;
}

void sum(int num) {
    string s = to_string(num);
    int d1 = s[0] - '0';
    int d2 = s[1] - '0';
    int d3 = s[2] - '0';
    cout << "Sum of Digits: " << (d1 + d2 + d3) << endl; 
}

void checkPalindrome(int num){
    string s = to_string(num);
    if (s[0] == s[1]) {
        cout << num << " is a palidrome.";
    }
    else {
        cout << num << " is not a palidrome.";
    }
}

int main () {
    int number;

    cout << "Enter a three-digit number: ";
    cin >> number;

    while (number < 100 || number > 999) {
        cout << "\nInvalid number! Re-enter a three-digit number: ";
        cin >> number;
    }

    leastDigit(number);
    mostDigit(number);
    sum(number);
    checkPalindrome(number);

    return 0;
}