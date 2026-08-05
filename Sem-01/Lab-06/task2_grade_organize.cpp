/*
 * Author: Syed Shaheer Ali
 * Task: 02 - Student Grades Organization (Matrix Transpose)
 * Lab: 06 - Multi-Dimensional Arrays
 * Purpose: Reorganizes student grade records by transposing a 2D matrix (converting 
 *          Students x Assignments to Assignments x Students) and calculates the 
 *          average grade for each assignment.
 */
#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int numStudents, numAssignments;

    cout << "Enter number of students (rows): ";
    cin >> numStudents;
    cout << "Enter number of assignments (columns): ";
    cin >> numAssignments;

    int orgMatrix[MAX][MAX];
    int trMatrix[MAX][MAX];

    // Org Matrix input
    cout << "\nEnter data for " << numStudents << " x " << numAssignments << " Matrix:\n";
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numAssignments; j++) {
            cout << "Student " << i + 1 << ", Assignment " << j + 1 << ": ";
            cin >> orgMatrix[i][j];
        }
    }

    // Org Matrix view
    cout << "\nOriginal Matrix (Students x Assignments):\n";
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numAssignments; j++) {
            cout << orgMatrix[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose Matrix step
    // Transposed rows = numAssignments, Transposed cols = numStudents
    for (int i = 0; i < numAssignments; i++) {
        for (int j = 0; j < numStudents; j++) {
            trMatrix[i][j] = orgMatrix[j][i];
        }
    }

    // Transpose Matrix view
    cout << "\nTransposed Matrix (Assignments x Students):\n";
    for (int i = 0; i < numAssignments; i++) {
        for (int j = 0; j < numStudents; j++) {
            cout << trMatrix[i][j] << " ";
        }
        cout << endl;
    }

    // Avg grades for each assignment
    cout << "\nAverage Grades for Each Assignment:\n";
    for (int i = 0; i < numAssignments; i++) {
        float sum = 0;
        for (int j = 0; j < numStudents; j++) {
            sum += trMatrix[i][j];
        }
        float avg = sum / numStudents;
        cout << "Assignment " << i + 1 << ": " << avg << endl;
    }

    return 0;
}