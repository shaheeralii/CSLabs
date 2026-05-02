/*
 * Author: Syed Shaheer Ali
 * Task: 01 - Department Payroll System (Nested Loops)
 * Purpose: Captures data for 10 employees across multiple user-defined departments and calculates departmental totals.
 */

#include <iostream>
#include <string>
using namespace std;
int main () {
    const int EMPLOYEES = 10; // 10 employees fixed in each department.
    int deptCount; 

    cout << "How many departments are in your company? ";
    cin >> deptCount;

    for (int i = 1; i <= deptCount; i++) {
        double totalSalary = 0;
        cout << "===Enter details for Department " << i << " ===\n";
        for (int k = 1; k <= EMPLOYEES; k++) {
            string name, status;
            double salary = 0;
            
            cout << "\nEmployee " << k << ": ";
            cout << "\nEnter Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "\nEnter designation: ";
            getline(cin, status);
            cout << "\nEnter Salary: $";
            cin >> salary;

            totalSalary += salary;

            cout << "Stored: " << name << " (" << status << ") - $" << salary << endl;
        }
        cout << "\n--------------------------------\n";
        cout << "Combined Salary of Dept " << i << ": $" << totalSalary;
        cout << "\n--------------------------------\n";
    }
    
    return 0;
}