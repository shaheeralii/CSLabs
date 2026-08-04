/*
 * Author: Syed Shaheer Ali
 * Task: 01 - Company Hierarchy Overview
 * Lab: 10 - Structures
 * Purpose: Manages department structure, including manager assignments and nested employee lists.
 */

#include <iostream>
#include <string>
using namespace std;

// Structure for an individual employee
struct Employee {
    string name;
    int id;
    string title;
};

// Structure for a Department containing a Manager and multiple employees
struct Department {
    string name;
    Employee manager;
    bool hasManager = false;
    Employee employees[20];
    int empCount = 0;
};

void addDept(Department company[], int &count, int maxSize) {
    if (count >= maxSize) {
        cout << "\nError: Maximum department limit reached!\n";
        return;
    }

    Department &currentDept = company[count];

    cout << "\nEnter the name for this department: ";
    cin.ignore();
    getline(cin, currentDept.name);

    cout << "Is there a Manager for this department? (y/n): ";
    char choice;
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        currentDept.hasManager = true;
        cout << "Manager Name: ";
        cin.ignore();
        getline(cin, currentDept.manager.name);
        cout << "Manager ID: ";
        cin >> currentDept.manager.id;
        cout << "Manager Title/Role: ";
        cin.ignore();
        getline(cin, currentDept.manager.title);
    } else {
        currentDept.hasManager = false;
    }

    cout << "\nNo. of Employees in this Dept: ";
    cin >> currentDept.empCount;

    for (int j = 0; j < currentDept.empCount; j++) {
        cout << "\n--- Employee " << j + 1 << " ---";
        cout << "\nName: ";
        cin.ignore();
        getline(cin, currentDept.employees[j].name);

        cout << "ID: ";
        cin >> currentDept.employees[j].id;

        cout << "Role/Status: ";
        cin.ignore();
        getline(cin, currentDept.employees[j].title);
    }

    count++;
    cout << "\nDepartment Added Successfully!\n";
}

void viewDept(const Department company[], int count) {
    if (count == 0) {
        cout << "\nNo departments added yet.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        cout << "\nDepartment: " << company[i].name << "\n";

        if (company[i].hasManager) {
            cout << "Manager: " << company[i].manager.name
                 << " (" << company[i].manager.id << ") - "
                 << company[i].manager.title << "\n";
        } else {
            cout << "Manager: None\n";
        }

        cout << "Employees:\n";
        for (int j = 0; j < company[i].empCount; j++) {
            cout << " - " << company[i].employees[j].name
                 << " (" << company[i].employees[j].id << ") - "
                 << company[i].employees[j].title << "\n";
        }
    }
}

int main() {
    int choice;
    const int maxSize = 10;
    Department company[maxSize];
    int deptCount = 0;

    do {
        cout << "\n=== Company Hierarchy Overview ===";
        cout << "\n1. Add a Department";
        cout << "\n2. View all Departments";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            addDept(company, deptCount, maxSize);
        } 
        else if (choice == 2) {
            viewDept(company, deptCount);
        } 
        else if (choice == 3) {
            cout << "\nExiting the program...\n";
        } 
        else {
            cout << "\nInvalid Option.\n";
        }
    } while (choice != 3);

    return 0;
}