/*
 * Author: Syed Shaheer Ali
 * Task: 07 - Student Grade Evaluation
 * Purpose: Categorizes numerical marks into letter grades (A, B, C, D, F) using an if-else ladder with range validation.
 */

#include <iostream>
using namespace std;
int main () {
    int marks;
    
    cout << "Enter marks of your subject to be evaluated as a grade: ";
    cin >> marks;
    cout << endl;

    
    if (marks > 100 || marks < 0)
        cout << "Invalid input! Marks must be between 0 and 100.";
    else if (marks >= 90) 
        cout << "Grade 'A'";
    else if (marks >= 80)
        cout << "Grade 'B'";
    else if (marks >= 70)
        cout << "Grade 'C'";
    else if (marks >= 60)
        cout << "Grade 'D'";
    else
        cout << "Grade 'F'";

    return 0;
    
}