/*
 * Author: Syed Shaheer Ali
 * Task: 04 - Academic Excellence Awards Ceremony
 * Purpose: Calculates student score factorials using a nested loop and gathers results into a string accumulator for a formatted final display.
 */

#include <iostream>
using namespace std;
int main () {
    int students, prob_solved;
    string factDisplay;

    cout << "Welcome to Academic Excellence Awards Ceremony Calculator!\n";
    cout << "Enter the no. of students receiving awards: ";
    cin >> students;

    for (int i = 1; i <= students; i++) {
        long long fact_value = 1;

        cout << "\nStudent " << i << ": How many problems did they solve correctly? ";
        cin >> prob_solved;
        
        for (int j = prob_solved; j >= 1; j--) {
            fact_value = fact_value * j;
        }
        factDisplay += "Student " + to_string(i) + ": " + to_string(prob_solved) + "! = " + to_string(fact_value) + "\n";
    }
    cout << "\nHere are the factorial values corresponding to each student's score:\n";
    cout << factDisplay;

    return 0;
}