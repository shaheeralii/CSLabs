/*
 * Author: Syed Shaheer Ali
 * Task: 06 - Employee Payroll Calculation
 * Purpose: Calculates weekly pay for multiple employees and uses string concatenation to display a final summary report without arrays.
 */

#include <iostream>
using namespace std;
int main () {
    int employees;
    double hr_wage, hr_per_week;
    string payoutDisplay;

    cout << "Welcome to the Employee Payroll Calculator!";
    cout << "\nEnter the number of employees: ";
    cin >> employees;

    for (int i = 0; i < employees; i++) {
        double week_pay = 0;

        cout << "\nEmployee " << i+1 << ": \n";
        cout << "Enter hourly wage: $";
        cin >> hr_wage;
        cout << "Enter hours worked: ";
        cin >> hr_per_week;

        week_pay = hr_wage * hr_per_week;

        payoutDisplay += "Employee " + to_string(i + 1) + ": $" + to_string((int)week_pay) + "\n";
    }

    cout << "\nWeekly Payroll:\n";
    cout << payoutDisplay;
    
    return 0;
}