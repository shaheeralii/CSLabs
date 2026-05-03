/*
 * Author: Syed Shaheer Ali
 * Task: 01 - Online Food Ordering System (Arrays)
 * Purpose: Manages food items and pricing using parallel arrays and processes orders via index mapping.
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main () {
    string menuNames[] = {"Burger", "Pizza", "Fries", "Soda", "Ice Cream"};
    double menuPrices[] = {5.99, 8.49, 2.99, 1.99, 3.50};
    int orderQty[5] = {0};

    int itemNum, qty;
    char choice, delType;
    double delCost = 0, subtotal = 0;

    cout << "=== Welcome to FastBite Online Ordering ===\n"; 
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << menuNames[i] << " - $" << menuPrices[i] << endl;
    }
    do {
        cout << "\nEnter item no. to order (1-5): ";
        cin >> itemNum;
        while (itemNum < 1 || itemNum > 5) {
            cout << "Invalid Selection! Re-enter";
            cin >> itemNum;
        }
        cout << "\nEnter quantity for " << menuNames[itemNum - 1] << " :";
        cin >> qty;

        orderQty[itemNum - 1] += qty;

        cout << "Do you want to add more items? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Choose delivery (d) or pickup (p): ";
    cin >> delType;
    if (delType == 'd' || delType == 'D') {
        delCost = 3.0;
    }

    cout << "\n=== Order Summary ===\n";
    cout << fixed << setprecision(2);

    for (int i = 0; i < 5; i++) {
        if (orderQty[i] > 0) {
            double lineTotal = orderQty[i] * menuPrices[i];
            cout << menuNames[i] << " x" << orderQty[i] << " = $" << lineTotal << endl;
            subtotal += lineTotal;
        }
    }

    cout << "Delivery fee: $" << delCost << endl;
    cout << "Total: $" << subtotal + delCost << endl;
    cout << "Thank you for ordering with FastBite!\n";

    return 0;
}