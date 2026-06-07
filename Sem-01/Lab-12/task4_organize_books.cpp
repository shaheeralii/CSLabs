/*
 * Author: Syed Shaheer Ali
 * Task: 04 - Organizing a Shelf of Books
 * Lab: 12 - Pointers
 * Purpose: Sorts an array of book heights in ascending order using an array pointer within a bubble sort function.
 */

#include <iostream>
#include <string>
using namespace std;

void arrange(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) { //bubble sort
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main () {
    int array[] = {30, 20, 40, 10, 25};

    cout << "Heights of books before organizing:\n";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " cm ";
    }
    cout << endl;
    arrange(array, 5);

    cout << "Heights of books after organizing:\n";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " cm ";
    }

    return 0;
}