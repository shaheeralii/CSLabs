/*
 * Author: Syed Shaheer Ali
 * Task: 04 - Professional Event Management (Seating Arrangement)
 * Lab: 06 - Multi-Dimensional Arrays
 * Purpose: Implements a menu-driven seating system using a 2D grid to handle seat 
 *          reservations, track attendee counts by profession (Finance, Marketing, 
 *          Engineering), and display available seats (includes prototying).
 */

#include <iostream>
#include <string>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

// Function Prototypes
void assignZero(string arr[ROWS][COLS]);
void reserveSeat(string arr[ROWS][COLS], int maxSize, int &resCount);
void attendeesByTitle(const string arr[ROWS][COLS]);
void seatsAvailable(const string arr[ROWS][COLS]);
void viewMatrix(const string arr[ROWS][COLS]);

int main() {
    int maxSize = ROWS * COLS;
    int reserveCount = 0;
    string array[ROWS][COLS];
    int choice;

    assignZero(array);

    do {
        cout << "\n=== Welcome to Professional Event Management - Seating Arrangement ===";
        cout << "\n1. Reserve a seat";
        cout << "\n2. Professionals attending in event (F, M, E)";
        cout << "\n3. Available seats in event";
        cout << "\n4. View Seat Matrix";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                reserveSeat(array, maxSize, reserveCount);
                break;
            case 2:
                attendeesByTitle(array);
                break;
            case 3:
                seatsAvailable(array);
                break;
            case 4:
                viewMatrix(array);
                break;
            case 5:
                cout << "\nExiting the program...\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

// Fills the grid with '0' for initial unreserved state
void assignZero(string arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = "0";
        }
    }
}

void reserveSeat(string arr[ROWS][COLS], int maxSize, int &resCount) {
    if (resCount >= maxSize) {
        cout << "\nNo more seats available!";
        return;
    }

    int searchRow, searchCol;
    cout << "\nEnter seat row (1-" << ROWS << ") and column (1-" << COLS << ") to reserve: ";
    cin >> searchRow >> searchCol;

    // Convert 1-based user input to 0-based array index
    int r = searchRow - 1;
    int c = searchCol - 1;

    // Bounds checking
    if (r < 0 || r >= ROWS || c < 0 || c >= COLS) {
        cout << "\nInvalid row or column number!";
        return;
    }

    if (arr[r][c] == "0") {
        string status;
        cout << "Seat Available! Enter your Designation (F=Finance, M=Marketing, E=Engineering): ";
        cin >> status;

        arr[r][c] = status;
        resCount++; // Increment successful reservations count
        cout << "Seat reserved successfully!\n";
    } else {
        cout << "\nSeat not available! Already occupied by " << arr[r][c] << ".\n";
    }
}

void seatsAvailable(const string arr[ROWS][COLS]) {
    int freeCount = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] == "0") {
                freeCount++;
            }
        }
    }
    cout << "\nAvailable seats in event: " << freeCount << " / " << (ROWS * COLS) << endl;
}

void attendeesByTitle(const string arr[ROWS][COLS]) {
    int f = 0, m = 0, e = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] == "F" || arr[i][j] == "f") f++;
            else if (arr[i][j] == "M" || arr[i][j] == "m") m++;
            else if (arr[i][j] == "E" || arr[i][j] == "e") e++;
        }
    }
    cout << "\n--- Professionals Attending this Event ---";
    cout << "\nFinance: " << f;
    cout << "\nMarketing: " << m;
    cout << "\nEngineering: " << e << endl;
}

void viewMatrix(const string arr[ROWS][COLS]) {
    cout << "\nSeat Matrix:\n";
    cout << "-----------------\n";

    // Print column headers (1 2 3 4 5)
    cout << "   ";
    for (int j = 0; j < COLS; j++) {
        cout << j + 1 << " ";
    }
    cout << "\n";

    // Print rows with row headers (1, 2, 3...)
    for (int i = 0; i < ROWS; i++) {
        cout << i + 1 << "  "; // Row label
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}