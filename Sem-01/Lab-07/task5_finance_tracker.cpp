/*
 * Author: Syed Shaheer Ali
 * Task: 05 - Personal Finance Tracker
 * Lab: 07 - Functions
 * Purpose: Tracks income and expenses using modular functions and 
 *          pass-by-reference to maintain a running budget.
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void recordTransaction(double amount, double &inc, double &exp) {
    if (amount > 0) {
        inc += amount;
        cout << "Income Recorded Successfully!\n";
    }
    else {
        exp += (-amount);
        cout << "Expense Recorded Successfully!\n";
    }
}

void viewBudget (double inc, double exp) {
    double budget = inc - exp;
    cout << fixed << setprecision(2);
    cout << "\nTotal Income: $" << inc;
    cout << "\nTotal Expenses: $" << exp;
    cout << "\nCurrent Budget: $" << budget;
}

int main () {
    int choice;
    double amount, totalIncome = 0, totalExpenses = 0;
    string category;

    do {
        cout << "\nPersonal Finance Tracker Menu:\n";
        cout << "1. Record Transaction\n2. View Expenses\n3. View Income\n4. View Budget\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\nEnter transaction category: ";
            cin >> category;
            cout << "\nEnter transaction amount: $";
            cin >> amount;
            recordTransaction(amount, totalIncome, totalExpenses);
        }
        else if (choice == 2) {
            cout << "Total Expenses: $" << totalExpenses;
        }
        else if (choice == 3) {
            cout << "Total Income: $" << totalIncome;
        }
        else if (choice == 4) {
            viewBudget(totalIncome, totalExpenses);
        }
        else if (choice == 5) {
            cout << "\nExiting the program.";
        }
        else {
            cout << "\nInvalid input!";
        }
    } while (choice != 5);

    return 0;
}