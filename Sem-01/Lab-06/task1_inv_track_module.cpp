/*
 * Author: Syed Shaheer Ali
 * Task: 01 - Inventory Tracking Module (Matrix Addition)
 * Lab: 06 - Multi-Dimensional Arrays
 * Purpose: Consolidates current and previous month inventory levels across multiple 
 *          locations by performing element-wise 2D matrix addition.
 */

#include <iostream>
using namespace std;

int main() {
    // Define maximum limits to comply with C++ standards
    const int MAX = 100;
    int row, col;

    cout << "Enter number of products (rows): ";
    cin >> row;
    cout << "Enter number of locations (columns): ";
    cin >> col;

    int matrixA[MAX][MAX];
    int matrixB[MAX][MAX];
    int finalArr[MAX][MAX];

    //Input inv A
    cout << "\nEnter inventory for CURRENT month (Matrix A):\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Product " << i + 1 << ", Location " << j + 1 << ": ";
            cin >> matrixA[i][j];
        }
    }

    //Input inv B
    cout << "\nEnter inventory for PREVIOUS month (Matrix B):\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Product " << i + 1 << ", Location " << j + 1 << ": ";
            cin >> matrixB[i][j];
        }
    }

    // Matrix addition
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            finalArr[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Displaying inv
    cout << "\nConsolidated Inventory (Current + Previous Month):\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << finalArr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}