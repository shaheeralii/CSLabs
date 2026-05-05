/*
 * Author: Syed Shaheer Ali
 * Task: 02 - ATM System
 * Lab: 07 - Functions
 * Purpose: Demonstrates pass-by-reference to modify main variables through 
 *          modular functions for banking transactions.
 */

#include <iostream>
#include <iomanip>
using namespace std;

void fundsDeposit(double &total) {
    double amount;
    cout << "\nHow many funds you want to deposit? ";
    cin >> amount;
    while (amount < 1) {
        cout << "Invalid amount! Re-enter: ";
        cin >> amount;
    }
    total += amount;
    cout << "$" << amount << " is deposited into your account!\n";
}

void fundsWithdraw(double &total) {
    double amount;
    cout << "\nHow many funds you want to withdraw? ";
    cin >> amount;
    while (amount > total || amount < 1) {
        if (amount < 1) 
            cout << "Invalid amount! ";
        else 
            cout << "Insufficient balance! ";
        cout << "Re-enter amount: ";
        cin >> amount;
    }
    total -= amount;
    cout << "$" << amount << " is withdrawn from your account!\n";
}

void checkBalance(double total) {
    cout << fixed << setprecision(2);
    cout << "\nYour balance is: $" << total << endl;
}

int main() {
    double total_balance = 1000.00;
    int option;

    do {
        cout << "\n=== Welcome to the ATM System ===\n";
        cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
        cout << "Choose an option: ";
        cin >> option;

        if (option == 1) {
            checkBalance(total_balance);
        }
        else if (option == 2) {
            fundsDeposit(total_balance);
        }
        else if (option == 3) {
            fundsWithdraw(total_balance);
        }
        else if (option == 4) {
            cout << "Exiting the program. Thank you!\n";
        }
        else {
            cout << "Invalid option! Please try again.\n";
        }
    } while (option != 4);

    return 0;
}