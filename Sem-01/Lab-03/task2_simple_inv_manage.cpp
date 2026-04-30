/*
 * Author: Syed Shaheer Ali
 * Task: 02 - Inventory Management
 * Purpose: Calculates total inventory value by iterating through a user-defined number of items and summing their total costs.
 */

#include <iostream>
using namespace std;
int main () {
    int itemCount;
    double totalValue = 0;
    
    cout << "Enter the no. of different items in stock: ";
    cin >> itemCount;

    for (int z = 1; z <= itemCount; z++) {
        double price_per_unit = 0;
        int qty;

        cout << "\nEnter the price per unit of item " << z << " : $";
        cin >> price_per_unit;
        cout << "\nEnter the quantity of item " << z << " : ";
        cin >> qty;
        
        totalValue += (price_per_unit * qty);
    }

    cout << "\nTotal value of inventory: $" << totalValue;

    return 0;
}