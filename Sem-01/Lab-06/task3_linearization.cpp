/*
 * Author: Syed Shaheer Ali
 * Task: 03 - Image Compression (Linearization)
 * Lab: 06 - Multi-Dimensional Arrays
 * Purpose: Flattens a 2D pixel grid into a 1D linear array using row-major ordering 
 *          and applies Run-Length Encoding (RLE) to compress sequential pixel data.
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int MAX = 100;
    int rows, cols;

    cout << "Enter image height (rows): ";
    cin >> rows;
    cout << "Enter image width (columns): ";
    cin >> cols;

    int image2D[MAX][MAX];
    int linearized1D[MAX * MAX];

    // Input 2D pixel values
    cout << "\nEnter pixel intensity values (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Pixel [" << i << "][" << j << "]: ";
            cin >> image2D[i][j];
        }
    }

    // Display 2D array
    cout << "\n--- Original 2D Image Grid ---\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << image2D[i][j] << "\t";
        }
        cout << endl;
    }

    // Row-Major Linearization (2D -> 1D Transformation)
    // Mapping Formula: index = (row_index * total_cols) + col_index
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            linearized1D[index] = image2D[i][j];
            index++;
        }
    }

    int totalPixels = rows * cols;

    // Display Linearized 1D array
    cout << "\n--- Linearized 1D Array Format ---\n";
    for (int i = 0; i < totalPixels; i++) {
        cout << linearized1D[i] << " ";
    }
    cout << "\nTotal Elements: " << totalPixels << endl;

    // Compression Phase (Run-Length Encoding on 1D Stream)
    cout << "\n--- Compressed Stream (Run-Length Encoded: [Count, Value]) ---\n";
    int compressedSize = 0;

    for (int i = 0; i < totalPixels; i++) {
        int runLength = 1;

        // Count consecutive identical pixel values
        while (i + 1 < totalPixels && linearized1D[i] == linearized1D[i + 1]) {
            runLength++;
            i++;
        }

        cout << "[" << runLength << ", " << linearized1D[i] << "] ";
        compressedSize += 2; // Each run stores 2 values (count and value)
    }

    cout << "\n\nOriginal Size: " << totalPixels << " units";
    cout << "\nCompressed Size: " << compressedSize << " units\n";

    return 0;
}