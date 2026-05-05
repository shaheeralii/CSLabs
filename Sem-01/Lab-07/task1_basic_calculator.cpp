/*
 * Author: Syed Shaheer Ali
 * Task: 01 - Basic Calculator
 * Lab: 07 - Functions
 * Purpose: Implements modular arithmetic operations using functions with return values.
 */

#include <iostream>
#include <cmath>
using namespace std;

double add(double num1, double num2) {
    return num1 + num2;
}

double sub(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    if (num2 == 0) 
        return 0; // Simple check for division by zero
    return num1 / num2;
}

double power(double base, double exp) {
    return pow(base, exp);
}

int main() {
    double n1, n2;
    char opr;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Select operation (+, -, *, /, ^): ";
    cin >> opr;

    cout << "Result: " << n1 << " " << opr << " " << n2 << " = ";

    switch(opr) {
        case '+':
            cout << add(n1, n2);
            break;   
        case '-':
            cout << sub(n1, n2);
            break;
        case '*':
            cout << multiply(n1, n2);
            break;
        case '/':
            cout << divide(n1, n2);
            break;
        case '^':
            cout << power(n1, n2);
            break;
        default:
            cout << "Invalid Operator";
    }

    return 0;
}