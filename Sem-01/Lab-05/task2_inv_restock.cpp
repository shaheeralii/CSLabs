/*
 * Author: Syed Shaheer Ali
 * Task: 02 - Inventory Restocking System
 * Purpose: Implements a search algorithm over parallel arrays with input validation and error handling for missing items.
 */

#include <iostream>
#include <string>
using namespace std;
int main() {
    char choice = 'y';
    string product_name;
    string product[] = {"Apples", "Oranges", "Bananas", "Bread", "Milk"};
    int units[] = {120, 80, 60, 50, 100};

    cout << "Current Inventory: \n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << product[i] << ": " << units[i] << " units\n";
    }
    do {
        bool found = false;

        cout << "\nEnter the product name to restock: ";
        cin >> product_name;

        for (int i = 0; i < 5; i++) {
            if (product_name == product[i]) {
                found = true;
                int qty;
                cout << "Enter the quantity to restock: ";
                cin >> qty;

                while (qty < 1) {
                    cout << "\nError: Invalid Quantity! Please enter a positive number: ";
                    cin >> qty;
                }

                units[i] += qty;
                cout << "\nProduct '" << product[i] << "' successfully restocked with " << qty << " units.\n";
                break;
            }
        }

        if (!found) {
            cout << "\nError: Product '" << product_name << "' not found in inventory.\n";
        }

        cout << "\nWould you like to restock another product? (Y/N): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nExiting the program. Thank you!";
    
    cout << "\n\nFinal Inventory: \n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << product[i] << ": " << units[i] << " units\n";
    }

    return 0;
}