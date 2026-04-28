/*
 * Author: Syed Shaheer Ali
 * Task: 04 - Laboratory Billing System
 * Purpose: Generates formatted service receipts including quantity-based pricing and tax calculations.
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    string service;
    int qty;
    double service_fee_per_unit;
    const double TAX_RATE = 0.05;

    cout << "Enter the following details: ";
    cout << "\nService Description: ";
    getline(cin, service);
    cout << "\nQuantity = ";
    cin >> qty;
    cout << "\nService fee per unit = ";
    cin >> service_fee_per_unit;

    double total_cost = service_fee_per_unit * qty;
    double grand_total = total_cost + (total_cost * TAX_RATE);


    cout << fixed << setprecision(2);
    cout << "\n---------------------------------------------------";
    cout << "\nService\t\t| Quantity | Fee\t| Total";
    cout << "\n---------------------------------------------------";
    cout << "\n" << service << "\t| " << qty << "\t   | " << service_fee_per_unit << "\t| " << total_cost;
    cout << "\n---------------------------------------------------";
    cout << "\nGrand Total(5% Tax)\t\t\t| " << grand_total;
    cout << "\n---------------------------------------------------\n";

    return 0;
}