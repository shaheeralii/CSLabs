/*
 * Author: Syed Shaheer Ali
 * Task: 04 - Driving Eligibility
 * Lab: 07 - Functions
 * Purpose: Determines driving eligibility based on age, vehicle type, 
 *          and license status using conditional logic.
 */

#include <iostream>
#include <string>
using namespace std;

void checkEligibility(int age, string vhcl, string lic) {
    if (vhcl == "car") {
        if (lic == "yes" && age >= 18) {
            cout << "\nYou are eligible to drive a car!";
        } else {
            cout << "\nYou are not eligible to drive a car.";
        }
    } 
    else if (vhcl == "motorcycle") {
        if (lic == "yes" && age >= 16) {
            cout << "\nYou are eligible to drive a motorcycle!";
        } else {
            cout << "\nYou are not eligible to drive a motorcycle.";
        }
    } 
    else {
        cout << "\nInvalid vehicle type entered.";
    }
}

int main() {
    int age;
    string vehicle, license;

    cout << "Driving Eligibility Checker\n" << endl;
    cout << "Enter your age: ";
    cin >> age;
    while (age < 0) {
        cout << "Wrong age entered! Re-enter: ";
        cin >> age;
    }

    cout << "Enter the type of vehicle (car/motorcycle): ";
    cin >> vehicle;
    cout << "Do you have a valid driving license? (yes/no): ";
    cin >> license;

    checkEligibility(age, vehicle, license);
    cout << endl;

    return 0;
}