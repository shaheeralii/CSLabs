/*
 * Author: Syed Shaheer Ali
 * Task: 03 - Age Analysis (Youngest Friend)
 * Purpose: Compares the ages of three friends to determine who is the youngest using logical AND operators.
 */

#include <iostream>
using namespace std;
int main () {
    int age1, age2, age3;

    cout << "Enter the age of person 1: ";
    cin >> age1;
    cout << "\nEnter the age of person 2: ";
    cin >> age2;
    cout << "\nEnter the age of person 3: ";
    cin >> age3;

    if (age1 <= age2 && age1 <= age3) 
        cout << "The youngest person is, person 1, with an age of " << age1 << " years.";
    else if (age2 <= age1 && age2 <= age3) 
        cout << "The youngest person is, person 2, with an age of " << age2 << " years.";
    else
        cout << "The youngest person is, person 3, with an age of " << age3 << " years.";
    
    return 0;
}