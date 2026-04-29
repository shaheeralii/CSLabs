/*
 * Author: Syed Shaheer Ali
 * Task: 06 - Medical Diagnosis System
 * Purpose: Categorizes body temperature into Hypothermia, Normal, or Fever states using an if-else ladder.
 */

#include <iostream>
using namespace std;
int main () {
    double body_temp;

    cout << "Enter the body temperature in Celsius: ";
    cin >> body_temp;

    if (body_temp > 38.5) 
        cout << "\nHigh fever! Your body temperature is significantly elevated.";
    else if (body_temp >= 37.6)
        cout << "\nLow grade fever.";
    else if (body_temp >= 36.5)
        cout << "\nNormal body temperature.";
    else 
        cout << "\nHypothermia!.";
    
    return 0;
}