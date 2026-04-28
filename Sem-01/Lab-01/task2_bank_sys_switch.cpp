/*
 * Author: Syed Shaheer Ali
 * Task: 02 - Bank Transaction System (using switch)
 * Purpose: Manages deposits and withdrawals with real-time balance updates using conditional logic.
 */

#include <iostream>
using namespace std;
int main() {
    double initial_bal = 5000.0;
    double amount;
    double new_bal;
    char choice;

    cout << "Your current account balance: " << initial_bal << endl;
    cout << "Select D for deposit, W for withdraw.\n";
    cin >> choice;

    switch (choice) {
        case 'D':
        case 'd':
        cout << "Enter amount to deposit: ";
        cin >> amount; 
        new_bal = initial_bal + amount;
        cout << "\nThe amount after deposit: " << new_bal;
        break;
    case 'W':
    case 'w':
        cout << "Enter amount to withdraw:";
        cin >> amount;
        new_bal = initial_bal - amount;
        cout << "\nThe amount after withdraw: " << new_bal;
        break;
    default:
        cout << "Invalid input!\n";
        break;
    }
    
    return 0;
}