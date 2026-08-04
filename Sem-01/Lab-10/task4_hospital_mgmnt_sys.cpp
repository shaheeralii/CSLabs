/*
 * Author: Syed Shaheer Ali
 * Task: 04 - Hospital Management System
 * Lab: 10 - Structures
 * Purpose: Implements CRUD operations (Add, Update, Search, Delete, Display) for patient records using structures.
 */

#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Patient {
    int id;
    string name;
    int age;
    string medicalHistory;
};

// Helper function to clear input buffer
void clearBuffer() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void addPatient(Patient arr[], int &count, int maxSize) {
    if (count >= maxSize) {
        cout << "\nDatabase Limit Reached! Cannot store more records.\n";
        return;
    }

    cout << "\n--- Details for New Patient ---\n";
    cout << "Name: ";
    clearBuffer(); //function call to clear buffer 
    getline(cin, arr[count].name);

    cout << "Age: ";
    cin >> arr[count].age;

    cout << "Medical History: ";
    clearBuffer();
    getline(cin, arr[count].medicalHistory);

    arr[count].id = count + 1;

    count++;
    cout << "\nPatient Added Successfully! (Assigned ID: " << arr[count - 1].id << ")\n";
}

void updatePatient(Patient arr[], int count) {
    if (count == 0) {
        cout << "\nDatabase is empty.\n";
        return;
    }

    int searchID;
    bool found = false;

    cout << "\nEnter Patient ID to update info: ";
    cin >> searchID;

    for (int i = 0; i < count; i++) {
        if (arr[i].id == searchID) {
            found = true;
            cout << "\nCurrent info for Patient ID " << searchID << ":\n";
            cout << "ID: " << arr[i].id << " | Name: " << arr[i].name
                 << " | Age: " << arr[i].age << " | History: " << arr[i].medicalHistory << "\n";

            cout << "\n--- Update Details ---";
            cout << "\nNew Name: ";
            clearBuffer();
            getline(cin, arr[i].name);

            cout << "New Age: ";
            cin >> arr[i].age;

            cout << "New Medical History: ";
            clearBuffer();
            getline(cin, arr[i].medicalHistory);

            cout << "\nData updated successfully!\n";
            break;
        }
    }
    if (!found) {
        cout << "\nPatient with ID " << searchID << " not found!\n";
    }
}

void searchPatient(const Patient arr[], int count) {
    if (count == 0) {
        cout << "\nDatabase is empty.\n";
        return;
    }

    int searchID;
    bool found = false;

    cout << "\nEnter Patient ID to search: ";
    cin >> searchID;

    for (int i = 0; i < count; i++) {
        if (arr[i].id == searchID) {
            found = true;
            cout << "\nPatient Details:\n";
            cout << "ID: " << arr[i].id << " | Name: " << arr[i].name
                 << " | Age: " << arr[i].age << " | History: " << arr[i].medicalHistory << "\n";
            break;
        }
    }
    if (!found) {
        cout << "\nPatient with ID " << searchID << " not found!\n";
    }
}

//Shifts elements left and decrements count (&count)
void deletePatient(Patient arr[], int &count) {
    if (count == 0) {
        cout << "\nDatabase is empty.\n";
        return;
    }

    int searchID;
    bool found = false;

    cout << "\nEnter Patient ID to delete: ";
    cin >> searchID;

    for (int i = 0; i < count; i++) {
        if (arr[i].id == searchID) {
            found = true;

            // Shift elements to left to overwrite deleted element
            for (int j = i; j < count - 1; j++) {
                arr[j] = arr[j + 1];
            }

            count--;
            cout << "\nPatient record deleted successfully!\n";
            break;
        }
    }

    if (!found) {
        cout << "\nPatient with ID " << searchID << " not found!\n";
    }
}

void displayAll(const Patient arr[], int count) {
    if (count == 0) {
        cout << "\nThe Patient Database is empty.\n";
        return;
    }

    cout << "\n=== List Of Patients ===\n";
    for (int i = 0; i < count; i++) {
        cout << "ID: " << arr[i].id << " | Name: " << arr[i].name
             << " | Age: " << arr[i].age << " | History: " << arr[i].medicalHistory << "\n";
    }
}

int main() {
    const int maxSize = 100;
    Patient array[maxSize];
    int count = 0;
    int choice;

    do {
        cout << "\n=== Hospital Management System ===\n";
        cout << "1. Add New Patient\n";
        cout << "2. Update Patient Information\n";
        cout << "3. Display Patient Details (Search)\n";
        cout << "4. Delete Patient\n";
        cout << "5. Display All Patients\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addPatient(array, count, maxSize);
                break;
            case 2:
                updatePatient(array, count);
                break;
            case 3:
                searchPatient(array, count);
                break;
            case 4:
                deletePatient(array, count);
                break;
            case 5:
                displayAll(array, count);
                break;
            case 6:
                cout << "\nExiting the program...\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}