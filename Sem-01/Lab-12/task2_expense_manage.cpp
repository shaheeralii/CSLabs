/*
 * Author: Syed Shaheer Ali
 * Task: 02 - Managing expenses
 * Lab: 12 - Pointers
 * Purpose: Computes total and average grocery expenditure by processing an integer array passed via pointers.
 */

#include <iostream>
#include <iomanip> 
using namespace std;


void calculateCost(int* arr, int maxFriends) { //normal pointer syntax (int* arr) to accept arr as a reference pointer
    cout << "\n---Data for calculation of groceries---\n";
    double total_cost = 0;

    for (int i = 0; i < maxFriends; i++) {
        cout << "Friend " << i + 1 << " - Enter money spent: $";
        cin >> arr[i];
        total_cost += arr[i];
    }

    double avg = total_cost / maxFriends;

    cout << fixed << setprecision(2);
    cout << "\nTotal expenditure: $" << total_cost;
    cout << "\nAverage spending per person: $" << avg << endl;
}

int main () {
    int maxF;
    cout << "Enter friend count: ";
    cin >> maxF;
    int array[maxF];

    calculateCost(array, maxF);

    return 0;
}