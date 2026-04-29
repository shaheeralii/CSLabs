/*
 * Author: Syed Shaheer Ali
 * Task: 02 - Shopping Cart Discount
 * Purpose: Calculates a 10% discount for purchases over 15,000 Rupees using if-else logic.
 */

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double total_amount = 0;

    cout << "Enter the total purchase amount in Rupees: ";
    cin >> total_amount;

    if (total_amount > 15000) {
        double disc_amount = total_amount * 0.90;

        cout << fixed << setprecision(2);
        cout << "Congrats! You get a 10% discount.\n";
        cout << "Discounted amount: " << disc_amount << " Rupees";
    }
    else {
        cout << "You are not eligible for a discount!\n";
        cout << "Total Amount: " << total_amount << " Rupees";
    }

    return 0;
}